// FUN_00615d24 @ 00615d24

void FUN_00615d24(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  uint local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_00615f40();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  if (uVar2 == 0) {
    local_30 = 1;
  }
  else {
    FUN_00616084(local_18);
    uVar2 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_0232420d);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      uVar3 = local_20;
      FUN_006160f0(local_20,0);
      uVar2 = local_20;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,(uint)uVar3 & 1)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_0232420d,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_30 = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

