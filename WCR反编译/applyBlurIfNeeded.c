// applyBlurIfNeeded @ 00eb5ecc

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundBlur::applyBlurIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ID local_c0;
  ID local_b8 [9];
  ID local_70;
  undefined4 local_64;
  ID local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00eb63b0;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar3;
    _dispatch_async(puVar2,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38,0);
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_removeBlurWithDuration__026ab278);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (puVar1 != (undefined *)0x0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetWindow_026a6d10);
        _objc_retainAutoreleasedReturnValue();
        local_60 = IVar3;
        if (IVar3 == 0) {
          local_64 = 1;
        }
        else {
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureBlurView_026ab298);
          _objc_retainAutoreleasedReturnValue();
          local_70 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (in_d0,in_d1,in_d2,in_d3,local_70,PTR_s_setFrame__026ca960);
          IVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_60;
          (*(code *)PTR__objc_release_02578630)();
          if (IVar4 != IVar3) {
            IVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeFromSuperview_026ca800);
            (*(code *)PTR__objc_msgSend_02578628)(0,local_70,PTR_s_setAlpha__026ca860);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_70);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_bringSubviewToFront__026ca550,local_70);
          IVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_70;
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_00eb63f0;
          local_c8 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          IVar4 = local_28;
          local_c0 = IVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8[0] = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fd0000000000000,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,
                     0x20000,&local_e0);
          _objc_storeStrong(local_b8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_70,0);
          local_64 = 0;
        }
        _objc_storeStrong(&local_60,0);
      }
    }
  }
  return;
}

