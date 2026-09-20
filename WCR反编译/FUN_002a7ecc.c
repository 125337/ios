// FUN_002a7ecc @ 002a7ecc

void FUN_002a7ecc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  (*DAT_028c96f8)(param_1,param_2);
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

