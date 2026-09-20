// FUN_000fa318 @ 000fa318

void FUN_000fa318(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong local_18;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  FUN_000f915c();
  uVar7 = (uint)puVar2;
  _WCRefineChatPositionFeatureAllowed();
  uVar1 = (uint)puVar2;
  if ((((((ulong)puVar2 & 1) != 0) && (FUN_000fa7c8(), (uVar1 & 1) != 0)) &&
      (FUN_000fa82c(), (uVar7 & 1) == 0)) && (uVar3 = local_18, FUN_000f91dc(), (uVar3 & 1) != 0)) {
    FUN_000fa894(local_18,0);
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
      FUN_000fad50();
      uVar3 = local_18;
      _objc_getAssociatedObject(local_18,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_18;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 uVar5 + 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar4,puVar6,1);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      FUN_000faaac(DAT_02323d88,local_18,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

