// FUN_0035f39c @ 0035f39c

void FUN_0035f39c(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined **local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  long local_58;
  undefined **local_50;
  undefined4 local_44;
  ulong local_40;
  long local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_29 = param_2;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028ca128);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  puVar4 = PTR___dispatch_main_q_02578680;
  if ((uVar3 & 1) == 0) {
    if (local_38 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_44 = 1;
  }
  else {
    _objc_setAssociatedObject(local_28,&DAT_028ca128);
    _objc_setAssociatedObject(local_28,&DAT_028ca129,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028ca12a,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028ca0e8,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028ca0e9,0,1);
    uVar3 = local_40;
    ppuVar5 = &local_80;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_003afd68;
    local_68 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_38;
    local_60 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar2;
    _objc_retainBlock();
    uVar3 = local_40;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_50 = ppuVar5;
    if ((local_29 & 1) == 0) {
      (*(code *)ppuVar5[2])();
    }
    else {
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_003afdd0;
      local_90 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar5 = local_50;
      local_88 = uVar3;
      local_d0 = puVar4;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_003afe14;
      local_b8 = &DAT_0257ca98;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_a8,
                 &local_d0);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

