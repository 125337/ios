// buildModelWithName:completion: @ 01590084

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::buildModelWithName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ID IVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  ID IVar10;
  cfstringStruct *local_1b0;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  undefined **local_110;
  ID local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  ID local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined **local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  undefined1 *local_88;
  undefined4 local_7c;
  ID local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_40;
  ppuVar3 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01590cec;
  local_58 = &DAT_02586c28;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  _objc_retainBlock();
  IVar4 = local_28;
  local_48 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_requestCredential_026b09e0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
  if (IVar4 == 0) {
    (*(code *)local_48[2])(local_48,0,&cf__gMn_cSQ);
    local_7c = 1;
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_88 = puVar6;
    if ((puVar6 == (undefined1 *)0x0) || (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sampleFilePaths_026b0a28);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
      if (IVar4 == 0) {
        (*(code *)local_48[2])(local_48,0,&cf__);
        local_7c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = &cf_WCRefineVoiceClone_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_WCRefineVoiceClone_,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSMutableData_026ce660;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = &local_d8;
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_01590ec4;
        local_c0 = &DAT_02586c58;
        local_a0 = puVar5;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar8 = local_98;
        local_b8 = puVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar8;
        _objc_retainBlock();
        local_a8 = ppuVar3;
        (*(code *)ppuVar3[2])(ppuVar3,&cf_type,&cf_tts);
        ppuVar3 = local_a8;
        pcVar8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_1b0 = &cf_WCRefineVoice;
        }
        else {
          local_1b0 = local_38;
        }
        (*(code *)ppuVar3[2])(ppuVar3,&cf_title,local_1b0);
        (*(code *)local_a8[2])(local_a8,&cf_description,&cf_WCRefinevoiceclone);
        (*(code *)local_a8[2])(local_a8,&cf_train_mode,&cf_fast);
        (*(code *)local_a8[2])(local_a8,&cf_visibility,&cf_private);
        for (local_e0 = 0; uVar1 = local_e0, IVar4 = local_90,
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0), puVar7 = local_a0,
            puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0, uVar1 < IVar4; local_e0 = local_e0 + 1) {
          IVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_dataWithContentsOfFile__0269e0b8);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = puVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          puVar5 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            local_7c = 4;
          }
          else {
            IVar4 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
            _objc_retainAutoreleasedReturnValue();
            IVar10 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_f0 = IVar10;
            (*(code *)PTR__objc_release_02578630)(IVar4);
            puVar7 = local_a0;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            IVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_contentTypeForExt__026b0a30,local_f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_stringWithFormat__0269cca8,
                       &
                       cf_____Content_Disposition_form_data_name__voices__filename__sample_lu____Content_Type___
                      );
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendData__026a9df8);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_appendData__026a9df8,local_e8);
            puVar5 = local_a0;
            pcVar8 = &::cf_format_s_;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&::cf_format_s_,PTR_s_dataUsingEncoding__026a12e8,4);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendData__026a9df8);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            _objc_storeStrong(&local_f0,0);
            local_7c = 0;
          }
          _objc_storeStrong(&local_e8,0);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendData__026a9df8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_f8 = &cf__v1_audio_voice_clone;
        if (local_88 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_f8 = &cf__model;
        }
        (*(code *)PTR__objc_retain_02578638)();
        puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedBaseURL_026b0a38);
        _objc_retainAutoreleasedReturnValue();
        IVar10 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLWithString__026a16d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_requestWithURL__026a16e0);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(IVar10);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
        puVar5 = local_100;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__
                  );
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar7,&cf_Authorization);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        puVar5 = local_100;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_multipart_form_data_boundary___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar7,&cf_Content_Type);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setHTTPBody__026a64b8,local_a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x404e000000000000,local_100,PTR_s_setTimeoutInterval__0269cae8);
        puVar7 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = local_48;
        puVar5 = local_100;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_01590fec;
        local_120 = &DAT_02582a88;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar8 = local_38;
        local_110 = ppuVar3;
        local_108 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = pcVar8;
        puVar9 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar5,&local_138);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
        local_7c = 0;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)local_48[2])(local_48,0,&cf_S_MRO_FUfN_ecY_R_u0KbRmRrI);
      local_7c = 1;
    }
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

