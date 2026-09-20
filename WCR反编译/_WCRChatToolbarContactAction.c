// _WCRChatToolbarContactAction @ 00eedf1c

void _WCRChatToolbarContactAction(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_98;
  long local_90;
  long local_88;
  undefined4 local_7c;
  long local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_1);
  lVar1 = local_78;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_78;
  local_78 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_70 = (undefined *)0x0;
    local_7c = 1;
  }
  else {
    lVar2 = local_78;
    FUN_00eee3ac();
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar2;
    FUN_00eee4f4(lVar2,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      lVar1 = local_88;
      FUN_00eee4f4(local_88,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      FUN_00eee23c();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_90;
      local_90 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      _objc_storeStrong(&local_90,local_78);
    }
    pcVar4 = &cf_chat_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_chat_,PTR_s_stringByAppendingString__0269d398,local_78);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_title;
    local_40 = local_90;
    local_60 = &cf_icon;
    local_58 = &cf_action;
    local_50 = &cf__wcrEnabled;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = pcVar4;
    local_38 = pcVar4;
    local_30 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf__wcrSource;
    local_20 = &cf_WCRefine;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_28 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_68,5);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_7c = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

