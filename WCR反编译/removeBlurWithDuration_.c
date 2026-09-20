// removeBlurWithDuration: @ 00eb6450

/* Function Stack Size: 0x18 bytes */

void WCRefineBackgroundBlur::removeBlurWithDuration_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  double dVar6;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined4 local_74;
  ID local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00eb6780;
    local_50 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar5;
    local_40 = local_38;
    _dispatch_async(puVar4,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48,0);
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundBlurView_026ab238);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar5;
    if (IVar5 == 0) {
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundBlurView__026ab240,0);
      IVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if ((local_38 <= 0.0) ||
         (dVar6 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_alpha_026ca4d8),
         dVar2 = local_38, IVar5 = local_70, puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8,
         puVar4 = PTR___NSConcreteStackBlock_02578660, dVar6 <= DAT_02323cd0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeFromSuperview_026ca800);
        local_74 = 1;
      }
      else {
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_00eb67c8;
        local_88 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        IVar1 = local_70;
        local_80 = IVar5;
        local_c8 = puVar4;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_00eb680c;
        local_b0 = &DAT_02579d00;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar2,0,puVar3,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10000,&local_a0,
                   &local_c8);
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_80,0);
        local_74 = 0;
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  return;
}

