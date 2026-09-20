// FUN_0034ee7c @ 0034ee7c

void FUN_0034ee7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  uint local_84;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [15];
  byte local_31;
  long local_30;
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  FUN_0034e7a8();
  if (((ulong)puVar2 & 1) == 0) {
    local_24 = 1;
  }
  else {
    local_31 = 0;
    local_84 = 1;
    if (local_18 != 0) {
      lVar3 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028ca028);
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_84 = (uint)lVar3;
    }
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    lVar3 = local_18;
    if ((local_84 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar3,&DAT_028ca028,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_initWeak(auStack_40,local_18);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_003553cc;
      local_58 = &DAT_02579c60;
      _objc_copyWeak(auStack_48,auStack_40);
      uVar1 = local_20;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      _dispatch_async(puVar4,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_50,0);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_40);
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

