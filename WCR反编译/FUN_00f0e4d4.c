// FUN_00f0e4d4 @ 00f0e4d4

void FUN_00f0e4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_sortedBackupItems__026abc88,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_38 = uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_40 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_28;
  local_50 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

