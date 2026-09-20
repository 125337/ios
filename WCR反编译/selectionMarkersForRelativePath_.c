// selectionMarkersForRelativePath: @ 01fa63f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineWatermarkLibraryViewController::selectionMarkersForRelativePath_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte local_fc;
  undefined *local_d8;
  char local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isNoneWatermarkItem__026c9d80,local_40);
  uVar3 = local_40;
  local_41 = (byte)IVar2;
  if ((IVar2 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = 1;
      local_28 = puVar4;
      goto LAB_01fa6dc4;
    }
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isVideoWatermarkContext_026c9d88);
  local_58 = &cf_videoWatermark;
  if ((IVar2 & 1) == 0) {
    local_58 = &cf_screenshotWatermark;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_50;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2Enabled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_valueForKey__0269d128);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = local_50;
  local_71 = 0;
  local_81 = 0;
  local_fc = 1;
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___3Enabled);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_valueForKey__0269d128);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_fc = (byte)puVar5;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_61 = local_fc & 1;
  for (local_90 = 1; puVar4 = local_60, local_90 < 4; local_90 = local_90 + 1) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ldEnabled
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_50;
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      local_48 = 4;
    }
    else {
      local_a0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      if ((local_90 == 1) && ((local_61 & 1) == 0)) {
        _objc_storeStrong(&local_a0,&cf_e);
        _objc_storeStrong(&local_a8,&cf_Y);
      }
      else {
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_watermarkLayerDisplayNameForInde_026b5848,local_90);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_b0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_a0;
        local_a0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_a8;
        local_a8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_b0,0);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____ldImagePath);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____ldNightImagePath);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_50;
      local_c0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,local_b8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = true;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
        bVar1 = puVar4 == (undefined *)0x0;
      }
      local_c9 = bVar1;
      puVar4 = local_c8;
      if ((local_41 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)puVar4 & 1) != 0) &&
           (puVar4 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,local_40),
           ((ulong)puVar4 & 1) != 0)) goto LAB_01fa6b60;
      }
      else if ((bool)local_c9 != false) {
LAB_01fa6b60:
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_a0);
      }
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      bVar1 = true;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
        bVar1 = puVar4 == (undefined *)0x0;
      }
      puVar4 = local_d8;
      if ((local_41 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((((ulong)puVar4 & 1) != 0) &&
           (puVar4 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,local_40),
           ((ulong)puVar4 & 1) != 0)) goto LAB_01fa6cbc;
      }
      else if (bVar1) {
LAB_01fa6cbc:
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_a8);
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_98,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar4;
  local_48 = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_01fa6dc4:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

