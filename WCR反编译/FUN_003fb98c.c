// FUN_003fb98c @ 003fb98c

byte FUN_003fb98c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_003fbf38();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca5e8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    if (uVar1 < 2) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  return local_11;
}

