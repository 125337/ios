// FUN_001c96b4 @ 001c96b4

void FUN_001c96b4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8de8)(param_1,param_2);
  FUN_001cf8b0();
  if (((param_1 & 1) != 0) && (param_1 = local_18, FUN_001d167c(), (param_1 & 1) != 0)) {
    param_1 = local_18;
    FUN_001e7bcc();
  }
  FUN_001cf94c();
  if (((param_1 & 1) != 0) && (uVar1 = local_18, FUN_001d24ac(), (uVar1 & 1) == 0)) {
    local_21 = 0;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    while (uVar1 = local_30, local_30 != 0) {
      pcVar2 = &cf_WCTimeLineViewController;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
      uVar3 = local_30;
      if ((uVar1 & 1) != 0) {
LAB_001c9890:
        local_21 = 1;
        break;
      }
      pcVar2 = &cf_WCTimeLineTableView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
      uVar1 = local_30;
      if ((uVar3 & 1) != 0) goto LAB_001c9890;
      pcVar2 = &cf_WCListViewController;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
      uVar3 = local_30;
      if ((uVar1 & 1) != 0) goto LAB_001c9890;
      pcVar2 = &cf_WCListView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
      if ((uVar3 & 1) != 0) goto LAB_001c9890;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_21 & 1) != 0) {
      FUN_001d0ac4(local_18);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

