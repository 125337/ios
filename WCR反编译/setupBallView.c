// setupBallView @ 009011c8

/* Function Stack Size: 0x10 bytes */

void LogFloatingBall::setupBallView(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double in_d2;
  double in_d3;
  double dVar11;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  undefined *local_c8;
  ID local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_70;
  undefined8 local_68;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 50.0;
  uVar6 = 0x4034000000000000;
  local_40 = 20.0;
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = uVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_48 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  local_70 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_monitorMode_026a9f18);
  iVar5 = 0xaa;
  if (IVar3 != 1) {
    iVar5 = 100;
  }
  local_98 = (double)iVar5;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  dVar7 = (local_48 - local_38) - local_40;
  dVar9 = ((local_70 - local_38) - local_40) - local_98;
  dVar8 = local_38;
  dVar11 = local_38;
  FUN_00901b7c();
  local_b8 = dVar7;
  local_b0 = dVar9;
  local_a8 = dVar8;
  local_a0 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar7,dVar9,dVar8,dVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBallView__026a9f20);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  dVar8 = local_38 / 2.0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar8);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingBallIconImage_026a9f30);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar3;
  if (IVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar10 = 0;
    uVar6 = 0;
    dVar8 = local_38;
    dVar11 = local_38;
    FUN_00901b7c();
    local_110 = uVar6;
    local_108 = uVar10;
    local_100 = dVar8;
    local_f8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar10,dVar8,dVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
    IVar3 = local_28;
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_monitorMode_026a9f18);
    pcVar1 = &cf_>;
    if (IVar3 != 1) {
      pcVar1 = &cf__A_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setText__026caa88,pcVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4038000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setTextAlignment__026caa90,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_f0,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    dVar8 = local_38 - 22.0;
    dVar11 = local_38 - 22.0;
    uVar10 = 0x4026000000000000;
    uVar6 = 0x4026000000000000;
    FUN_00901b7c();
    local_e8 = uVar6;
    local_e0 = uVar10;
    local_d8 = dVar8;
    local_d0 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar10,dVar8,dVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContentMode__026ca8e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setImage__026ca978,local_c0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_c8,0);
  }
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar3 = local_28;
  local_118 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_120 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPanGesture__026a9f48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panGesture_026a9f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panGesture_026a9f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addGestureRecognizer__026ca4a8);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_c0,0);
  return;
}

