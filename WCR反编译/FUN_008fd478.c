// FUN_008fd478 @ 008fd478

void FUN_008fd478(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *local_50;
  uint local_40;
  cfstringStruct *local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_40 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_008dee38(uVar2,*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    local_40 = (uint)uVar2;
  }
  local_21 = (byte)local_40 & 1;
  if ((local_40 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      local_50 = &cf_ZSOl1Y_;
    }
    else {
      local_50 = &cf__T;
      if ((*(byte *)(param_1 + 0x4d) & 1) == 0) {
        local_50 = &cf_PNaSGrl1Y_;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_50,
               *(undefined8 *)(param_1 + 0x40));
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x40));
  }
  return;
}

