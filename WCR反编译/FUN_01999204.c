// FUN_01999204 @ 01999204

void FUN_01999204(long param_1)

{
  dispatch_queue_t pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  pdVar1 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_60 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_58 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_50 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_48 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = *(undefined8 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x58);
  local_40 = uVar2;
  _dispatch_async(pdVar1);
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  return;
}

