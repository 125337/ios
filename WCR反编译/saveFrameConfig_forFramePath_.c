// saveFrameConfig:forFramePath: @ 01d6f5fc

/* Function Stack Size: 0x20 bytes */

bool WCRefineScreenshotFrameLibraryViewController::saveFrameConfig_forFramePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_78;
  ulong local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_48 == 0) || (local_40 == 0)) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_48;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_40;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__name_______);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__author_______);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar4;
    if ((uVar4 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0), uVar4 == 0)) {
      _objc_storeStrong(&local_70,&cf_single);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendFormat__0269d148,&cf__mode_______);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__left_top_x_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__left_top_y_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__right_top_x_____)
    ;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_appendFormat__0269d148,&cf__right_top_y_____)
    ;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__left_bottom_x_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__left_bottom_y_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__right_bottom_x_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__right_bottom_y_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_double);
    puVar2 = local_68;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__left_top_x2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__left_top_y2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__right_top_x2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__right_top_y2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__left_bottom_x2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__left_bottom_y2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__right_bottom_x2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = local_68;
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_appendFormat__0269d148,&cf__right_bottom_y2_____);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__template_width_____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = local_68;
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_appendFormat__0269d148,&cf__template_height____);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_appendString__0269ccb0,&cf__);
    puVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_writeToFile_atomically__0269f928,local_60,1);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_OX_bR);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_loadFrames_026b63c0);
    }
    local_21 = (byte)puVar2 & 1;
    local_4c = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

