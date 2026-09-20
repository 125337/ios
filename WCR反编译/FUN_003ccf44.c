// FUN_003ccf44 @ 003ccf44

void FUN_003ccf44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long local_30;
  uint local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_003cd094(local_18,local_20);
    uVar1 = local_18;
    if ((uVar2 & 1) == 0) {
      lVar3 = local_20;
      FUN_003cd6b4();
      _objc_retainAutoreleasedReturnValue();
      local_30 = lVar3;
      if (lVar3 != 0) {
        FUN_00368e44(local_18,lVar3);
        FUN_00368c14(local_18,&cf_markGroupUnread);
      }
      local_24 = (uint)(lVar3 == 0);
      _objc_storeStrong(&local_30,0);
    }
    else {
      uVar2 = local_18;
      FUN_003cd538(local_18,local_20);
      _objc_retainAutoreleasedReturnValue();
      FUN_0036820c(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      FUN_00368c14(local_18,&cf_markGroupRead);
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

