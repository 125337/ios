// wcr_isSingleFrameTemplateAtRelativePath: @ 00706548

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_isSingleFrameTemplateAtRelativePath_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  float fVar7;
  undefined8 in_d0;
  double dVar8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_188;
  ulong local_d8;
  double local_d0;
  double local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar1 = local_40;
  if (uVar2 == 0) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar1 & 1) == 0) {
      uVar2 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      local_58 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_60,0);
    }
    while( true ) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__);
      uVar1 = local_58;
      fVar7 = (float)in_d0;
      if ((uVar2 & 1) == 0) break;
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_78);
      if (((ulong)puVar3 & 1) == 0) {
        local_21 = 0;
        local_50 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_78
                  );
        _objc_retainAutoreleasedReturnValue();
        local_91 = false;
        local_80 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_188 = (cfstringStruct *)0x0;
        }
        else {
          local_188 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_JSONObjectWithData_options_error_026ca480,puVar3,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_188;
        }
        local_91 = puVar3 != (undefined *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_188;
        if ((local_91 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        pcVar5 = local_88;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          local_21 = 0;
          local_50 = 1;
        }
        else {
          local_a9 = 0;
          local_b9 = 0;
          pcVar5 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar6 & 1) == 0) {
            local_1e0 = &cf_single;
          }
          else {
            local_1e0 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
            _objc_retainAutoreleasedReturnValue();
            local_a9 = 1;
            local_a8 = local_1e0;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = local_1e0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = local_1e0;
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_a9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_double)
          ;
          if (((ulong)pcVar5 & 1) == 0) {
            pcVar5 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar8 = (double)fVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_88;
            local_c8 = dVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
            fVar7 = SUB84(dVar8,0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar8 = (double)fVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            uVar1 = local_58;
            local_d0 = dVar8;
            if ((local_c8 <= 0.0) || (dVar8 <= 0.0)) {
              local_21 = 0;
              local_50 = 1;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf____png);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_d8 = uVar1;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar3 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_fileExistsAtPath__026ca630,local_d8);
              local_21 = (byte)puVar3 & 1;
              local_50 = 1;
              _objc_storeStrong(&local_d8,0);
            }
          }
          else {
            local_21 = 0;
            local_50 = 1;
          }
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

