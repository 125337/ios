// _WCRefineViewControllerIsKindaWalletListPage @ 00f1349c

byte _WCRefineViewControllerIsKindaWalletListPage(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  cfstringStruct **ppcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_90;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  byte local_11;
  
  ppcVar4 = &local_20;
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar4,param_1);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (_WCRefineCustomAmountFeatureAllowed(), ((ulong)ppcVar4 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar5 = &cf_KindaViewController;
    _NSClassFromString();
    local_30 = pcVar5;
    if ((pcVar5 == (cfstringStruct *)0x0) ||
       (pcVar6 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar5),
       ((ulong)pcVar6 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      pcVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_50 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_90 = local_60;
        if (local_60 == (cfstringStruct *)0x0) {
          local_90 = &cf___;
        }
        local_78 = local_90;
      }
      else {
        local_78 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        local_40 = local_78;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_78;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_S);
      local_11 = (byte)pcVar5 & 1;
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

