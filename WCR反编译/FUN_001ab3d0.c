// FUN_001ab3d0 @ 001ab3d0

void FUN_001ab3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  byte local_220;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined1 local_bb;
  byte local_ba;
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  ulong local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableHeaderView_0269ea08);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_38 = uVar2;
  _objc_getAssociatedObject(local_28,&DAT_028c8a89);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar3;
  if (local_38 == 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_50[0];
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    if ((uVar3 & 1) != 0) {
      local_80 = PTR___NSConcreteGlobalBlock_02578658;
      local_78 = 0xd0800000;
      local_74 = 0;
      local_70 = FUN_001ac210;
      local_68 = &DAT_0257ab20;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_30;
      local_60 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_80);
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
    }
  }
  if (local_38 == 0) {
    FUN_001ac454(local_30);
    local_84 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8a8a);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    uVar3 = local_90;
    uVar2 = local_50[0];
    local_b8 = param_1;
    local_b0 = param_2;
    local_a8 = param_3;
    local_a0 = param_4;
    local_98 = param_4;
    if ((local_50[0] == 0) || (uVar2 = local_50[0] - local_38, uVar2 != 0)) {
      _objc_setAssociatedObject(uVar2,local_28,&DAT_028c8a89,local_38,1);
      uVar3 = local_28;
      uVar2 = local_90;
      if (local_98 <= 0.5) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar3 = local_28;
        if ((uVar2 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x42300000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithFloat__0269fe98)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar3,&DAT_028c8a8a,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028c8a8a,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar2 = local_28;
      if (((uVar3 & 1) == 0) && (0.5 < local_98)) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028c8a8a,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    local_b9 = 0.5 < local_98;
    uVar2 = local_38;
    dVar5 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
    local_220 = 1;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alpha_026ca4d8);
      local_220 = 1;
      if (dVar5 <= DAT_02323cd0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isUserInteractionEnabled_026ca770);
        local_220 = (byte)uVar2;
      }
    }
    local_ba = local_220 & 1;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableHeaderView_0269ea08);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != local_38;
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_38;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_bb = bVar1;
    if ((((local_b9 & 1) != 0) || ((local_ba & 1) != 0)) || (bVar1)) {
      local_f0 = PTR___NSConcreteGlobalBlock_02578658;
      local_e8 = 0xd0800000;
      local_e4 = 0;
      local_e0 = FUN_001ac660;
      local_d8 = &DAT_0257ab20;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_30;
      local_d0 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_f0);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_d0,0);
    }
    FUN_001ac454(local_30);
    FUN_001ac6d0(local_30);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

