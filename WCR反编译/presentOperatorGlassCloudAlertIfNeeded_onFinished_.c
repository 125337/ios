// presentOperatorGlassCloudAlertIfNeeded:onFinished: @ 00f97dfc

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::presentOperatorGlassCloudAlertIfNeeded_onFinished_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  char *local_c0;
  undefined *local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  char *local_98;
  undefined **local_90;
  undefined **local_88;
  int local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  long local_50;
  ID local_48;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  uVar3 = local_38;
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f98750;
    local_60 = &DAT_02582d98;
    local_48 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_40;
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar7;
    _dispatch_async(puVar2,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_7c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))(local_40,1);
      }
      local_7c = 1;
    }
    else {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_02583818;
      _objc_retainBlock();
      uVar3 = local_38;
      local_88 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar4[2])();
      _objc_retainAutoreleasedReturnValue();
      local_90 = ppuVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      ppuVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (ppuVar4 == (undefined **)0x0) {
        if (local_40 != 0) {
          (**(code **)(local_40 + 0x10))(local_40,1);
        }
        local_7c = 1;
      }
      else {
        pcVar5 = "WCUIAlertView";
        _objc_getClass();
        ppuVar4 = local_88;
        local_98 = pcVar5;
        if (pcVar5 == (char *)0x0) {
          if (local_40 != 0) {
            (**(code **)(local_40 + 0x10))(local_40,0);
          }
          local_7c = 1;
        }
        else {
          uVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar4[2])();
          _objc_retainAutoreleasedReturnValue();
          local_a0 = ppuVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          ppuVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
          if (ppuVar4 == (undefined **)0x0) {
            _objc_storeStrong(&local_a0,&cf_lQJT);
          }
          ppuVar4 = local_88;
          uVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar4[2])();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = ppuVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          ppuVar6 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          ppuVar4 = local_88;
          if (ppuVar6 == (undefined **)0x0) {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)ppuVar4[2])();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = local_a8;
            local_a8 = ppuVar4;
            (*(code *)PTR__objc_release_02578630)(ppuVar6);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          ppuVar4 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          if (ppuVar4 == (undefined **)0x0) {
            _objc_storeStrong(&local_a8,&::cf_space_s_);
          }
          ppuVar4 = local_88;
          uVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_button);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar4[2])();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = ppuVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          ppuVar6 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          ppuVar4 = local_88;
          if (ppuVar6 == (undefined **)0x0) {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_button_title);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)ppuVar4[2])();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = local_b0;
            local_b0 = ppuVar4;
            (*(code *)PTR__objc_release_02578630)(ppuVar6);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          ppuVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          if (ppuVar4 == (undefined **)0x0) {
            _objc_storeStrong(&local_b0,&cf_wSN);
          }
          puVar2 = PTR_WCRefineHelper_026ce000;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar2;
          _objc_setAssociatedObject(puVar2);
          _objc_setAssociatedObject(local_b8,&DAT_028e2f09,0,0);
          puVar2 = local_b8;
          lVar7 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
          _objc_setAssociatedObject(puVar2,&DAT_028e2f08);
          (*(code *)PTR__objc_release_02578630)(lVar7);
          puVar2 = local_b8;
          ppuVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_copy_0269d150);
          _objc_setAssociatedObject(puVar2,&DAT_028e2f09,ppuVar4,3);
          (*(code *)PTR__objc_release_02578630)(ppuVar4);
          pcVar5 = local_98;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_initWithTitle_message__0269d260,local_a0,local_a8);
          local_c0 = pcVar5;
          if (pcVar5 == (char *)0x0) {
            _objc_setAssociatedObject(local_b8,&DAT_028e2f08,0,0);
            _objc_setAssociatedObject(local_b8,&DAT_028e2f09,0,0);
            if (local_40 != 0) {
              (**(code **)(local_40 + 0x10))(local_40,0);
            }
            local_7c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,local_b0,local_b8,
                       PTR_s_wcr_operatorGlassNativeAck__026acd38);
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_show_0269d280);
            local_7c = 0;
          }
          _objc_storeStrong(&local_c0,0);
          if (local_7c == 0) {
            local_7c = 0;
          }
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
        }
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

