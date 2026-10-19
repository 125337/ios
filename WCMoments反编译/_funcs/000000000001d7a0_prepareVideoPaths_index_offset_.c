// prepareVideoPaths:index:offset: @0x1d7a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCMVideoController::prepareVideoPaths_index_offset_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,unsigned_long_long param_5)

{
  long lVar1;
  long_long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **local_2b0;
  undefined8 local_150;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  long_long local_d0;
  unsigned_long_long local_c8;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  unsigned_long_long local_80;
  long_long local_78;
  undefined8 local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined **local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_80 = param_5;
  local_78 = param_4;
  uVar4 = _objc_msgSend_count(local_70,local_150);
  lVar2 = local_78;
  if (param_5 < uVar4) {
    lVar5 = _objc_msgSend_index(local_60,local_150);
    lVar5 = lVar2 - lVar5;
    lVar1 = -lVar5;
    if (0 < lVar5) {
      lVar1 = lVar5;
    }
    if (lVar1 < 3) {
      uVar6 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_150,local_78);
      local_90 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_150);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = _objc_msgSend_URLAssetWithURL_options_(&_OBJC_CLASS___AVURLAsset,local_150,uVar7,0);
      local_98 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      uVar6 = local_98;
      uVar7 = _objc_msgSend_preparingAssets(local_60,local_150);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      _objc_msgSend_setObject_forKeyedSubscript_(uVar7,local_150,uVar6,local_90);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      uVar6 = _objc_msgSend_videos(local_60,local_150);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_150,local_78);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = _objc_msgSend_objectForKeyedSubscript_(uVar7,local_150,&cf_media);
      local_a0 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      local_a8 = 0;
      local_b0 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f968);
      for (local_b8 = 0; uVar4 = local_b8, uVar9 = _objc_msgSend_count(local_b0,local_150),
          uVar6 = local_a0, uVar4 < uVar9; local_b8 = local_b8 + 1) {
        uVar7 = _objc_msgSend_objectAtIndexedSubscript_(local_b0,local_150,local_b8);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar6 = _Call(uVar6,uVar7,PTR____NSArray0__struct_00110718);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar8 = _Text();
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar10 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar3 = _objc_msgSend_isEqual_(uVar8,local_150);
        (*(code *)PTR__objc_release_00110458)(uVar10);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar6);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        if ((uVar3 & 1) != 0) {
          local_a8 = local_b8 + 1;
          break;
        }
      }
      uVar6 = local_a0;
      local_58 = &cf_candidate;
      uVar7 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_150,local_80);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      local_50 = &cf_pathType;
      local_40 = uVar7;
      uVar8 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_150,local_a8);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_48 = &cf_bytes;
      local_38 = uVar8;
      uVar10 = _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_150);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = _objc_msgSend_objectAtIndexedSubscript_(local_70,local_150,local_80);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = _objc_msgSend_attributesOfItemAtPath_error_(uVar10,local_150,uVar11,0);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = _objc_msgSend_objectForKeyedSubscript_
                         (uVar12,local_150,*(undefined8 *)PTR__NSFileSize_00110178);
      ppuVar14 = (undefined **)_objc_retainAutoreleasedReturnValue(uVar13);
      local_2b0 = ppuVar14;
      if (ppuVar14 == (undefined **)0x0) {
        local_2b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
      }
      local_30 = local_2b0;
      uVar13 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                         (&_OBJC_CLASS___NSDictionary,local_150,&local_40,&local_58,3);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      _TraceVideo(&cf_video_asset_probe,uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar13);
      (*(code *)PTR__objc_release_00110458)(ppuVar14);
      (*(code *)PTR__objc_release_00110458)(uVar12);
      (*(code *)PTR__objc_release_00110458)(uVar11);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      (*(code *)PTR__objc_release_00110458)(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_initWeak(auStack_c0,local_60);
      uVar6 = local_98;
      local_110 = PTR___NSConcreteStackBlock_001104f0;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = ___53__WCMVideoController_prepareVideoPaths_index_offset___block_invoke;
      local_f8 = &___block_descriptor_80_e8_32s40s48s56w_e5_v8__0l;
      _objc_copyWeak(auStack_d8,auStack_c0);
      local_f0 = (*(code *)PTR__objc_retain_00110460)(local_90);
      local_e8 = (*(code *)PTR__objc_retain_00110460)(local_98);
      local_d0 = local_78;
      local_c8 = local_80;
      local_e0 = (*(code *)PTR__objc_retain_00110460)(local_70);
      _objc_msgSend_loadValuesAsynchronouslyForKeys_completionHandler_
                (uVar6,local_150,&PTR__OBJC_CLASS___NSConstantArray_0010f980,&local_110);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_c0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      local_84 = 0;
      goto LAB_0001e038;
    }
  }
  local_84 = 1;
LAB_0001e038:
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

