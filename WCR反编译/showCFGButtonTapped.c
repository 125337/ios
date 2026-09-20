// showCFGButtonTapped @ 01d58eac

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::showCFGButtonTapped(ID param_1,SEL param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  int iVar8;
  ID local_a0;
  undefined *local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  byte local_4a;
  byte local_49;
  ID local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
  iVar8 = 8;
  if ((param_1 & 1) == 0) {
    iVar8 = 4;
  }
  local_38 = (long)iVar8;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
  local_49 = 0;
  if ((IVar6 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  lVar1 = IVar5 + local_a0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  local_40 = lVar1;
  if (lVar1 < local_38) {
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_HQb_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_showAlert_message__026c4820,&cf_c_y);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_4a = (byte)IVar5;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainScrollView_026c4668);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_viewWithTag__026cabe0,0x4e23);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar4;
    if (IVar4 != 0) {
      pcVar2 = &cf_C;
      if ((local_4a & 1) == 0) {
        pcVar2 = &cf_>f_yC;
      }
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setTitle_forState__026caab8,pcVar2,0);
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((IVar5 & 1) == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_generateCoordinatesDict_026c4960);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_68 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,&cf__);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_68;
      local_70 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendFormat__0269d148,&cf__name_______);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendFormat__0269d148,&cf__author_______);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_appendFormat__0269d148,&cf__mode_______);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__left_top_x_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__left_top_y_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__right_top_x_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__right_top_y_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__left_bottom_x_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__left_bottom_y_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__right_bottom_x_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__right_bottom_y_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
      bVar3 = false;
      if ((IVar4 & 1) != 0) {
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = IVar4 != 0;
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      puVar7 = local_70;
      if (bVar3) {
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_x2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__left_top_x2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_top_y2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__left_top_y2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_x2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__right_top_x2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_top_y2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__right_top_y2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_x2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__left_bottom_x2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_left_bottom_y2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__left_bottom_y2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_x2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__right_bottom_x2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar7 = local_70;
        IVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_right_bottom_y2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_appendFormat__0269d148,&cf__right_bottom_y2_____);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_width);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__template_width_____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = local_70;
      IVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_template_height);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_appendFormat__0269d148,&cf__template_height____);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_appendString__0269ccb0,&cf__);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_adjustLayout_026c47e0);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

