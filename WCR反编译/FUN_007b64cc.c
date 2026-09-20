// FUN_007b64cc @ 007b64cc

byte FUN_007b64cc(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,byte param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_278;
  double local_270;
  double local_250;
  long local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  int local_124;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 uStack_68;
  double local_50;
  undefined4 local_44;
  double local_40;
  byte local_31;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_40 = param_1;
  local_31 = param_6;
  if (local_30 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    lVar2 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_50 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentInset_0269dcc8);
    dVar4 = param_3 - local_50;
    dVar7 = local_50;
    local_88 = dVar4;
    local_80 = param_1;
    dStack_78 = param_2;
    local_70 = param_3;
    uStack_68 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    dVar5 = param_2 - local_50;
    dVar8 = local_50;
    local_b0 = dVar4;
    local_a8 = dVar7;
    local_a0 = param_2;
    local_98 = param_1;
    local_90 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    dVar6 = -dVar5;
    local_d8 = dVar5;
    local_d0 = dVar8;
    local_c8 = dVar7;
    local_c0 = dVar4;
    local_b8 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_100 = dVar6;
    local_f8 = dVar7;
    local_f0 = dVar8;
    local_e8 = dVar5;
    _CGRectGetHeight(dVar6,dVar7,dVar8,dVar5);
    local_108 = local_b8;
    local_110 = local_40;
    if (local_40 <= local_b8) {
      local_250 = local_b8;
    }
    else {
      local_250 = local_40;
    }
    local_118 = local_250;
    dVar7 = (dVar6 + local_250) - local_90;
    local_e0 = dVar7;
    if ((local_31 & 1) == 0) {
      local_278 = 0.0;
    }
    else {
      local_124 = 0;
      dVar8 = dVar7;
      dVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentSize_026ca5a0);
      local_130 = dVar7 - dVar4;
      local_270 = local_130;
      if (local_130 <= (double)(long)local_124) {
        local_270 = (double)(long)local_124;
      }
      local_148 = local_270;
      local_278 = local_270;
      local_140 = dVar8;
      local_138 = dVar4;
    }
    lVar2 = local_30;
    uVar1 = DAT_026f4678;
    local_120 = local_278;
    if (0.5 <= ABS(local_278 - local_50)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_278,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_30;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_70 = local_88 + local_120;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = lVar2;
      dStack_160 = dStack_78;
      local_168 = local_80;
      uStack_150 = uStack_68;
      local_158 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0);
      local_21 = 1;
      local_44 = 1;
      _objc_storeStrong(&local_170,0);
    }
    else {
      local_21 = 0;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

