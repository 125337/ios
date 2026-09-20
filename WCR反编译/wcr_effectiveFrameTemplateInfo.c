// wcr_effectiveFrameTemplateInfo @ 007042c8

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_effectiveFrameTemplateInfo
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  float fVar7;
  undefined8 in_d0;
  double dVar8;
  double dVar9;
  cfstringStruct *local_2c8;
  undefined *local_e0;
  undefined *local_d8;
  double local_d0;
  double local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  undefined *local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_50;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_effectiveFrameTemplateRelati_026a7430);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  IVar1 = local_40;
  if (param_1 == 0) {
    local_28 = (undefined *)0x0;
    local_50 = 1;
    goto LAB_0070580c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_hasPrefix__0269d320,&cf__);
  if ((IVar1 & 1) == 0) {
    IVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_58;
    local_58 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_60,0);
  }
  while( true ) {
    IVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__);
    IVar1 = local_58;
    fVar7 = (float)in_d0;
    if ((IVar2 & 1) == 0) break;
    IVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_substringToIndex__0269d6c0,IVar2 - 1);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    local_58 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_50 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_58;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_78);
    if (((ulong)puVar3 & 1) == 0) {
      local_28 = (undefined *)0x0;
      local_50 = 1;
    }
    else {
      local_80 = 0;
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_isDarkMode_026a7438);
      IVar1 = local_58;
      if ((IVar2 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____dark_png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_88 = IVar1;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_88);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_storeStrong(&local_80,local_88);
        }
        _objc_storeStrong(&local_88,0);
      }
      IVar1 = local_58;
      if (local_80 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_80;
        local_80 = IVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_80);
      if (((ulong)puVar3 & 1) == 0) {
        local_28 = (undefined *)0x0;
        local_50 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_78
                  );
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_28 = (undefined *)0x0;
          local_50 = 1;
        }
        else {
          pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_JSONObjectWithData_options_error_026ca480,puVar3,0,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_98 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar5 & 1) == 0) {
            local_28 = (undefined *)0x0;
            local_50 = 1;
          }
          else {
            local_a9 = 0;
            local_b9 = 0;
            pcVar5 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar6 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar6 & 1) == 0) {
              local_2c8 = &cf_single;
            }
            else {
              local_2c8 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
              _objc_retainAutoreleasedReturnValue();
              local_a9 = 1;
              local_a8 = local_2c8;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_b9 = 1;
              local_b8 = local_2c8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = local_2c8;
            if ((local_b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_b8);
            }
            if ((local_a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a8);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_double);
            if (((ulong)pcVar5 & 1) == 0) {
              pcVar5 = local_98;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar8 = (double)fVar7;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              pcVar5 = local_98;
              local_c8 = dVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
              fVar7 = SUB84(dVar8,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              dVar8 = (double)fVar7;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
              local_d0 = dVar8;
              if ((local_c8 <= 0.0) || (dVar8 <= 0.0)) {
                local_28 = (undefined *)0x0;
                local_50 = 1;
              }
              else {
                puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                           PTR_s_imageWithContentsOfFile__0269e0e0,local_80);
                _objc_retainAutoreleasedReturnValue();
                local_d8 = puVar3;
                if (puVar3 == (undefined *)0x0) {
LAB_00704f1c:
                  local_28 = (undefined *)0x0;
                  local_50 = 1;
                }
                else {
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGImage_0269e0e8);
                  if (puVar3 == (undefined *)0x0) goto LAB_00704f1c;
                  puVar3 = PTR_WCRefineScreenRecordingFrameTemplate_026ce8c8;
                  _objc_alloc_init();
                  local_e0 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_setRelativePath__026a7440,local_40);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_setAbsoluteFolderPath__026a7448,local_58);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_setFrameImage__026a7450,local_d8);
                  dVar8 = local_c8;
                  dVar9 = local_d0;
                  FUN_00700d74();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar8,dVar9,local_e0,PTR_s_setTemplateSize__026a7458);
                  fVar7 = SUB84(dVar8,0);
                  pcVar5 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar9 = (double)fVar7;
                  pcVar6 = local_98;
                  dVar8 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
                  fVar7 = SUB84(dVar8,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar8 = (double)fVar7;
                  FUN_00705844();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar8,local_e0,PTR_s_setLeftTop__026a7460);
                  fVar7 = SUB84(dVar9,0);
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar9 = (double)fVar7;
                  pcVar6 = local_98;
                  dVar8 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
                  fVar7 = SUB84(dVar8,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar8 = (double)fVar7;
                  FUN_00705844();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar8,local_e0,PTR_s_setRightTop__026a7468);
                  fVar7 = SUB84(dVar9,0);
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar9 = (double)fVar7;
                  pcVar6 = local_98;
                  dVar8 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
                  fVar7 = SUB84(dVar8,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar8 = (double)fVar7;
                  FUN_00705844();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar8,local_e0,PTR_s_setLeftBottom__026a7470);
                  fVar7 = SUB84(dVar9,0);
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  pcVar5 = local_98;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar9 = (double)fVar7;
                  pcVar6 = local_98;
                  dVar8 = dVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
                  fVar7 = SUB84(dVar8,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  dVar8 = (double)fVar7;
                  FUN_00705844();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar8,local_e0,PTR_s_setRightBottom__026a7478);
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                  puVar3 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  if (((ulong)puVar4 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_30,PTR_s_wcr_prepareFrameTemplateInfo__026a7480,local_e0);
                  }
                  puVar3 = local_e0;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = puVar3;
                  local_50 = 1;
                  _objc_storeStrong(&local_e0,0);
                }
                _objc_storeStrong(&local_d8,0);
              }
            }
            else {
              local_28 = (undefined *)0x0;
              local_50 = 1;
            }
            _objc_storeStrong(&local_a0,0);
          }
          _objc_storeStrong(&local_98,0);
        }
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_58,0);
LAB_0070580c:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

