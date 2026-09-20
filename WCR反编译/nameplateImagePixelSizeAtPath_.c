// nameplateImagePixelSizeAtPath: @ 010e0090

/* Function Stack Size: 0x18 bytes */

CGSize WCRefineNameplateHelper::nameplateImagePixelSizeAtPath_(ID param_1,SEL param_2,ID param_3)

{
  CGSize CVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  double in_d0;
  double dVar8;
  double in_d1;
  double dVar9;
  ID local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  long local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    dStack_38 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_40 = *(double *)PTR__CGSizeZero_025782f8;
    local_5c = 1;
    goto LAB_010e0828;
  }
  local_28 = &DAT_028e33d0;
  local_30 = 0;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02585510);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_68 == (undefined *)0x0) {
    dStack_38 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_40 = *(double *)PTR__CGSizeZero_025782f8;
    local_5c = 1;
  }
  else {
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileSize_02578028);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_________9f);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = DAT_028e33c8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e33c8,PTR_s_objectForKey__0269e048,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_78 = lVar2;
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      if ((puVar3 == (undefined *)0x0) ||
         (_CGImageSourceCreateWithURL(puVar3,0), local_88 = puVar3, puVar3 == (undefined *)0x0)) {
LAB_010e0524:
        IVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cachedImageAtPath__026ae8c8,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = IVar6;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGImage_0269e0e8);
        IVar7 = local_c8;
        if (IVar6 == 0) {
LAB_010e068c:
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_size_026cab00);
          dVar8 = 1.0;
          if (1.0 <= in_d0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_size_026cab00);
            lVar2 = DAT_028e33c8;
            puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
            dStack_38 = 1.0;
            if (1.0 <= dVar8) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_size_026cab00);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_valueWithCGSize__0269ec00);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,local_70);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_size_026cab00);
              local_40 = dVar8;
              goto LAB_010e07d8;
            }
          }
          dStack_38 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
          local_40 = *(double *)PTR__CGSizeZero_025782f8;
        }
        else {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_CGImage_0269e0e8);
          _CGImageGetWidth();
          IVar6 = local_c8;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGImage_0269e0e8);
          _CGImageGetHeight();
          if ((IVar7 == 0) || (IVar6 == 0)) goto LAB_010e068c;
          dVar8 = (double)NEON_ucvtf(IVar7);
          dVar9 = (double)NEON_ucvtf(IVar6);
          FUN_010e08bc(IVar6 - 1);
          lVar2 = DAT_028e33c8;
          puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          local_40 = dVar8;
          dStack_38 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,dVar9,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGSize__0269ec00)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,local_70);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
LAB_010e07d8:
        local_5c = 1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        _CGImageSourceCopyPropertiesAtIndex(puVar3,0,0);
        dStack_38 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
        local_40 = *(double *)PTR__CGSizeZero_025782f8;
        local_90 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          _CFDictionaryGetValue(puVar3,*(undefined8 *)PTR__kCGImagePropertyPixelWidth_02578468);
          puVar4 = local_90;
          local_98 = puVar3;
          _CFDictionaryGetValue(local_90,*(undefined8 *)PTR__kCGImagePropertyPixelHeight_02578460);
          local_a8 = 0.0;
          local_b0 = 0.0;
          local_a0 = puVar4;
          if (local_98 != (undefined *)0x0) {
            _CFNumberGetValue(local_98,0xd,&local_a8);
          }
          if (local_a0 != (undefined *)0x0) {
            _CFNumberGetValue(local_a0,0xd,&local_b0);
          }
          dVar8 = local_a8;
          dVar9 = local_b0;
          FUN_010e08bc();
          local_c0 = dVar8;
          dStack_b8 = dVar9;
          local_40 = dVar8;
          dStack_38 = dVar9;
          _CFRelease(local_90);
        }
        _CFRelease(local_88);
        lVar2 = DAT_028e33c8;
        in_d0 = local_40;
        if ((local_40 < 1.0) || (in_d0 = dStack_38, dStack_38 < 1.0)) goto LAB_010e0524;
        puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,dStack_38,PTR__OBJC_CLASS___NSValue_026ce1f0,
                   PTR_s_valueWithCGSize__0269ec00);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,local_70);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_5c = 1;
      }
      _objc_storeStrong(&local_80,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_CGSizeValue_0269ec50);
      local_5c = 1;
      local_40 = in_d0;
      dStack_38 = in_d1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_010e0828:
  _objc_storeStrong(&local_58,0);
  CVar1.field1_0x8 = dStack_38;
  CVar1.field0_0x0 = local_40;
  return CVar1;
}

