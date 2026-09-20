// FUN_01d22ca0 @ 01d22ca0

void FUN_01d22ca0(long param_1)

{
  long local_30;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_30 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
  if (local_30 < 0) {
    local_30 = 0;
  }
  if (0x1e < local_30) {
    local_30 = 0x1e;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopAutoReplyDelaySecon_026c42d0,
             local_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

