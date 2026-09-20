// _WCRefineEnhancedAdBlockIsAdText @ 00f52dec

byte _WCRefineEnhancedAdBlockIsAdText(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_94;
  undefined *local_80;
  ulong local_78;
  undefined4 local_6c;
  ulong local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  uVar2 = local_68;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_68;
  if ((uVar2 & 1) == 0) {
    local_59 = 0;
    local_6c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&cf_this___wxLibrary);
    if ((uVar3 & 1) == 0) {
      local_58 = &cf_getadvert;
      local_50 = &cf_getAdPreloadData;
      local_48 = &cf__ads_;
      local_40 = &cf__ads_;
      local_38 = &cf_advert_group;
      local_30 = &cf_advertisement_;
      local_28 = &cf_ad_posid;
      local_20 = &cf_custom_event_wxAdDelayReport;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_78;
      local_80 = puVar1;
      FUN_00f53074(local_78,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_isEqualToString__0269ccc8,&cf_adDataReport);
        local_94 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_isEqualToString__0269ccc8,&cf_shouldShowSplashAd);
          local_94 = (byte)uVar2;
        }
        local_59 = local_94 & 1;
      }
      else {
        local_59 = 1;
      }
      local_6c = 1;
      _objc_storeStrong(&local_80,0);
    }
    else {
      local_59 = 0;
      local_6c = 1;
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_59 & 1;
}

