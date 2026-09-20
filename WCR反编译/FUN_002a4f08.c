// FUN_002a4f08 @ 002a4f08

void FUN_002a4f08(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 local_38;
  
  uVar1 = param_1;
  FUN_002b7bc4();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  if (uVar1 == 0) {
    local_38 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_38;
  }
  FUN_002bad18();
  if (uVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_50 & 1) == 0) {
    uVar1 = param_1;
    FUN_002b7bc4();
    _objc_retainAutoreleasedReturnValue();
    FUN_002b7184();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*DAT_028c9678)(param_1,param_2);
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002b7184();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*DAT_028c9678)(param_1,param_2);
  }
  return;
}

