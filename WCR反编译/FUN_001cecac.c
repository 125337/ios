// FUN_001cecac @ 001cecac

void FUN_001cecac(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_00223080(0x3ff0000000000000,0x3ff3333333333333);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*DAT_028c8f88)(param_1,param_2,param_3 & 1);
  return;
}

