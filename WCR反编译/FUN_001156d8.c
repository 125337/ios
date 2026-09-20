// FUN_001156d8 @ 001156d8

void FUN_001156d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = local_20;
  puVar2 = PTR_s_range_0269ef50;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringWithRange__0269d138,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  local_40 = uVar3;
  FUN_001158dc(uVar3,&cf_username);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40;
  FUN_001158dc(local_40,&cf_nickname);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return;
}

