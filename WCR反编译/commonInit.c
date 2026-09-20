// commonInit @ 0170bec8

/* Function Stack Size: 0x10 bytes */

void SwitchThemesDayNight::commonInit(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d2;
  double in_d3;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98 [13];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  _CGRectIsEmpty();
  if ((((param_1 & 1) == 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548), 0.0 < in_d2)) &&
     (IVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548),
     0.0 < in_d3)) {
    FUN_0170cb4c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_buildCloudView_026b38a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCloudView__026b38a8);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cloudView_026b38b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_98[0] = puVar3;
    for (local_a0 = 0; local_a0 < 3; local_a0 = local_a0 + 1) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_addObject__0269d180,local_a8);
      _objc_storeStrong(&local_a8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHaloViews__026b38b8,local_98[0]);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setKnob__026b3788);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSunView__026b38c0);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0170cb98();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sunView_026b38c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sunView_026b38c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMoonView__026b38d0);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0170cbe4();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moonView_026b38d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moonView_026b38d8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    for (local_b8 = 0; local_b8 < 3; local_b8 = local_b8 + 1) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc_init();
      local_c0 = puVar3;
      FUN_0170cc2c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moonView_026b38d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,local_c0);
      _objc_storeStrong(&local_c0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCraters__026b3748,local_b0);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moonView_026b38d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStarView__026b38e0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_starView_026b38e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar3;
    for (local_d0 = 0; local_d0 < 0xb; local_d0 = local_d0 + 1) {
      puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar3 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFillColor__026ca948,puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_starView_026b38e8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d8);
      _objc_storeStrong(&local_d8,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStarLayers__026b38f0,local_c8);
    IVar1 = local_28;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_starView_026b38e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_addSubview__026ca4c0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,puVar3);
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStaticGeometry_026b38f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_applyState_animated__026b3900,*(byte *)(local_28 + (long)_on) & 1,0);
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(local_98,0);
  }
  return;
}

