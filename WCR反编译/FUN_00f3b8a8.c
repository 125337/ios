// FUN_00f3b8a8 @ 00f3b8a8

void FUN_00f3b8a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  bool local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_emoticonFilePathForMD5__026ac000,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_49 = false;
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),local_b8,
               PTR_s_processGIFAtPath_scale_targetSiz_026ac198,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_b8;
  }
  local_49 = lVar1 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_00f3bae4;
  local_90 = &DAT_02582bb8;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = uVar3;
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x40);
  local_68 = *(undefined8 *)(param_1 + 0x38);
  local_60 = *(undefined8 *)(param_1 + 0x50);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar3;
  _dispatch_async(puVar2,&local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

