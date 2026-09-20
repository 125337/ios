// FUN_00759928 @ 00759928

void FUN_00759928(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  long local_30;
  uint local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    local_28 = 1;
  }
  else {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (lVar2 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_30;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00759b90;
      local_48 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_18;
      local_40 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = lVar1;
      _dispatch_async(puVar4,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
    }
    local_28 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

