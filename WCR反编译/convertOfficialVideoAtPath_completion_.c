// convertOfficialVideoAtPath:completion: @ 00f44950

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::convertOfficialVideoAtPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  dispatch_time_t dVar10;
  undefined8 uVar11;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined8 *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined **local_128;
  byte local_119;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  char *local_f8;
  char *local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  char *local_a0;
  char *local_98;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  char *local_70;
  char *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  uint local_44;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_40 == 0) {
    local_44 = 1;
  }
  else {
    pcVar4 = "EmoticonVideoConverter";
    _objc_getClass();
    pcVar5 = "EmoticonVideoConvertConfig";
    local_50 = pcVar4;
    _objc_getClass();
    local_60 = PTR_s_convertWithConfig_completionBloc_026ac270;
    local_58 = pcVar5;
    if (((local_50 == (char *)0x0) || (pcVar5 == (char *)0x0)) ||
       (pcVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_instancesRespondToSelector__0269da90,
                  PTR_s_convertWithConfig_completionBloc_026ac270), ((ulong)pcVar4 & 1) == 0)) {
      (**(code **)(local_40 + 0x10))(local_40,0);
      local_44 = 1;
    }
    else {
      pcVar4 = local_50;
      _objc_alloc_init();
      pcVar5 = local_58;
      local_68 = pcVar4;
      _objc_alloc_init();
      local_70 = pcVar5;
      if ((local_68 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
        (**(code **)(local_40 + 0x10))(local_40,0);
        local_44 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_70;
        local_78 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setVideoUrl__026ac278);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setVideoUrl__026ac278,local_78);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setOutputSize__026ac280);
        pcVar4 = local_70;
        puVar6 = PTR_s_setOutputSize__026ac280;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar11 = 0x4072c00000000000;
          uVar9 = uVar11;
          FUN_00f3845c();
          local_88 = uVar11;
          local_80 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar9,pcVar4,puVar6);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setForceFitSize__026ac288);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setForceFitSize__026ac288,0);
        }
        local_89 = 0;
        pcVar4 = "EmoticonUtil";
        _objc_getClass();
        local_98 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_isEnableToUploadWxAM_026ac290);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEnableToUploadWxAM_026ac290);
          local_89 = (byte)pcVar4;
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsSupportWxAM__026ac298);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_setIsSupportWxAM__026ac298,local_89 & 1);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setWxamQuality__026ac2a0);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setWxamQuality__026ac2a0,0x14);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsFastPlay__026ac2a8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setIsFastPlay__026ac2a8,0);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setNormalFPS__026ac2b0);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setNormalFPS__026ac2b0,0x14);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setFastFPS__026ac2b8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFastFPS__026ac2b8,0x14);
        }
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setCornerRadius__026ca900);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(0,local_70,PTR_s_setCornerRadius__026ca900);
        }
        FUN_00f45264();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addObject__0269d180,local_68);
        _objc_sync_exit(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar5 = local_68;
        puVar6 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0;
        local_c0 = 0x20000000;
        local_bc = 0x20;
        local_b8 = 0;
        ppuVar7 = &local_118;
        local_118 = PTR___NSConcreteStackBlock_02578660;
        local_110 = 0xc2000000;
        local_10c = 0;
        local_108 = FUN_00f452d8;
        local_100 = &DAT_02582ca8;
        local_c8 = &local_d0;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar4 = local_a0;
        local_f8 = pcVar5;
        local_e0 = &local_d0;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_40;
        local_f0 = pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = lVar3;
        _objc_retainBlock();
        puVar2 = local_60;
        pcVar5 = local_68;
        pcVar4 = local_70;
        ppuVar8 = &local_148;
        local_148 = puVar6;
        local_140 = 0xc2000000;
        local_13c = 0;
        local_138 = FUN_00f45568;
        local_130 = &DAT_02582cd8;
        local_d8 = ppuVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = ppuVar7;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar2,pcVar4);
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
        local_119 = (byte)pcVar5;
        uVar9 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        _NSLog(&cf__wcr__emoticon_videoofficialconvertstarted__dpath___);
        (*(code *)PTR__objc_release_02578630)(uVar9);
        bVar1 = (local_119 & 1) != 0;
        if (bVar1) {
          dVar10 = _dispatch_time(0,60000000000);
          puVar6 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = local_38;
          local_180 = PTR___NSConcreteStackBlock_02578660;
          local_178 = 0xc2000000;
          local_174 = 0;
          local_170 = FUN_00f455c8;
          local_168 = &DAT_02582d08;
          local_150 = &local_d0;
          (*(code *)PTR__objc_retain_02578638)();
          ppuVar7 = local_d8;
          local_160 = uVar9;
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = ppuVar7;
          _dispatch_after(dVar10,puVar6,&local_180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_storeStrong(&local_158);
          _objc_storeStrong(&local_160,0);
        }
        else {
          (*(code *)local_d8[2])(local_d8,0);
        }
        local_44 = (uint)!bVar1;
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_e8,0);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(&local_f8,0);
        __Block_object_dispose(&local_d0,8);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

