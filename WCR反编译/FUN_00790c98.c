// FUN_00790c98 @ 00790c98

uint FUN_00790c98(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint local_60;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = param_2;
  FUN_00790a08();
  if (pcVar1 == (code *)0x0) {
    local_60 = 0;
  }
  else {
    _method_getImplementation();
    uVar2 = local_18;
    (*pcVar1)(local_18,param_2);
    local_60 = (uint)uVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_60 & 1;
}

