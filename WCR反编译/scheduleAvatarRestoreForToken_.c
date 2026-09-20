// scheduleAvatarRestoreForToken: @ 015ef318

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::scheduleAvatarRestoreForToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  double local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_initWeak(auStack_40,local_28);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_015ef5d4;
  local_78 = &DAT_02579c60;
  local_48 = uVar1;
  _objc_copyWeak(auStack_68,auStack_40);
  uVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar1;
  uVar1 = 0;
  _dispatch_block_create(0,&local_90);
  local_60[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarRestoreBlock__026b12f0,uVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_98 = (double)(long)puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_98 < 1.0) {
    local_98 = 1.0;
  }
  if (60.0 < local_98) {
    local_98 = 60.0;
  }
  dVar4 = _dispatch_time(0,(long)(local_98 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar4,puVar2,local_60[0]);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_70,0);
  _objc_destroyWeak(auStack_68);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

