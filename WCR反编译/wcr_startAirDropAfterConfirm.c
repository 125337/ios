// wcr_startAirDropAfterConfirm @ 01733c34

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_startAirDropAfterConfirm(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ID IVar7;
  ID local_138;
  ID local_118;
  ID local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ID local_e8;
  undefined *local_e0;
  ID local_d8;
  ID local_d0;
  undefined1 auStack_c8 [8];
  ID local_c0;
  ID local_b8;
  undefined **local_b0 [3];
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined *local_88;
  undefined1 *local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined4 local_54;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3f85);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_38 = param_1;
  _objc_getAssociatedObject(local_28,&DAT_028e3f80);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_40 = IVar1;
  _objc_getAssociatedObject(local_28,&DAT_028e3f86);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_48 = IVar2;
  _objc_getAssociatedObject(local_28,&DAT_028e3f81);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  IVar1 = local_40;
  if ((IVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((IVar1 & 1) != 0) &&
       (IVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       IVar1 != 0)) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unsignedIntegerValue_026cabb8);
      IVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((IVar1 & 1) == 0) {
        local_138 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentRedeemProvider_026b3b88);
      }
      else {
        local_138 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_integerValue_026ca750);
        FUN_01728a88();
      }
      local_68 = local_138;
      FUN_01728acc();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      local_70 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheet_026aa728);
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar1;
      if (IVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_dismissWithAnimated__0269e420,1);
      }
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_themeBoxAirDropDeliveryMode_026ad100);
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_runSendCodeOnlyFlowWithTheme_026b3d18,local_60,local_48,
                   local_40);
        local_54 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ck_W);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_WCRefineHelper_026ce000;
        local_88 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar4;
        _objc_initWeak(auStack_98,local_28);
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_setThemeBoxAirDropTotalCount__026b3c60,puVar5 + 1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        ppuVar6 = &local_108;
        local_108 = PTR___NSConcreteStackBlock_02578660;
        local_100 = 0xc2000000;
        local_fc = 0;
        local_f8 = FUN_0173446c;
        local_f0 = &DAT_02588728;
        _objc_copyWeak(auStack_c8,auStack_98);
        IVar1 = local_70;
        local_c0 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        puVar3 = local_90;
        local_e8 = IVar1;
        (*(code *)PTR__objc_retain_02578638)();
        IVar1 = local_48;
        local_e0 = puVar3;
        local_b8 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_40;
        local_d8 = IVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = IVar2;
        _objc_retainBlock();
        IVar2 = local_28;
        IVar1 = local_40;
        local_b0[0] = ppuVar6;
        if (local_68 == 2) {
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,1);
          _objc_retainAutoreleasedReturnValue();
          local_110 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_redeemSUTUCode_weChat_comple_026b3d30,local_40,IVar1,
                     local_b0[0]);
          _objc_storeStrong(&local_110,0);
        }
        else if (local_68 == 1) {
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,1);
          _objc_retainAutoreleasedReturnValue();
          local_118 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcr_redeemThemeProCode_weChat_co_026b3d38,local_40,IVar1,
                     local_b0[0]);
          _objc_storeStrong(&local_118,0);
        }
        else {
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetWxid_026b3bd0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_wcr_redeemThemeBoxCode_wxid_comp_026b3d40,IVar1,IVar7,local_b0[0]);
          (*(code *)PTR__objc_release_02578630)(IVar7);
        }
        _objc_storeStrong(local_b0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_e0,0);
        _objc_storeStrong(&local_e8,0);
        _objc_destroyWeak(auStack_c8);
        _objc_destroyWeak(auStack_98);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        local_54 = 0;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      goto LAB_01734414;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_zzbSpe_8_);
  local_54 = 1;
LAB_01734414:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

