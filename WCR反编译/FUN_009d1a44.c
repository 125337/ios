// FUN_009d1a44 @ 009d1a44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009d1a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar4 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar1 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_009d3b50;
      local_50 = &DAT_0257ca68;
      uVar2 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_30;
      local_48 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = lVar3;
      _dispatch_async(puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_34 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_48,0);
    }
    else {
      FUN_009d3b88(local_28);
      _objc_initWeak(auStack_70,local_28);
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      puVar4 = PTR__OBJC_CLASS___NSTimer_026ce210;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_009d3d1c;
      local_a0 = &DAT_025815d8;
      local_78 = lVar3;
      _objc_copyWeak(auStack_90,auStack_70);
      lVar3 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,puVar4,PTR_s_timerWithTimeInterval_repeats_bl_026a5498,1,
                 &local_b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgressTimer__026aae90);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressTimer_026aae88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_addTimer_forMode__026ca4d0,uVar2,
                 *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_98);
      _objc_destroyWeak(auStack_90);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_70);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

