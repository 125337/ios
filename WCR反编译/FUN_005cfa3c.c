// FUN_005cfa3c @ 005cfa3c

void FUN_005cfa3c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  char *local_50;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar2 = local_30;
  FUN_005d0ca4();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCNewCommitViewController";
  local_38 = lVar2;
  _objc_getClass();
  pcVar4 = &cf_initWithImages_contacts_;
  local_50 = pcVar3;
  _NSSelectorFromString();
  lVar2 = local_38;
  local_58 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (((lVar2 == 0) || (local_50 == (char *)0x0)) ||
     (pcVar3 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_instancesRespondToSelector__0269da90,local_58),
     ((ulong)pcVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrlSNS_u);
    local_5c = 1;
  }
  else {
    pcVar3 = local_50;
    _objc_alloc();
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,local_58,local_38,0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_68 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__hV1Y_);
      local_5c = 1;
    }
    else {
      _WCRefineMarkMomentsForwardEditor(local_68,local_30);
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setType__026a3cb8);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setType__026a3cb8,1);
      }
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_locationInfo);
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar2;
      if ((lVar2 != 0) &&
         (pcVar3 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setPoiInfo__026a4e08),
         ((ulong)pcVar3 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPoiInfo__026a4e08,local_70);
      }
      pcVar3 = local_68;
      pcVar4 = &cf_setBNeedAnimation_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
      pcVar5 = local_68;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = &cf_setBNeedAnimation_;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4,0);
      }
      lVar2 = local_30;
      FUN_005d07f4();
      _objc_retainAutoreleasedReturnValue();
      local_78 = lVar2;
      FUN_005d0aa8(local_68,lVar2);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_findViewController_026a5820);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_80 = lVar2;
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar2 != 0;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      if (bVar1) {
        lVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sb);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      local_5c = 0;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

