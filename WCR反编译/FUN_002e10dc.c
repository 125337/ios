// FUN_002e10dc @ 002e10dc

void FUN_002e10dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  pppuVar1 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar1,param_2);
  local_34 = param_4;
  local_30 = param_1;
  local_28 = param_3;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pppuVar1;
  if (pppuVar1 == (undefined8 ***)0x0) {
    if (DAT_028c98a8 == (code *)0x0) {
      pppuVar1 = (undefined8 ***)local_20;
      (*DAT_028c9880)(local_30,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pppuVar1;
    }
    else {
      pppuVar1 = (undefined8 ***)local_20;
      (*DAT_028c98a8)(local_30,local_20,local_28,local_34);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pppuVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pppuVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

