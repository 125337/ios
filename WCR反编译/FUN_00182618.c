// FUN_00182618 @ 00182618

int FUN_00182618(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_m_uiLocalAddContactTime;
  _NSSelectorFromString();
  FUN_0017c0a4(uVar2,pcVar1);
  uVar3 = local_20;
  local_14 = (int)uVar2;
  if (local_14 == 0) {
    pcVar1 = &cf_m_uiAddCreateTime;
    _NSSelectorFromString();
    FUN_0017c0a4(uVar3,pcVar1);
    local_14 = (int)uVar3;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

