// presentPickerWithTargetWxid:targetNickname:preferWxidInTitle: @ 0172fcbc

/* Function Stack Size: 0x24 bytes */

void ThemeBoxAirDropThemePickViewController::
     presentPickerWithTargetWxid_targetNickname_preferWxidInTitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  char *pcVar9;
  dispatch_time_t dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double in_d3;
  double local_270;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined1 *local_240;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  char *local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 *local_f0;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  char *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  undefined1 *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  bool local_71;
  cfstringStruct *local_70;
  undefined *local_68;
  byte local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  byte local_41;
  cfstringStruct *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_38;
  local_41 = (byte)param_5;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_e_S);
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_Wzzbu);
      local_48 = 1;
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_01728a88();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      local_50 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_01729a9c();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_59 = bVar1;
      if ((bVar1) ||
         (((local_50 != (undefined1 *)((long)&MACH_HEADER.magic + 1) &&
           (local_50 != (undefined1 *)((long)&MACH_HEADER.magic + 2))) ||
          (puVar6 = PTR_WCRefineHelper_026ce000,
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_isWeChatFriendUserName__026af090,local_38),
          puVar4 = PTR_WCRefineHelper_026ce000, puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8,
          ((ulong)puVar6 & 1) != 0)))) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_themeBoxSaveOriginSessionWxidFor_026b3c90);
        puVar2 = PTR_ThemeBoxAirDropThemePickViewController_026cec00;
        _objc_alloc_init();
        uVar3 = local_38;
        local_68 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTargetWxid__026b3c98);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        pcVar7 = local_40;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_71 = false;
        bVar1 = ((ulong)pcVar7 & 1) == 0;
        if (bVar1) {
          local_200 = &::cf___;
        }
        else {
          local_200 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
          local_70 = local_200;
        }
        local_71 = !bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTargetNickname__026b3ca0,local_200);
        if ((local_71 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        uVar3 = local_38;
        FUN_0172a114();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTargetWechatAlias__026b3c10);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setTargetTitlePreferWxid__026b3ca8,local_41 & 1);
        pcVar8 = "MMPageSheetConfig";
        _objc_getClass();
        pcVar9 = "MMPageSheetAdapter";
        local_80 = pcVar8;
        _objc_getClass();
        local_88 = pcVar9;
        if ((local_80 == (char *)0x0) || (pcVar9 == (char *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_ybu);
          local_48 = 1;
        }
        else {
          pcVar8 = local_80;
          _objc_alloc_init();
          local_210 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_99 = 0;
          local_a9 = false;
          bVar1 = (local_59 & 1) == 0;
          local_90 = pcVar8;
          if (bVar1) {
            local_210 = &cf_bzzb_N;
          }
          else {
            puVar5 = local_58;
            FUN_01729b1c();
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_stringWithFormat__0269cca8,&cf_b_)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_210;
          }
          local_a9 = !bVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTitle__0269cef0,local_210);
          if ((local_a9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setNavLeftStyle__026aa730,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setEnableDragToClose__026aa740,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
          pcVar8 = local_88;
          _objc_alloc_init();
          local_b8 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_setPageSheetConfig__026aa758,local_90);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setHostViewController__026a58c8,local_68);
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_240 = puVar5;
          if (puVar5 == (undefined1 *)0x0) {
            local_240 = *(undefined1 **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_240;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((local_59 & 1) == 0) {
            local_250 = local_50;
            FUN_01729cd0();
          }
          else {
            local_250 = local_58;
          }
          local_c8 = local_250;
          puVar5 = local_c0;
          FUN_0173085c(local_c0,local_250);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
          local_e4 = 1;
          local_258 = puVar5;
          if ((long)puVar5 < 1) {
            local_258 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
          local_f0 = local_258;
          local_d8 = local_258;
          uVar13 = 0x405e000000000000;
          uVar12 = 0x404c000000000000;
          dVar11 = (double)(long)local_258 * 56.0 + 120.0;
          puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          local_100 = dVar11;
          local_e0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          in_d3 = in_d3 * 0.7;
          local_128 = dVar11;
          local_120 = uVar12;
          local_118 = uVar13;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_270 = in_d3;
          if (local_100 < in_d3) {
            local_270 = local_100;
          }
          local_130 = local_270;
          local_f8 = local_270;
          local_108 = in_d3;
          (*(code *)PTR__objc_msgSend_02578628)(local_270,local_b8,PTR_s_setContentHeight__026aa760)
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSheet__026aa770,local_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_showWithAnimated__0269e5a8,1);
          dVar10 = _dispatch_time(0,150000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_68;
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_017309b0;
          local_148 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar8 = local_b8;
          local_140 = puVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = pcVar8;
          _dispatch_after(dVar10,puVar2,&local_160);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_d0,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_90,0);
          local_48 = 0;
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        puVar5 = local_50;
        FUN_01728acc();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_48 = 1;
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

