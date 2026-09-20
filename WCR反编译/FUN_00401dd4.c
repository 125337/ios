// FUN_00401dd4 @ 00401dd4

void FUN_00401dd4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38 [3];
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_00420fa0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  FUN_004218c4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_38[0] = lVar1;
  FUN_00421e58(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_38[0];
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      dVar3 = _dispatch_time(0,1000000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_38[0];
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_0042276c;
      local_58 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_40;
      local_50 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar1;
      _dispatch_after(dVar3,puVar4,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

