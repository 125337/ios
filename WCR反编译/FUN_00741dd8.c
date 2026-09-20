// FUN_00741dd8 @ 00741dd8

void FUN_00741dd8(cfstringStruct *param_1,undefined8 param_2,undefined4 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_18;
  
  pcVar1 = param_1;
  FUN_00745c20(param_1,param_3);
  if (((ulong)pcVar1 & 1) == 0) {
    (*DAT_028cc670)(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__OS;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

