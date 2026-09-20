// FUN_008fc9c8 @ 008fc9c8

void FUN_008fc9c8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_e8;
  long local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_6c;
  byte local_6b;
  byte local_69;
  long local_68;
  long local_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_41 = 0;
  if (lVar1 == 0) {
    local_c8 = *(long *)(param_1 + 0x28);
    FUN_008fcd74();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_c8;
  }
  else {
    local_c8 = *(long *)(param_1 + 0x20);
  }
  local_41 = lVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_c8;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_48 = 0;
  local_69 = 0;
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = local_38;
    FUN_008de5dc(lVar1,local_38,&local_48);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_e8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_50;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_008fd478;
  local_a0 = &DAT_02580de0;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = lVar1;
  local_70 = local_48;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = local_38;
  local_90 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = lVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  local_80 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_6c = *(byte *)(param_1 + 0x48) & 1;
  local_6b = *(byte *)(param_1 + 0x49) & 1;
  local_78 = uVar4;
  _dispatch_async(puVar2,&local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

