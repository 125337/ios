// updateGalleryDataBeforeShow @0x4e134

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::updateGalleryDataBeforeShow(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_1b8;
  ulong local_188;
  ulong local_180;
  undefined8 local_178;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  byte local_129;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_2;
  local_b0 = param_1;
  local_c0 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  _memset(auStack_108,0,0x40);
  _objc_msgSend_galleryMedia(local_b0,local_178);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_180 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_178,auStack_108,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar6 = *local_f8;
    local_188 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,uVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_188 * 8);
        local_110 = _objc_opt_new(&objc::class_t::WCMYBIBImageData);
        _objc_msgSend_setAllowSaveToPhotoAlbum_(local_110,local_178,0);
        _Call(local_c8,&cf_imageOfSize_,&PTR__OBJC_CLASS___NSConstantArray_0010fae8);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        local_118 = uVar3;
        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIImage);
        uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);
        local_129 = 0;
        bVar1 = (uVar5 & 1) == 0;
        if (bVar1) {
          _objc_msgSend_galleryPlaceholder(local_b0,local_178);
          local_1b8 = _objc_retainAutoreleasedReturnValue();
          local_128 = local_1b8;
        }
        else {
          local_1b8 = local_118;
        }
        local_129 = bVar1;
        local_120 = (*(code *)PTR__objc_retain_00110460)(local_1b8);
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_128);
        }
        local_158 = PTR___NSConcreteStackBlock_001104f0;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = ___48__WCMFeedController_updateGalleryDataBeforeShow__block_invoke;
        local_140 = &___block_descriptor_40_e8_32s_e14___UIImage_8__0l;
        local_138 = (*(code *)PTR__objc_retain_00110460)(local_120);
        _objc_msgSend_setImage_(local_110,local_178,&local_158);
        _objc_msgSend_addObject_(local_c0,local_178,local_110);
        _objc_storeStrong(&local_138);
        _objc_storeStrong(&local_120,0);
        _objc_storeStrong(&local_118,0);
        _objc_storeStrong(&local_110,0);
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_178,auStack_108,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = local_c0;
  _objc_msgSend_gallery(local_b0,local_178);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDataSourceArray_(uVar3,local_178,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

