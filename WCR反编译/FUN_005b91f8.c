// FUN_005b91f8 @ 005b91f8

void FUN_005b91f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    lVar1 = local_30;
    FUN_005b9830(local_30,PTR_s_GetChatName_0269da58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_30;
      FUN_0059d260(local_30,&cf_m_nsFromUsr);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      FUN_005a0828();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_30;
      FUN_0059d260(local_30,&cf_m_nsToUsr);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      FUN_005a0828();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    lVar1 = local_30;
    FUN_0059d260(local_30,&cf_m_uiMesLocalID);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    FUN_0059d260(local_30,&cf_m_n64MesSvrID);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (((lVar1 == 0) && ((int)lVar2 == 0)) && (lVar3 == 0)) {
      local_28 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____u__lld
                );
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar4;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

