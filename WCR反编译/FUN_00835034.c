// FUN_00835034 @ 00835034

void FUN_00835034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByAppendingFormat__026a2088,&cf___lu);
  _objc_retainAutoreleasedReturnValue();
  FUN_00833390(uVar1,uVar2,*(long *)(param_1 + 0x40) + 1,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x48),in_x7,param_3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

