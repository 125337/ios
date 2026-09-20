// FUN_00790bbc @ 00790bbc

void FUN_00790bbc(undefined8 param_1,code *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = param_2;
  FUN_00790a08();
  if (pcVar1 != (code *)0x0) {
    _method_getImplementation();
    (*pcVar1)(local_18,param_2,param_3 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

