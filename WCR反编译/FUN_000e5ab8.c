// FUN_000e5ab8 @ 000e5ab8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000e5ab8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double local_348;
  undefined *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  double local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined4 local_4c;
  undefined *local_48 [3];
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c8391);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_30 = puVar3;
  FUN_000db77c();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar4;
  if ((local_30 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
    FUN_000e3370(local_28,&cf_layout_skip);
    local_4c = 1;
  }
  else {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar7 = param_1;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    local_58 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = param_1;
    local_98 = param_3;
    local_90 = param_2;
    local_88 = dVar7;
    _CGRectGetWidth(param_1,param_3,param_2,dVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar5 = 0;
    uVar10 = 0x4058000000000000;
    dVar7 = local_58;
    local_80 = param_1;
    FUN_000e64a0();
    local_e0 = uVar5;
    dStack_d8 = dVar7;
    local_d0 = param_1;
    uStack_c8 = uVar10;
    local_c0 = uVar5;
    dStack_b8 = dVar7;
    local_b0 = param_1;
    uStack_a8 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,dVar7,param_1,uVar10,local_30,PTR_s_setFrame__026ca960);
    puVar3 = local_28;
    FUN_000e07e8();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    uVar5 = 0;
    uVar11 = 0x404b000000000000;
    dVar7 = local_80;
    local_e8 = puVar3;
    FUN_000e64a0();
    local_130 = uVar5;
    uStack_128 = uVar10;
    local_120 = dVar7;
    uStack_118 = uVar11;
    local_108 = uVar5;
    uStack_100 = uVar10;
    local_f8 = dVar7;
    uStack_f0 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar10,dVar7,uVar11,local_e8,PTR_s_setFrame__026ca960);
    FUN_000e3650(local_e8);
    local_158 = local_80 - 16.0;
    local_160 = 0;
    local_348 = local_158;
    if (local_158 < 0.0) {
      local_348 = 0.0;
    }
    local_168 = local_348;
    uVar5 = 0x4020000000000000;
    uVar10 = 0x404c000000000000;
    uVar11 = 0x4040000000000000;
    FUN_000e64a0();
    puVar3 = local_28;
    local_150 = uVar5;
    uStack_148 = uVar10;
    local_140 = local_348;
    uStack_138 = uVar11;
    FUN_000dc670();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uStack_148;
    local_190 = local_150;
    uStack_178 = uStack_138;
    local_180 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,uStack_148,local_140,uStack_138);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c839a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_198 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar4,
                 PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_198;
      local_198 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setUserInteractionEnabled__026caad8,0);
      _objc_setAssociatedObject(local_28,&DAT_028c839a,local_198,1);
    }
    uVar8 = 0;
    uVar6 = 0;
    uVar12 = 0x4058000000000000;
    dVar9 = local_80;
    FUN_000e64a0();
    puVar3 = local_198;
    uVar5 = uVar12;
    dVar7 = dVar9;
    uVar10 = uVar8;
    uVar11 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_frame_026ca640);
    uVar2 = (uint)puVar3;
    _CGRectEqualToRect(uVar5,dVar7,uVar10,uVar11,uVar6,uVar8,dVar9,uVar12);
    bVar1 = true;
    if ((uVar2 & 1) != 0) {
      puVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar3 != local_198;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar8,dVar9,uVar12,local_198,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_setTableHeaderView__0269ea10,local_198);
    }
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_000e3370(local_28,&cf_layout);
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_e8,0);
    local_4c = 0;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

