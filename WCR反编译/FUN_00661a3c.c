// FUN_00661a3c @ 00661a3c

void FUN_00661a3c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lVar4;
  undefined *puVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_28;
  long local_18;
  long *plVar3;
  
  plVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar3,param_1);
  uVar2 = (uint)plVar3;
  if ((local_18 == 0) || (FUN_0064cd38(), (uVar2 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    lVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cbc5f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_18;
    if (lVar4 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028cbc5f,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_18;
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_00661c54;
      local_38 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = lVar1;
      _dispatch_async(puVar5,&local_50);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_30,0);
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

