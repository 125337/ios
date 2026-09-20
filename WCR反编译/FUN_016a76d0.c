// FUN_016a76d0 @ 016a76d0

/* WARNING: Type propagation algorithm not settling */

void FUN_016a76d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58 [3];
  long local_40 [3];
  long local_28;
  
  local_40[1] = 0;
  local_40[2] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e3f12);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_40[0] = lVar1;
  _objc_getAssociatedObject(local_28,&DAT_028e3f11);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_40[0];
  local_58[0] = lVar2;
  FUN_016c59b8();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar1;
  _objc_setAssociatedObject(local_28,&DAT_028e3f12,0,1);
  lVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    FUN_016abf68(&cf_eQ_TVYTy);
    dVar3 = _dispatch_time(0,250000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58[0];
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_016d522c;
    local_78 = &DAT_02579ee0;
    local_68 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar1;
    _dispatch_after(dVar3,puVar4,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_94 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    _objc_initWeak(auStack_a0,local_28);
    lVar2 = local_58[0];
    lVar1 = local_60;
    puVar4 = PTR_WCRefineMessageRepositoryStore_026ce120;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_016d5264;
    local_b0 = &DAT_02588270;
    _objc_copyWeak(auStack_a8,auStack_a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addCompositeMessageItems_remark__026b2e10,lVar2,lVar1,&local_c8);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    local_94 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

