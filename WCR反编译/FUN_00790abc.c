// FUN_00790abc @ 00790abc

void FUN_00790abc(undefined8 param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_28;
  code *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_20;
  FUN_00790a08();
  if (pcVar1 != (code *)0x0) {
    _method_getImplementation();
    (*pcVar1)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

