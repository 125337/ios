// FUN_0023802c @ 0023802c

void FUN_0023802c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_50;
  long local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  lVar3 = local_48;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_60 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar2 = local_40;
    uVar1 = DAT_026dfb30;
    if (((ulong)puVar5 & 1) == 0) {
      FUN_0022a7fc(local_50,0);
      FUN_0022a3a0(local_40);
      local_60 = 1;
    }
    else {
      local_38 = &cf_id;
      local_30 = local_50;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_50;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_002386f4;
      local_78 = &DAT_02578e60;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_40;
      local_70 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar1;
      _dispatch_async(puVar4,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_70,0);
      local_60 = 0;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

