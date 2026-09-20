// FUN_00fe56d0 @ 00fe56d0

undefined8 FUN_00fe56d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_order_026ad490);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_order_026ad490);
  if (lVar1 == lVar2) {
    local_18 = 0;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_order_026ad490);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_order_026ad490);
    if (lVar1 < lVar2) {
      local_18 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        local_18 = 1;
      }
    }
    else {
      local_18 = 1;
      if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
        local_18 = 0xffffffffffffffff;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

