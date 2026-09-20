// wcrRepo_attemptLocateWrap:session:preferredID:nav:remainingTries:completion: @ 01bb3a40

/* Function Stack Size: 0x40 bytes */

void WCRefineMessageRepositoryViewController::
     wcrRepo_attemptLocateWrap_session_preferredID_nav_remainingTries_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6,
               long_long param_7,ID param_8,undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 auStack_88 [8];
  long_long local_80;
  long_long local_78;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  long local_60;
  long_long local_58;
  undefined8 local_50;
  long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  local_60 = 0;
  local_58 = param_7;
  _objc_storeStrong(&local_60,param_8);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcrRepo_tryLocateWrap_session_pr_026c0440,local_38,local_40,local_48,
             local_50);
  if ((IVar4 & 1) == 0) {
    if ((long)local_58 < 1) {
      if (local_60 != 0) {
        (**(code **)(local_60 + 0x10))(local_60,0);
      }
      local_64 = 1;
    }
    else {
      _objc_initWeak(local_58,auStack_70,local_28);
      dVar5 = _dispatch_time(0,150000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01bb3d4c;
      local_b0 = &DAT_0258b5f0;
      _objc_copyWeak(auStack_88,auStack_70);
      lVar1 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_38;
      local_90 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_40;
      local_a8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_50;
      local_a0 = uVar3;
      local_80 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = uVar2;
      local_78 = local_58;
      _dispatch_after(dVar5,puVar6,&local_c8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_90,0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_70);
      local_64 = 0;
    }
  }
  else {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,1);
    }
    local_64 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

