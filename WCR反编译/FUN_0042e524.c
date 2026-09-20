// FUN_0042e524 @ 0042e524

int FUN_0042e524(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  pcVar1 = &cf_toContact;
  _NSSelectorFromString();
  FUN_00422cd4(uVar2,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_20 = uVar2;
  FUN_0042e830(local_18,&cf_m_uiFriendScene);
  local_30 = (int)uVar3;
  if (local_30 == 0) {
    uVar2 = local_20;
    FUN_0042e830(local_20,&cf_m_uiFriendScene);
    local_30 = (int)uVar2;
  }
  if (local_30 == 0) {
    uVar2 = local_18;
    FUN_0042e830(local_18,&cf_m_uiScene);
    local_30 = (int)uVar2;
  }
  if (local_30 == 0) {
    uVar2 = local_20;
    FUN_0042e830(local_20,&cf_m_uiScene);
    local_30 = (int)uVar2;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_30;
}

