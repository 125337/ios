// deleteModelId:completion: @ 0159faf8

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::deleteModelId_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ulong uVar5;
  undefined *puVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_2a8;
  cfstringStruct *local_270;
  ulong local_208;
  ulong local_200;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined **local_1a0;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  undefined *local_170;
  undefined1 *local_168;
  ID local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  cfstringStruct *local_110;
  ulong local_108;
  undefined4 local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3,param_3,param_4,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar1 = local_c8;
  ppuVar2 = &local_f8;
  local_f8 = PTR___NSConcreteStackBlock_02578660;
  local_f0 = 0xc2000000;
  local_ec = 0;
  local_e8 = FUN_015a058c;
  local_e0 = &DAT_02582318;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = uVar1;
  _objc_retainBlock();
  lVar12 = local_c0;
  local_d0 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar12 == 0) {
    (*(code *)local_d0[2])(local_d0,0,&cf_eHe_jW);
    local_fc = 1;
  }
  else {
    local_108 = 0;
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar3;
    _memset(auStack_158,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    local_200 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != 0) {
      lVar12 = *local_148;
      local_208 = 0;
      do {
        do {
          if (*local_148 - lVar12 != 0) {
            _objc_enumerationMutation(*local_148 - lVar12,IVar4);
          }
          uVar13 = *(ulong *)(local_150 + local_208 * 8);
          local_118 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar13,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar13);
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_118);
          }
          else {
            _objc_storeStrong(&local_108,local_118);
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_208 = 0;
      } while (local_200 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_activeModelId_026b0a60);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_b0;
    if ((IVar7 & 1) != 0) {
      pcVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_270 = pcVar8;
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_270 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setActiveModelId__026b0a88,local_270);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    uVar5 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_catalog);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if ((uVar13 & 1) == 0) {
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_requestCredential_026b09e0);
      _objc_retainAutoreleasedReturnValue();
      local_160 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
      if (IVar4 == 0) {
        (*(code *)local_d0[2])(local_d0,1,0);
        local_fc = 1;
      }
      else {
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_168 = puVar9;
        if (puVar9 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
          (*(code *)local_d0[2])(local_d0,1,0);
          local_fc = 1;
        }
        else {
          local_179 = 0;
          local_189 = 0;
          local_2a8 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (puVar9 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf__v1_audio_voice___);
            _objc_retainAutoreleasedReturnValue();
            local_179 = 1;
            local_178 = local_2a8;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf__model___);
            _objc_retainAutoreleasedReturnValue();
            local_189 = 1;
            local_188 = local_2a8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_170 = local_2a8;
          if ((local_189 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_188);
          }
          if ((local_179 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          puVar10 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
          puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resolvedBaseURL_026b0a38);
          _objc_retainAutoreleasedReturnValue();
          IVar7 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_URLWithString__026a16d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_requestWithURL__026a16e0);
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar10;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(IVar7);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setHTTPMethod__026a64b0,&cf_DELETE);
          puVar6 = local_198;
          puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_Bearer__);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar10,&cf_Authorization);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4034000000000000,local_198,PTR_s_setTimeoutInterval__0269cae8);
          puVar10 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = local_d0;
          puVar6 = local_198;
          local_1c0 = PTR___NSConcreteStackBlock_02578660;
          local_1b8 = 0xc2000000;
          local_1b4 = 0;
          local_1b0 = FUN_015a0728;
          local_1a8 = &DAT_02581b60;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = ppuVar2;
          puVar11 = puVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar10,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar6,&local_1c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar11);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          _objc_storeStrong(&local_1a0);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_170,0);
          local_fc = 0;
        }
      }
      _objc_storeStrong(&local_160,0);
    }
    else {
      (*(code *)local_d0[2])(local_d0,1,0);
      local_fc = 1;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

