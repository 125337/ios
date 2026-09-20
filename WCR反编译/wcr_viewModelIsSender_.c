// wcr_viewModelIsSender: @ 010e9bb8

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::wcr_viewModelIsSender_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      FUN_010e92bc();
      local_11 = (byte)uVar1 & 1;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSender_0269d1b0);
      local_11 = (byte)uVar1 & 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

