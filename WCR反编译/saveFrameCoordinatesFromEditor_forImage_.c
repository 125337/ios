// saveFrameCoordinatesFromEditor:forImage: @ 01d67d34

/* Function Stack Size: 0x20 bytes */

bool WCRefineScreenshotFrameLibraryViewController::saveFrameCoordinatesFromEditor_forImage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulong local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_40 == (undefined *)0x0) || (local_48 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_1Y_);
    local_21 = 0;
    local_4c = 1;
  }
  else {
    uVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_40;
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_40;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    if ((local_68 == (undefined *)0x0) ||
       (puVar4 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       puVar4 == (undefined *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_Frame__ld);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_68;
      local_68 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    if ((local_70 == (undefined *)0x0) ||
       (puVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
       puVar4 == (undefined *)0x0)) {
      _objc_storeStrong(&local_70,&cf___);
    }
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf______<>__);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_68;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_68;
    local_68 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = local_68;
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_68;
    local_68 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_80 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      local_88 = 0;
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_88,local_90);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar3 = local_80;
      if (local_88 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar7 = local_48;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_writeToFile_atomically__0269f928,local_98,1);
        uVar3 = local_80;
        if ((uVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_VGr1Y_);
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_21 = 0;
          local_4c = 1;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,
                     &cf__);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__name_______);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_appendFormat__0269d148,&cf__author_______);
          puVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar4;
          if ((puVar4 == (undefined *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0),
             puVar4 == (undefined *)0x0)) {
            _objc_storeStrong(&local_b8,&cf_single);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_appendFormat__0269d148,&cf__mode_______);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__left_top_x_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__left_top_y_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__right_top_x_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__right_top_y_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__left_bottom_x_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__left_bottom_y_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__right_bottom_x_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__right_bottom_y_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,&cf_double)
          ;
          puVar4 = local_b0;
          if (((ulong)puVar5 & 1) != 0) {
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__left_top_x2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__left_top_y2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__right_top_x2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__right_top_y2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__left_bottom_x2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__left_bottom_y2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__right_bottom_x2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_b0;
            puVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_appendFormat__0269d148,&cf__right_bottom_y2_____);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__template_width_____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_b0;
          puVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendFormat__0269d148,&cf__template_height____);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_appendString__0269ccb0,&cf__);
          puVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_dataUsingEncoding__026a12e8,4);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_writeToFile_atomically__0269f928,local_a8,1);
          bVar1 = ((ulong)puVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_bR);
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_loadFrames_026b63c0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_Mn_1Y_);
            puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          local_4c = 1;
          local_21 = bVar1;
          _objc_storeStrong(&local_c0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_1Y_);
        local_21 = 0;
        local_4c = 1;
      }
      _objc_storeStrong(&local_88,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf__X__W_TTfbc);
      local_21 = 0;
      local_4c = 1;
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

