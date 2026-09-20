// FUN_0067ee70 @ 0067ee70

uint FUN_0067ee70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint local_44;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_006807d4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_44 = 0;
  if (lVar2 != 0) {
    lVar2 = local_18;
    FUN_0067e48c();
    local_44 = (uint)lVar2 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

