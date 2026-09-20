// FUN_00efe9e4 @ 00efe9e4

void FUN_00efe9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_f8;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_1);
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_4);
  lVar1 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
  if (((lVar1 == 0) ||
      (lVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
      lVar1 == 0)) ||
     (lVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_a0 = (undefined *)0x0;
  }
  else {
    local_98 = &cf_title;
    local_60 = local_a8;
    local_90 = &cf_icon;
    pcVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f8 = &cf_icons_outlined_link;
    }
    else {
      local_f8 = local_b0;
    }
    local_58 = local_f8;
    local_88 = &cf_action;
    pcVar2 = &cf_wcr_custom_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_wcr_custom_,PTR_s_stringByAppendingString__0269d398,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf__wcrEnabled;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_5 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf__wcrSource;
    local_40 = &cf_WCRefine;
    local_70 = &cf__wcrCustomKind;
    local_38 = &cf_url;
    local_68 = &cf__wcrCustomPayload;
    local_30 = local_c0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

