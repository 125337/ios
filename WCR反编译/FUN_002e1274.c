// FUN_002e1274 @ 002e1274

void FUN_002e1274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  pppuVar1 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar1,param_2);
  local_30 = param_1;
  local_28 = param_3;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pppuVar1;
  if (pppuVar1 == (undefined8 ***)0x0) {
    if (DAT_028c98b0 == (code *)0x0) {
      pppuVar1 = (undefined8 ***)local_20;
      (*DAT_028c9880)(local_30,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pppuVar1;
    }
    else {
      pppuVar1 = (undefined8 ***)local_20;
      (*DAT_028c98b0)(local_30,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pppuVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pppuVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

