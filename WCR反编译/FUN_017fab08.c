// FUN_017fab08 @ 017fab08

void FUN_017fab08(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_30;
  local_40 = param_1;
  if (local_38 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar1;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_017fae34;
      local_98 = &DAT_0257a740;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      local_90 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = *(undefined8 *)(param_1 + 0x30);
      local_88 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_processLocalFrameForImage_second_026b59f8,uVar1,0,&local_b0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_78,0);
      local_6c = 0;
      goto LAB_017fad64;
    }
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc0000000;
  local_5c = 0;
  local_58 = FUN_017fad90;
  local_50 = &DAT_02578c00;
  local_48 = *(undefined8 *)(param_1 + 0x30);
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_processBatchLocalFrames_atIndex__026b59f0,
             *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + 1);
  local_6c = 1;
LAB_017fad64:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

