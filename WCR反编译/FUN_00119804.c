// FUN_00119804 @ 00119804

void FUN_00119804(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    pcVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_30 = 1;
    local_18 = pcVar2;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_30 = 1;
      local_18 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      else {
        FUN_0010dca0(pcVar2,&cf_m_nsChatRoomMemList);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00119ab8();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

