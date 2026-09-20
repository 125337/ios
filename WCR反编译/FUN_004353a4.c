// FUN_004353a4 @ 004353a4

void FUN_004353a4(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_00438174();
  if ((uVar1 & 1) == 0) {
    pcVar2 = local_20;
    (*DAT_028ca918)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

