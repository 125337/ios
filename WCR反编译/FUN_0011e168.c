// FUN_0011e168 @ 0011e168

void FUN_0011e168(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_30 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00123668;
      local_48 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_20;
      local_40 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = lVar2;
      _dispatch_async(puVar4,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
      local_30 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_18,
                 local_20);
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

