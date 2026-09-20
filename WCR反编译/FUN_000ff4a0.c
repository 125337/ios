// FUN_000ff4a0 @ 000ff4a0

void FUN_000ff4a0(undefined8 param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  ulong local_80;
  byte local_78;
  undefined **local_70;
  byte local_61;
  long local_60;
  long local_58;
  undefined4 local_50;
  ulong local_40;
  byte local_31;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  local_31 = param_3;
  local_30 = param_2;
  FUN_000fad94(local_28,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  FUN_000faf34();
  if ((uVar2 & 1) == 0) {
    local_50 = 1;
  }
  else {
    lVar3 = local_30;
    FUN_000fad50();
    uVar2 = local_28;
    local_58 = lVar3;
    _objc_getAssociatedObject(local_28,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    lVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = uVar4 + 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               uVar4 + 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,lVar3,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar2 = local_40;
    local_61 = local_30 == 1;
    ppuVar6 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_000ff960;
    local_90 = &DAT_02579420;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_28;
    local_88 = uVar2;
    local_78 = local_61 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar4;
    _objc_retainBlock();
    uVar2 = local_40;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar5 = PTR___NSConcreteStackBlock_02578660;
    local_70 = ppuVar6;
    if ((local_31 & 1) == 0) {
      (*(code *)ppuVar6[2])();
    }
    else {
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_000ffa08;
      local_b8 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar6 = local_70;
      local_b0 = uVar2;
      local_f8 = puVar5;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_000ffa4c;
      local_e0 = &DAT_02579e50;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323da8,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_d0,
                 &local_f8);
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

