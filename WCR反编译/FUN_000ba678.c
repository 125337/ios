// FUN_000ba678 @ 000ba678

void FUN_000ba678(undefined8 param_1,byte param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  long local_60;
  undefined **local_58;
  uint local_50;
  ulong local_40;
  long local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_29 = param_2;
  _objc_storeStrong(&local_38,param_3);
  uVar4 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c80b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  puVar5 = PTR___dispatch_main_q_02578680;
  if ((uVar4 & 1) == 0) {
    if (local_38 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_50 = 1;
  }
  else {
    _objc_setAssociatedObject(local_28,&DAT_028c80b8,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c80bb,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c80b9,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c80bc,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c80ba,0,1);
    uVar4 = local_40;
    ppuVar6 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_000baccc;
    local_70 = &DAT_02579e20;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_38;
    local_68 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar3;
    _objc_retainBlock();
    uVar4 = local_40;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar5 = PTR___NSConcreteStackBlock_02578660;
    bVar1 = (local_29 & 1) != 0;
    local_58 = ppuVar6;
    if (bVar1) {
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_000bad34;
      local_98 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar6 = local_58;
      local_90 = uVar4;
      local_d8 = puVar5;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_000bad78;
      local_c0 = &DAT_02579e50;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = ppuVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_b0,
                 &local_d8);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)ppuVar6[2])();
    }
    local_50 = (uint)!bVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

