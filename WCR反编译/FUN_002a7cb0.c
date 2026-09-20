// FUN_002a7cb0 @ 002a7cb0

void FUN_002a7cb0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  (*DAT_028c96e0)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((uVar3 & 1) == 0) && ((param_3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    FUN_002d77c4();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

