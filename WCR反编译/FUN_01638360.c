// FUN_01638360 @ 01638360

byte FUN_01638360(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined *local_78;
  char *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  char *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_41 = 0;
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
  }
  else {
    local_78 = local_30;
  }
  local_41 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar4 = "MMWebViewController";
  _objc_getClass();
  pcVar5 = &cf_initWithURL_presentModal_extraInfo_;
  local_50 = pcVar4;
  _NSSelectorFromString();
  local_58 = pcVar5;
  if ((((local_28 == (undefined *)0x0) || (local_38 == (undefined *)0x0)) ||
      (local_50 == (char *)0x0)) ||
     (pcVar4 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_instancesRespondToSelector__0269da90,pcVar5),
     ((ulong)pcVar4 & 1) == 0)) {
    local_11 = 0;
    local_5c = 1;
  }
  else {
    pcVar4 = local_50;
    _objc_alloc();
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (local_68 == (char *)0x0) {
      local_11 = 0;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushViewController_animated__0269cd40);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_pushViewController_animated__0269d590,local_68,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_PushViewController_animated__0269cd40,local_68,1);
      }
      local_11 = 1;
    }
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

