// FUN_003b7a54 @ 003b7a54

uint FUN_003b7a54(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_0037a830();
  local_24 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_0037a830(local_20,&cf_isContactSessionTop);
    local_24 = (uint)uVar1;
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

