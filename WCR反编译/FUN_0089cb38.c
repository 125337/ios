// FUN_0089cb38 @ 0089cb38

byte FUN_0089cb38(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  byte local_58;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0089ccc0();
  if (((uVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    _object_getClass();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_isEqualToString__0269ccc8,&cf_VerifyUserRequest);
    local_58 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_AddOpenIMContactPreCheckReq);
      local_58 = (byte)uVar3;
    }
    local_11 = local_58 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

