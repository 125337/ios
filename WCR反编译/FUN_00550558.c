// FUN_00550558 @ 00550558

void FUN_00550558(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_118;
  char *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  long local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar2 = local_30;
  if (lVar1 == 0) {
    local_28 = (char *)0x0;
    local_58 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar2;
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_m_nsNickName_0269d758);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar1 != 0) {
      lVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_60;
      local_60 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    if (DAT_028cb3f8 == (char *)0x0) {
      pcVar3 = "WCUserComment";
      _objc_getClass();
      DAT_028cb3f8 = pcVar3;
    }
    pcVar3 = DAT_028cb3f8;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc_init();
    local_70 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setUsername__026a2510,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setNickname__026a4eb8,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setType__026a3cb8,2);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_WCRefine__ld
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCommentID__026a4ef0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCreateTime__026a4ec8,(int)param_1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_38 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    else {
      local_118 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setContent__026a4ad8,local_118);
    pcVar3 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_58 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

