// FUN_002a6190 @ 002a6190

void FUN_002a6190(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  uint local_164;
  ulong local_148;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined1 local_91;
  ulong local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_31 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_28;
    FUN_002d9d18(local_28,&cf_MMTabBarBase_viewWillAppear_beforeOrig);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_transitionCoordinator_026a1c10);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = uVar1;
      if ((uVar1 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_initiallyInteractive_026a1c18),
         (uVar1 & 1) != 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_002b7bc4();
        _objc_retainAutoreleasedReturnValue();
        local_61 = 0;
        local_71 = 0;
        local_148 = uVar2;
        if (uVar2 == 0) {
          local_148 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_60 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_148;
        }
        local_71 = uVar2 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_148;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_81 = 0;
        local_164 = 0;
        if (local_58 != 0) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_164 = (uint)uVar1;
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_164 & 1) != 0) {
          FUN_002da398(local_58,1,&cf_MMTabBarBase_interactivePop_begin);
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_50[0];
          uVar2 = local_58;
          local_c8 = PTR___NSConcreteStackBlock_02578660;
          local_c0 = 0xc2000000;
          local_bc = 0;
          local_b8 = FUN_002da5b0;
          local_b0 = &DAT_0257bb08;
          local_90 = uVar1;
          (*(code *)PTR__objc_retain_02578638)();
          uVar1 = local_90;
          local_a8 = uVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_animateAlongsideTransition_compl_026a1c28,0,&local_c8);
          local_91 = (undefined1)uVar3;
          if ((uVar3 & 1) == 0) {
            FUN_002da398(local_58,0,&cf_MMTabBarBase_interactivePop_registerFailed);
          }
          else {
            _objc_initWeak(auStack_d0,local_58);
            dVar4 = _dispatch_time(0,2000000000);
            puVar5 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_f8 = PTR___NSConcreteStackBlock_02578660;
            local_f0 = 0xc2000000;
            local_ec = 0;
            local_e8 = FUN_002daa28;
            local_e0 = &DAT_02578da0;
            _objc_copyWeak(auStack_d8,auStack_d0);
            _dispatch_after(dVar4,puVar5,&local_f8);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_destroyWeak(auStack_d8);
            _objc_destroyWeak(auStack_d0);
          }
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,
                 &cf_MMTabBarBaseViewController_viewWillAppear_beforeOrig___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002d411c(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*DAT_028c96b0)(local_28,local_30,local_31 & 1);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_stringWithFormat__0269cca8,
                 &cf_MMTabBarBaseViewController_viewWillAppear_afterOrig___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b7184(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      FUN_002d77c4();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(local_50,0);
    }
    else {
      (*DAT_028c96b0)(local_28,local_30,local_31 & 1);
      FUN_002d9d18(local_28,&cf_MMTabBarBase_viewWillAppear_afterOrig);
    }
  }
  else {
    (*DAT_028c96b0)(local_28,local_30,local_31 & 1);
  }
  return;
}

