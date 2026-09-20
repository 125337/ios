// buildSiliconFlowModelWithName:sampleText:completion: @ 015917c4

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::buildSiliconFlowModelWithName_sampleText_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *local_1f0;
  undefined *local_1c0;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  long local_160;
  undefined **local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  undefined **local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  bool local_b9;
  undefined *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  long local_90;
  undefined4 local_84;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar1 = local_48;
  ppuVar2 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_01592674;
  local_60 = &DAT_02586c28;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar1;
  _objc_retainBlock();
  pcVar3 = local_28;
  local_50 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_requestCredential_026b09e0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  lVar5 = local_40;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)local_50[2])(local_50,0,&cf__gMn_cSQ);
    local_84 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      (*(code *)local_50[2])(local_50,0,&cf_kXQ7h_g__veW_7h_gKQ_);
      local_84 = 1;
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sampleFilePaths_026b0a28);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
      local_1c0 = PTR__OBJC_CLASS___NSData_026ce1d0;
      local_a9 = 0;
      local_b9 = false;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1c0 = (undefined *)0x0;
      }
      else {
        pcVar6 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_dataWithContentsOfFile__0269e0b8);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_1c0;
      }
      local_b9 = pcVar3 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_1c0;
      if ((local_b9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        (*(code *)local_50[2])(local_50,0,&cf__);
        local_84 = 1;
      }
      else {
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedSynthModelString_026b0a48);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_98;
        local_c8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d9 = 0;
        local_e9 = false;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_1f0 = &cf_wav;
        }
        else {
          local_1f0 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1f0;
        }
        local_e9 = pcVar7 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = local_1f0;
        if ((local_e9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        puVar8 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_WCRefineVoiceClone_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_WCRefineVoiceClone_,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        local_100 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSMutableData_026ce660;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = &local_140;
        local_140 = PTR___NSConcreteStackBlock_02578660;
        local_138 = 0xc2000000;
        local_134 = 0;
        local_130 = FUN_0159284c;
        local_128 = &DAT_02586c58;
        local_108 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar3 = local_100;
        local_120 = puVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = pcVar3;
        _objc_retainBlock();
        local_110 = ppuVar2;
        (*(code *)ppuVar2[2])(ppuVar2,&cf_model,local_c8);
        (*(code *)local_110[2])(local_110,&cf_customName,local_f8);
        (*(code *)local_110[2])(local_110,&cf_text,local_90);
        puVar8 = local_108;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentTypeForExt__026b0a30,local_d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_stringWithFormat__0269cca8,
                   &
                   cf_____Content_Disposition_form_data_name__file__filename__sample____Content_Type___
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_appendData__026a9df8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_appendData__026a9df8,local_a0);
        puVar4 = local_108;
        pcVar3 = &::cf_format_s_;
        (*(code *)PTR__objc_msgSend_02578628)(&::cf_format_s_,PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendData__026a9df8);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        puVar4 = local_108;
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendData__026a9df8);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        pcVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedBaseURL_026b0a38);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_requestWithURL__026a16e0);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
        puVar4 = local_148;
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__
                  );
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar8,&cf_Authorization);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        puVar4 = local_148;
        puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_multipart_form_data_boundary___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar8,&cf_Content_Type);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setHTTPBody__026a64b8,local_108);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x404e000000000000,local_148,PTR_s_setTimeoutInterval__0269cae8);
        puVar8 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = local_50;
        puVar4 = local_148;
        local_180 = PTR___NSConcreteStackBlock_02578660;
        local_178 = 0xc2000000;
        local_174 = 0;
        local_170 = FUN_01592974;
        local_168 = &DAT_02582a88;
        (*(code *)PTR__objc_retain_02578638)();
        lVar5 = local_38;
        local_158 = ppuVar2;
        local_150 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = lVar5;
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_180);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        _objc_storeStrong(&local_160);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_118,0);
        _objc_storeStrong(&local_120,0);
        _objc_storeStrong(&local_108,0);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_c8,0);
        local_84 = 0;
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

