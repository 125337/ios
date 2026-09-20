// FUN_0027c064 @ 0027c064

void FUN_0027c064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined **ppuVar8;
  dispatch_time_t dVar9;
  undefined *puVar10;
  ulong local_2d0;
  ulong local_2b0;
  ulong local_298;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  undefined8 *local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined1 auStack_1a0 [8];
  byte local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  code *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  byte local_111;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  byte local_c1;
  ulong local_c0;
  byte local_b1;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  uint local_3c;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    uVar3 = local_30;
    FUN_0027a1c0(local_30,&cf_fileFormat);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_48 = uVar3;
    FUN_00273fec(local_28,0,uVar3,1);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      uVar3 = local_28;
      FUN_0027cf88(0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_28;
      local_68 = uVar3;
      FUN_0027d494();
      local_69 = (byte)uVar4;
      uVar3 = local_28;
      FUN_0027d96c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_78 = uVar3;
      FUN_0027a1c0(local_30,&cf_codingFormat);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if (uVar4 == 0) {
        uVar4 = local_28;
        FUN_0027a0e4();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_80;
        local_80 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_91 = 0;
      if (local_30 == 0) {
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_2b0 = 0;
        }
        else {
          local_2b0 = local_28;
          FUN_0027dcf0(local_28,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_2b0;
        }
        local_298 = local_2b0;
      }
      else {
        local_298 = local_30;
      }
      uVar3 = local_298;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_298;
      if ((local_91 & 1) != 0) {
        uVar3 = local_90;
        (*(code *)PTR__objc_release_02578630)();
      }
      FUN_0027e44c();
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 0;
      local_c1 = 0;
      local_2d0 = local_28;
      local_a0 = uVar3;
      if (local_30 == 0) {
        FUN_0027e8f4(local_28,local_80);
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 1;
        local_c0 = local_2d0;
      }
      else {
        FUN_0027e5a0(local_28,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_2d0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_2d0;
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      lVar2 = local_38;
      if (local_a0 == 0) {
        if ((local_69 & 1) == 0) {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          lVar2 = local_38;
          if (uVar3 == 0) {
            uVar5 = 0xffffffffffffffff;
            FUN_00272848(0xffffffffffffffff,&cf__gcS0RZSOc);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar2 + 0x10))(lVar2,0);
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_3c = 1;
          }
          else {
            FUN_0027ebd0(local_68,&cf_mp4,local_38);
            local_3c = 1;
          }
        }
        else {
          uVar5 = 0xfffffffffffffff6;
          FUN_00272848(0xfffffffffffffff6,&cf_N_gRNS_uN);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar2 + 0x10))(lVar2,0);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          local_3c = 1;
        }
      }
      else {
        if (DAT_028c95a0 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028c95a0,PTR_s_discardSilently_026a1668);
        }
        puVar6 = PTR_WCRFinderDLWaiter_026ce478;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFinderDLWaiter_026ce478,PTR_s_new_0269d288);
        local_d0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTid__026a1670,local_78);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setMediaInfo__026a1678,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setMediaWrap__026a1680,local_a8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setRequiredFileFormat__026a1688,local_48);
        _objc_storeStrong(&DAT_028c95a0,local_d0);
        _objc_initWeak(auStack_d8,local_d0);
        lVar2 = local_38;
        local_100 = PTR___NSConcreteStackBlock_02578660;
        local_f8 = 0xc2000000;
        local_f4 = 0;
        local_f0 = FUN_0027ecac;
        local_e8 = &DAT_0257b238;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = lVar2;
        puVar6 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setCompletion__0269fdc8,&local_100);
        FUN_00273530();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = &cf_WCFinderVideoDownLoadMgrExt;
        local_108 = puVar6;
        _NSProtocolFromString();
        _objc_retainAutoreleasedReturnValue();
        local_110 = pcVar7;
        if (((local_108 != (undefined *)0x0) && (pcVar7 != (cfstringStruct *)0x0)) &&
           (puVar6 = local_108,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_108,PTR_s_respondsToSelector__026ca818,
                      PTR_s_registerExtension_withTarget__026a1690), ((ulong)puVar6 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_registerExtension_withTarget__026a1690,local_110,local_d0);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setRegistered__026a15c8,1);
        }
        local_111 = 0;
        if ((local_a8 == 0) ||
           (uVar3 = local_a0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_a0,PTR_s_respondsToSelector__026ca818,
                      PTR_s_startDownloadTotalVideoWithMedia_026a1698), (uVar3 & 1) == 0)) {
          uVar3 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,
                     PTR_s_startDownloadTotalVideoWithMedia_026a16a0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_startDownloadTotalVideoWithMedia_026a16a0,local_28);
            local_111 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_startDownloadTotalVideoWithMedia_026a1698,local_a8);
          local_111 = 1;
        }
        puVar10 = local_d0;
        puVar6 = PTR___NSConcreteStackBlock_02578660;
        bVar1 = (local_111 & 1) != 0;
        if (bVar1) {
          local_138 = 0;
          local_128 = 0x20000000;
          local_124 = 0x20;
          local_120 = 0;
          local_158 = 0;
          local_148 = 0x20000000;
          local_144 = 0x20;
          local_140 = 0xffffffffffffffff;
          local_160 = 0x78;
          local_190 = 0;
          local_180 = 0x32000000;
          local_17c = 0x30;
          local_178 = FUN_0027396c;
          local_170 = FUN_002739a8;
          local_168 = 0;
          ppuVar8 = &local_1f8;
          local_1f8 = PTR___NSConcreteStackBlock_02578660;
          local_1f0 = 0xc2000000;
          local_1ec = 0;
          local_1e8 = FUN_0027ed60;
          local_1e0 = &DAT_0257b318;
          local_188 = &local_190;
          local_150 = &local_158;
          local_130 = &local_138;
          _objc_copyWeak(auStack_1a0,auStack_d8);
          uVar3 = local_28;
          local_1b8 = &local_190;
          local_1b0 = &local_138;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_48;
          local_1d8 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          uVar3 = local_a8;
          local_1d0 = uVar4;
          local_1a8 = &local_158;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_68;
          local_1c8 = uVar3;
          local_198 = local_69 & 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_1c0 = uVar4;
          _objc_retainBlock();
          uVar5 = local_188[5];
          local_188[5] = ppuVar8;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          dVar9 = _dispatch_time(0,350000000);
          puVar10 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_220 = puVar6;
          local_218 = 0xc2000000;
          local_214 = 0;
          local_210 = FUN_0027f9dc;
          local_208 = &DAT_0257b2e8;
          local_200 = &local_190;
          _dispatch_after(dVar9,puVar10,&local_220);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          _objc_storeStrong(&local_1c0,0);
          _objc_storeStrong(&local_1c8,0);
          _objc_storeStrong(&local_1d0,0);
          _objc_storeStrong(&local_1d8,0);
          _objc_destroyWeak(auStack_1a0);
          __Block_object_dispose(&local_190,8);
          _objc_storeStrong(&local_168,0);
          __Block_object_dispose(&local_158,8);
          __Block_object_dispose(&local_138,8);
        }
        else {
          uVar5 = 0xfffffffffffffff4;
          FUN_00272848(0xfffffffffffffff4,&cf_el_TR_eN_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_finishWithPath_error__026a15f8,0);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_3c = (uint)!bVar1;
        _objc_storeStrong(&local_110);
        _objc_storeStrong(&local_108,0);
        _objc_storeStrong(&local_e0,0);
        _objc_destroyWeak(auStack_d8);
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
    }
    else {
      (**(code **)(local_38 + 0x10))(local_38,local_60[0],0);
      local_3c = 1;
    }
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

