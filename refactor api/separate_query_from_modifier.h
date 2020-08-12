#pragma once

namespace sqmf {

void old() {
  function getTotalOutstandingAndSendBill() {
    const result = customer.invoices.reduce((total, each) = > each.amount + total, 0);
    sendBill();
    return result;
  }
}

void oldOpt() {
  function totalOutstanding() {
    return customer.invoices.reduce((total, each) = > each.amount + total, 0);
  }
  function sendBill() { emailGateway.send(formatBill(customer)); }
}

}  // namespace sqmf
