// FUN_00921264 @ 00921264

void FUN_00921264(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  dispatch_time_t dVar7;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  undefined **local_70;
  byte local_61;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  uVar4 = local_28;
  pcVar2 = &cf_swizzled_PushViewController_animated_;
  local_39 = param_4;
  _NSSelectorFromString(&cf_swizzled_PushViewController_animated_);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,pcVar2,local_38,local_39 & 1);
  if ((DAT_028ce368 & 1) == 0) {
    local_40 = 1;
  }
  else {
    puVar3 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar3 & 1) == 0) {
      local_40 = 1;
    }
    else {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_shouldIgnoreViewController__026aa5a8,local_38);
      if (((ulong)puVar3 & 1) == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_38;
        local_50 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_48;
        local_58 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_formattedNameForViewController__026aa598,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8,local_58);
        uVar4 = local_50;
        local_61 = ((byte)puVar3 ^ 1) & 1;
        ppuVar6 = &local_a8;
        local_a8 = PTR___NSConcreteStackBlock_02578660;
        local_a0 = 0xc2000000;
        local_9c = 0;
        local_98 = FUN_009251a4;
        local_90 = &DAT_02581080;
        local_78 = local_39 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar5 = local_28;
        local_88 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = uVar5;
        _objc_retainBlock();
        bVar1 = (local_61 & 1) == 0;
        local_70 = ppuVar6;
        if (bVar1) {
          dVar7 = _dispatch_time(0,30000000);
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_38;
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_009253b4;
          local_c8 = &DAT_0257cb48;
          (*(code *)PTR__objc_retain_02578638)();
          ppuVar6 = local_70;
          local_c0 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_58;
          local_b0 = ppuVar6;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = uVar4;
          _dispatch_after(dVar7,puVar3,&local_e0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_c0,0);
        }
        else {
          (*(code *)ppuVar6[2])(ppuVar6,local_48,local_60);
        }
        local_40 = (uint)!bVar1;
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
      }
      else {
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

