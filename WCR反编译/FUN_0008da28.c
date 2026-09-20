// FUN_0008da28 @ 0008da28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0008da28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  char *pcVar2;
  char *local_f0;
  char *local_a8;
  undefined4 local_9c;
  char *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70 [3];
  char *local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  uVar1 = local_50;
  FUN_00074c2c();
  if ((uVar1 & 1) == 0) {
    local_f0 = (char *)0x0;
  }
  else {
    local_f0 = "MMEmoticonView";
    _objc_getClass();
  }
  local_58 = local_f0;
  if (local_f0 == (char *)0x0) {
    pcVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,uStack_40,local_38,uStack_30,pcVar2,PTR_s_initWithFrame__026ca6e8);
    local_a8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTag__026caa80,0x24f6e5);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setContentMode__026ca8e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutoresizingMask__026ca878,0x12);
    uVar1 = local_50;
    FUN_00075200();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar2 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_9c = 1;
    _objc_storeStrong(&local_a8,0);
  }
  else {
    _objc_alloc();
    uStack_88 = uStack_40;
    local_90 = local_48;
    uStack_78 = uStack_30;
    local_80 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,uStack_40,local_38,uStack_30,local_f0,PTR_s_initWithFrame__026ca6e8);
    local_70[0] = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,0x24f6e5);
    FUN_00074dc8(local_70[0],local_50);
    FUN_000750a0(local_98);
    pcVar2 = local_98;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_9c = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(local_70,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

