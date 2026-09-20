// generateCoordinatesDict @ 01d5b008

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenshotFrameEditorViewController::generateCoordinatesDict(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  double in_d0;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_d1;
  double dVar12;
  double dVar13;
  double dVar14;
  cfstringStruct *local_1b8;
  cfstringStruct *local_198;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  undefined *local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = in_d0;
  local_38 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = in_d0;
  local_48 = in_d1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = in_d0;
  local_58 = in_d1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_70 = in_d0;
  local_68 = in_d1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_198 = &cf__g_TT;
  }
  else {
    local_80 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameField_026bdbf0);
    _objc_retainAutoreleasedReturnValue();
    local_198 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_198;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,&cf_name);
  if (pcVar6 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_1b8 = &cf_WCRefine;
  }
  else {
    local_a0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_authorField_026c47f0);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_1b8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,&cf_author);
  if (pcVar6 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
  pcVar3 = &cf_double;
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = &cf_single;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_mode);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_top_x);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_top_y);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_top_x);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_top_y);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_bottom_x);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_bottom_y);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_bottom_x);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_bottom_y);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
  bVar1 = false;
  dVar7 = local_68;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar4 == (cfstringStruct *)0x4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    dVar7 = local_68;
  }
  dVar11 = dVar7;
  dVar14 = in_d1;
  if (bVar1) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar8 = dVar7;
    dVar12 = in_d1;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = dVar8;
    dVar13 = dVar12;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar10 = dVar9;
    dVar11 = dVar13;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar14 = dVar11;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_top_x2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)in_d1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_top_y2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_top_x2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar12);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_top_y2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar9);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_bottom_x2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar13);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_left_bottom_y2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_bottom_x2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(int)dVar11);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_right_bottom_y2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateImage_026c46b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInt__0269d810,(int)dVar11);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_template_width);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateImage_026c46b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInt__0269d810,(int)dVar14);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_template_height);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar5 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_78,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar5;
}

