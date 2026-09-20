// FUN_00513fa8 @ 00513fa8

void FUN_00513fa8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  uint local_1cc;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 auStack_118 [8];
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_89;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  uint local_50;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((DAT_028cb058 & 1) == 0) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg__TagNvR_);
      local_50 = 1;
    }
    else {
      DAT_028cb058 = 1;
      FUN_0050ec18();
      FUN_0050e638();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = local_28;
      local_58 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      FUN_0050e284();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar8);
      uVar4 = local_30;
      FUN_00513ee4();
      local_68 = 0x3ff3333333333333;
      if ((uVar4 & 1) == 0) {
        local_68 = DAT_02323c88;
      }
      _objc_initWeak((uint)uVar4 & 1,auStack_70,local_28);
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      uVar8 = local_40;
      local_78 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_89 = 0;
      local_1cc = 0;
      local_80 = uVar8;
      if (local_30 == 5) {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1cc = (uint)puVar5 ^ 1;
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if ((local_1cc & 1) != 0) {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_postNotificationName_object__0269e228,
                   &cf_WCRefineMomentsAntiDeleteConfigChanged);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar4 = local_30;
      FUN_00513cfc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf___0__lu);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showWeToastLoadingWithText__0269cea8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028caff0;
      DAT_028caff0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_b0 = 0;
      local_a0 = 0x20000000;
      local_9c = 0x20;
      local_98 = 0;
      local_d0 = 0;
      local_c0 = 0x20000000;
      local_bc = 0x20;
      local_b8 = 0;
      local_100 = 0;
      local_f0 = 0x32000000;
      local_ec = 0x30;
      local_e8 = FUN_00514bc8;
      local_e0 = FUN_00514c04;
      local_d8 = 0;
      ppuVar7 = &local_170;
      local_170 = PTR___NSConcreteStackBlock_02578660;
      local_168 = 0xc2000000;
      local_164 = 0;
      local_160 = FUN_00514c30;
      local_158 = &DAT_0257d988;
      local_f8 = &local_100;
      local_c8 = &local_d0;
      local_a8 = &local_b0;
      _objc_copyWeak(auStack_118,auStack_70);
      lVar2 = local_78;
      local_130 = &local_100;
      local_128 = &local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_80;
      local_150 = lVar2;
      local_110 = local_30;
      local_120 = &local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_58;
      local_148 = uVar8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_60;
      local_140 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_138 = uVar8;
      local_108 = local_68;
      _objc_retainBlock();
      uVar8 = local_f8[5];
      local_f8[5] = ppuVar7;
      (*(code *)PTR__objc_release_02578630)(uVar8);
      puVar5 = PTR___dispatch_main_q_02578680;
      lVar2 = local_30 - 7;
      if (lVar2 != 0) {
        _objc_retainAutoreleaseReturnValue(lVar2);
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        puVar5 = PTR_WCRefineMomentsMonitor_026ce718;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar8 = local_28;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf___X_);
        _objc_retainAutoreleasedReturnValue();
        FUN_00515398(uVar8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_50 = (uint)(lVar2 == 0);
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_150,0);
      _objc_destroyWeak(auStack_118);
      __Block_object_dispose(&local_100,8);
      _objc_storeStrong(&local_d8,0);
      __Block_object_dispose(&local_d0,8);
      __Block_object_dispose(&local_b0,8);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_destroyWeak(auStack_70);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gybd_O_WL);
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

