// FUN_0055f328 @ 0055f328

void FUN_0055f328(ulong param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_m_dataItem_026a4670);
    if ((param_1 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_dataItem);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_18 = uVar2;
      goto LAB_0055f578;
    }
  }
  pcVar1 = &cf_WCCommentDetailViewControllerFB;
  _NSClassFromString();
  uVar2 = local_20;
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    local_50 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    while (local_58 != 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_48);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_50,local_58);
        break;
      }
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_50 == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_50;
      FUN_00565494();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
    local_40 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
LAB_0055f578:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

