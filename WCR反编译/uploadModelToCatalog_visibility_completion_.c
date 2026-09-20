// uploadModelToCatalog:visibility:completion: @ 0159d64c

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::uploadModelToCatalog_visibility_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  cfstringStruct *pcVar12;
  cfstringStruct *local_318;
  cfstringStruct *local_300;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b0;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  undefined **local_218;
  undefined **local_210;
  cfstringStruct *local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  undefined **local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  cfstringStruct *local_1b0;
  byte local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  byte local_189;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  bool local_161;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  byte local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  ulong local_100;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  SEL local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  local_a8 = param_2;
  local_a0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_4);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_5);
  uVar3 = local_c0;
  ppuVar5 = &local_f0;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_0159e624;
  local_d8 = &DAT_02582318;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = uVar3;
  _objc_retainBlock();
  pcVar6 = local_a0;
  local_c8 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_canUploadModelToCatalog__026b0ac0,local_b0);
  uVar8 = local_b8;
  if (((ulong)pcVar6 & 1) == 0) {
    (*(code *)local_c8[2])(local_c8,0,&cf_S_MRNNOr);
    local_f4 = 1;
    goto LAB_0159e5b0;
  }
  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_100 = uVar9;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  uVar8 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isEqualToString__0269ccc8,&cf_public);
  if ((uVar8 & 1) == 0) {
    uVar8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isEqualToString__0269ccc8,&cf_private);
    if ((uVar8 & 1) != 0) goto LAB_0159d8a0;
    (*(code *)local_c8[2])(local_c8,0,&cf_blQ);
    local_f4 = 1;
  }
  else {
LAB_0159d8a0:
    puVar7 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar11;
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
    if (puVar7 == (undefined *)0x0) {
      (*(code *)local_c8[2])(local_c8,0,&cf_S_MR_g_vU_elNO);
      local_f4 = 1;
    }
    else {
      pcVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_119 = 0;
      local_129 = 0;
      local_139 = 0;
      if (((ulong)pcVar12 & 1) == 0) {
LAB_0159dad4:
        local_2b0 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_wcr_currentProviderCode_026b0a78);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = local_2b0;
      }
      else {
        pcVar12 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 1;
        local_118 = pcVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (pcVar12 == (cfstringStruct *)0x0) goto LAB_0159dad4;
        local_2b0 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = local_2b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_2b0;
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if ((local_129 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      if ((local_119 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_151 = false;
      bVar1 = ((ulong)pcVar12 & 1) == 0;
      if (bVar1) {
        local_2c8 = &::cf___;
      }
      else {
        local_2c8 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerVoiceId);
        _objc_retainAutoreleasedReturnValue();
        local_150 = local_2c8;
      }
      local_151 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_2c8;
      if ((local_151 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        pcVar6 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar12 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
        local_161 = false;
        bVar1 = ((ulong)pcVar12 & 1) == 0;
        if (bVar1) {
          local_2e0 = &::cf___;
        }
        else {
          local_2e0 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_160 = local_2e0;
        }
        local_161 = !bVar1;
        _objc_storeStrong(&local_148,local_2e0);
        if ((local_161 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      pcVar6 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (((ulong)pcVar12 & 1) != 0) {
        pcVar12 = local_148;
        FUN_0159d090();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_148;
        local_148 = pcVar12;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      pcVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_179 = 0;
      local_189 = 0;
      if (((ulong)pcVar12 & 1) == 0) {
LAB_0159dfb4:
        local_300 = &cf_r;
      }
      else {
        pcVar12 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_179 = 1;
        local_178 = pcVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (pcVar12 == (cfstringStruct *)0x0) goto LAB_0159dfb4;
        local_300 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_189 = 1;
        local_188 = local_300;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = local_300;
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_188);
      }
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_1a1 = 0;
      local_1b1 = 0;
      if (((ulong)pcVar12 & 1) == 0) {
LAB_0159e160:
        local_318 = &cf_clone;
      }
      else {
        pcVar12 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
        _objc_retainAutoreleasedReturnValue();
        local_1a1 = 1;
        local_1a0 = pcVar12;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (pcVar12 == (cfstringStruct *)0x0) goto LAB_0159e160;
        local_318 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentType);
        _objc_retainAutoreleasedReturnValue();
        local_1b1 = 1;
        local_1b0 = local_318;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = local_318;
      if ((local_1b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b0);
      }
      if ((local_1a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      local_98 = &cf_op;
      local_60 = &cf_upload;
      local_90 = &cf_wxid;
      local_58 = local_108;
      local_88 = &cf_name;
      local_50 = local_170;
      local_80 = &cf_provider;
      local_48 = local_110;
      local_78 = &cf_providerVoiceId;
      local_40 = local_148;
      local_70 = &cf_contentType;
      local_38 = local_198;
      local_68 = &cf_visibility;
      local_30 = local_100;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &local_200;
      local_200 = PTR___NSConcreteStackBlock_02578660;
      local_1f8 = 0xc2000000;
      local_1f4 = 0;
      local_1f0 = FUN_0159e7c0;
      local_1e8 = &DAT_0257cb48;
      local_1c0 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar2 = local_c8;
      local_1e0 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_100;
      local_1d0 = ppuVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = uVar8;
      _objc_retainBlock();
      pcVar6 = local_110;
      local_1c8 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar12 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (((ulong)pcVar12 & 1) == 0) {
        (*(code *)local_1c8[2])();
        local_f4 = 0;
      }
      else {
        uVar8 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isEqualToString__0269ccc8);
        pcVar6 = &cf_public;
        if ((uVar8 & 1) == 0) {
          pcVar6 = &cf_unlist;
        }
        (*(code *)PTR__objc_retain_02578638)();
        pcVar4 = local_a0;
        ppuVar2 = local_c8;
        pcVar12 = local_148;
        local_238 = PTR___NSConcreteStackBlock_02578660;
        local_230 = 0xc2000000;
        local_22c = 0;
        local_228 = FUN_0159fa50;
        local_220 = &DAT_02586dd8;
        local_208 = pcVar6;
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar5 = local_1c8;
        local_218 = ppuVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_210 = ppuVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_wcr_publishFishModelId_fishVisib_026b0ac8,pcVar12,pcVar6,&local_238)
        ;
        local_f4 = 1;
        _objc_storeStrong(&local_210);
        _objc_storeStrong(&local_218,0);
        _objc_storeStrong(&local_208,0);
      }
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_1d0,0);
      _objc_storeStrong(&local_1e0,0);
      _objc_storeStrong(&local_1c0,0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_100,0);
LAB_0159e5b0:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

