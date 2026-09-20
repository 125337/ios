// FUN_0017a038 @ 0017a038

int FUN_0017a038(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00179bbc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_m_uiLocalAddContactTime;
  local_28 = uVar1;
  _NSSelectorFromString();
  FUN_0017c0a4(uVar1,pcVar2);
  uVar3 = local_28;
  local_14 = (int)uVar1;
  if (local_14 == 0) {
    pcVar2 = &cf_m_uiAddCreateTime;
    _NSSelectorFromString();
    FUN_0017c0a4(uVar3,pcVar2);
    local_14 = (int)uVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

