// confirmUploadFrame: @ 01d698c0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::confirmUploadFrame_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 in_d1;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8 [13];
  undefined *local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  ulong local_150;
  uint local_144;
  undefined8 local_140;
  undefined *local_138;
  ulong local_130 [2];
  cfstringStruct *local_120;
  long local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = 0;
  pcVar2 = &cf_getTextFieldText_;
  _NSSelectorFromString();
  uVar3 = local_110;
  local_120 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((uVar3 & 1) != 0) {
    local_130[1] = 0;
    uVar3 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
    local_130[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSInvocation_026ce208,PTR_s_invocationWithMethodSignature__0269e1a0
               ,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_110);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setSelector__0269e1b0,local_120);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_setArgument_atIndex__0269eae8,local_130 + 1,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_invoke_0269e1b8);
    local_140 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getReturnValue__0269e1c0,&local_140);
    _objc_storeStrong(&local_118,local_140);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(local_130,0);
  }
  if ((local_118 == 0) ||
     (lVar5 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf_eQTy);
    local_144 = 1;
  }
  else {
    uVar3 = local_110;
    _objc_getAssociatedObject(local_110,&cf_uploadImage);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar3;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf__eQ1Y_);
      local_144 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(local_100 + (long)_framesDirectory);
      local_158 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_158;
      local_160 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_fileExistsAtPath__026ca630,uVar6);
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_160,1,0);
        uVar6 = local_160;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_168 = uVar6;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar6 = local_160;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_170 = uVar6;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar3 = local_150;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        local_178 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_writeToFile_atomically__0269f928,local_168,1);
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf_OX_VGr1Y_);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
          local_144 = 1;
        }
        else {
          local_f8 = &cf_name;
          local_90 = local_118;
          local_f0 = &cf_author;
          local_88 = &::cf___;
          local_e8 = &cf_mode;
          local_80 = &cf_single;
          local_e0 = &cf_left_top_x;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = &cf_left_top_y;
          puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_78 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_d0 = &cf_right_top_x;
          local_70 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = &cf_right_top_y;
          puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_68 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = &cf_left_bottom_x;
          puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_60 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_b8 = &cf_left_bottom_y;
          local_58 = puVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_b0 = &cf_right_bottom_x;
          local_50 = puVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_a8 = &cf_right_bottom_y;
          local_48 = puVar12;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_a0 = &cf_template_width;
          local_40 = puVar13;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(puVar14,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_98 = &cf_template_height;
          local_38 = puVar14;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(in_d1,puVar15,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar15;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_f8,0xd);
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar16;
          (*(code *)PTR__objc_release_02578630)(puVar15);
          (*(code *)PTR__objc_release_02578630)(puVar14);
          (*(code *)PTR__objc_release_02578630)(puVar13);
          (*(code *)PTR__objc_release_02578630)(puVar12);
          (*(code *)PTR__objc_release_02578630)(puVar11);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          local_1e8[0] = 0;
          local_1f8 = 0;
          puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_dataWithJSONObject_options_error_026a64a8,local_180,1,&local_1f8);
          _objc_retainAutoreleasedReturnValue();
          _objc_storeStrong(local_1e8,local_1f8);
          local_1f0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_writeToFile_atomically__0269f928,local_170,1);
          bVar1 = ((ulong)puVar4 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf__eQbR);
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_loadFrames_026b63c0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf_OX_Mn_1Y_)
            ;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
          }
          local_144 = (uint)!bVar1;
          _objc_storeStrong(&local_1f0);
          _objc_storeStrong(local_1e8,0);
          _objc_storeStrong(&local_180,0);
        }
        _objc_storeStrong(&local_178);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_168,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_showToast__026b3a18,&cf_WYX_X__W);
        local_144 = 1;
      }
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

