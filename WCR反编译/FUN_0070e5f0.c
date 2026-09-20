// FUN_0070e5f0 @ 0070e5f0

void FUN_0070e5f0(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  long local_40;
  undefined8 local_38;
  undefined1 local_29;
  long local_28;
  
  local_38 = 0;
  local_29 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR___dispatch_main_q_02578680;
  local_40 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_58 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_80 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = *(byte *)(param_1 + 0x58) & 1;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_70 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  local_68 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  local_60 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_38,0);
  return;
}

