// FUN_0162e55c @ 0162e55c

byte FUN_0162e55c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined4 local_78;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  puVar2 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf____);
  local_41 = false;
  local_38 = pcVar1;
  local_30 = puVar2;
  if (pcVar1 != (cfstringStruct *)0x7fffffffffffffff) {
    local_88 = local_20;
  }
  else {
    local_88 = &cf_https___;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_https___,PTR_s_stringByAppendingString__0269d398,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_88;
  }
  local_41 = pcVar1 == (cfstringStruct *)0x7fffffffffffffff;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_88;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_SFSafariViewController;
  local_50 = puVar2;
  _NSClassFromString();
  pcVar3 = &cf_initWithURL_;
  local_58 = pcVar1;
  _NSSelectorFromString();
  local_60 = pcVar3;
  FUN_0162be00();
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  local_a0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a0 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_a0;
  }
  local_71 = pcVar3 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_a0;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((((local_50 == (undefined *)0x0) || (local_68 == (cfstringStruct *)0x0)) ||
      (local_58 == (cfstringStruct *)0x0)) ||
     (pcVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_58,PTR_s_instancesRespondToSelector__0269da90,local_60),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
    local_78 = 1;
  }
  else {
    pcVar1 = local_58;
    _objc_alloc();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_11 = local_80 != (cfstringStruct *)0x0;
    if ((bool)local_11) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1,0);
    }
    local_78 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

