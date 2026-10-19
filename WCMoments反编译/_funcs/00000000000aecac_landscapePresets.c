// landscapePresets @0xaecac

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewControllerAspectRatioPreset::landscapePresets(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_178;
  undefined8 local_88;
  undefined8 local_80;
  SEL local_78;
  ID local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_78 = param_2;
  local_70 = param_1;
  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  puVar1 = PTR__CGSizeZero_001108e0;
  local_80 = _objc_msgSend_initWithSize_title_
                       (*(undefined8 *)PTR__CGSizeZero_001108e0,
                        *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8),uVar2,local_178);
  _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_80);
  local_88 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  _objc_msgSend_localizedStringForKey_value_table_(local_88,local_178,&cf_Original);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_initWithSize_title_
                    (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),uVar2,local_178);
  local_68 = uVar2;
  uVar4 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar8 = 0x3ff0000000000000;
  uVar7 = _CGSizeMake(0x3ff0000000000000);
  _objc_msgSend_localizedStringForKey_value_table_
            (local_88,local_178,&cf_Square,&cf___,&cf_WCMTOCropViewControllerLocalizable);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend_initWithSize_title_(uVar7,uVar8,uVar4,local_178);
  local_60 = uVar4;
  uVar7 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar9 = 0x4000000000000000;
  uVar8 = _CGSizeMake();
  uVar7 = _objc_msgSend_initWithSize_title_(uVar8,uVar9,uVar7,local_178,&cf_3_2);
  local_58 = uVar7;
  uVar8 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar10 = 0x4008000000000000;
  uVar9 = _CGSizeMake();
  uVar8 = _objc_msgSend_initWithSize_title_(uVar9,uVar10,uVar8,local_178,&cf_5_3);
  local_50 = uVar8;
  uVar9 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar11 = 0x4008000000000000;
  uVar10 = _CGSizeMake();
  uVar9 = _objc_msgSend_initWithSize_title_(uVar10,uVar11,uVar9,local_178,&cf_4_3);
  local_48 = uVar9;
  uVar10 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar12 = 0x4010000000000000;
  uVar11 = _CGSizeMake(0x4014000000000000);
  uVar10 = _objc_msgSend_initWithSize_title_(uVar11,uVar12,uVar10,local_178,&cf_5_4);
  local_40 = uVar10;
  uVar11 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar13 = 0x4014000000000000;
  uVar12 = _CGSizeMake(0x401c000000000000);
  uVar11 = _objc_msgSend_initWithSize_title_(uVar12,uVar13,uVar11,local_178,&cf_7_5);
  local_38 = uVar11;
  uVar12 = _objc_alloc(&objc::class_t::WCMTOCropViewControllerAspectRatioPreset);
  uVar14 = 0x4022000000000000;
  uVar13 = _CGSizeMake(0x4030000000000000);
  uVar12 = _objc_msgSend_initWithSize_title_(uVar13,uVar14,uVar12,local_178,&cf_16_9);
  local_30 = uVar12;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_178,&local_68,8);
  uVar13 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar12);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar6 = _objc_autoreleaseReturnValue(0,uVar13);
  return IVar6;
}

