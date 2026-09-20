// editFrame @ 01d6ecc8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::editFrame(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  uint local_170;
  uint local_154;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  long local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    pcVar1 = *(cfstringStruct **)(param_1 + (long)_selectedImagePath);
    local_30 = param_2;
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(local_28 + (long)_selectedImagePath);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf_R_WYXVGr1Y_);
      local_4c = 1;
    }
    else {
      uVar5 = *(undefined8 *)(local_28 + (long)_selectedImagePath);
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &::cf___;
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        local_78 = 0;
        local_88 = 0;
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,puVar2,0,&local_88);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_78,local_88);
        local_80 = pcVar1;
        if ((pcVar1 != (cfstringStruct *)0x0) && (local_78 == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 0;
          local_154 = 0;
          if (pcVar1 != (cfstringStruct *)0x0) {
            pcVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_90 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_154 = (uint)pcVar3;
          }
          if ((local_91 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_90);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          if ((local_154 & 1) != 0) {
            pcVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_60;
            local_60 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 0;
          local_170 = 0;
          if (pcVar1 != (cfstringStruct *)0x0) {
            pcVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
            _objc_retainAutoreleasedReturnValue();
            local_a1 = 1;
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_a0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_170 = (uint)pcVar3;
          }
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          if ((local_170 & 1) != 0) {
            pcVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_68;
            local_68 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
      }
      puVar2 = PTR_WCRefineScreenshotFrameEditorViewController_026cf038;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDefaultName__026b5948,local_60);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDefaultAuthor__026b5950,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCfgFilePath__026c4a38,local_58);
      _objc_initWeak(auStack_b8,local_28);
      uVar5 = *(undefined8 *)(local_28 + (long)_selectedImagePath);
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_01d6f564;
      local_d8 = &DAT_02589318;
      local_c0 = uVar5;
      _objc_copyWeak(auStack_c8,auStack_b8);
      uVar5 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOnSave__026b5960,&local_f0);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_storeStrong(&local_c0,0);
      _objc_destroyWeak(auStack_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

