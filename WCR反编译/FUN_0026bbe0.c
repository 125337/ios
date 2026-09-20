// FUN_0026bbe0 @ 0026bbe0

int FUN_0026bbe0(undefined8 param_1)

{
  undefined8 uVar1;
  int local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_0026bcec(uVar1,PTR_s_localId_026a1440,0);
  local_30 = (int)uVar1;
  if (local_30 == 0) {
    uVar1 = local_18;
    FUN_0026bcec(local_18,PTR_s_GetParentLocalID_026a1448,0);
    local_30 = (int)uVar1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_30;
}

