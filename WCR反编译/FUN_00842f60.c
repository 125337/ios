// FUN_00842f60 @ 00842f60

void FUN_00842f60(undefined8 param_1,undefined8 param_2,byte param_3)

{
  (*DAT_028cd440)(param_1,param_2,param_3 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0082a0bc();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

