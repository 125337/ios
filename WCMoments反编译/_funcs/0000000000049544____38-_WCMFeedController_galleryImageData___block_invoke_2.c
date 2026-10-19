// ___38-[WCMFeedController_galleryImageData:]_block_invoke_2 @0x49544

void ___38__WCMFeedController_galleryImageData___block_invoke_2(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_b8;
  long local_88;
  undefined8 local_78;
  long local_68;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = param_1;
  local_40 = param_1;
  local_50 = _objc_loadWeakRetained(param_1 + 0x38);
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = true;
  if (local_50 != 0) {
    _objc_msgSend_gallery(local_50,local_b8);
    local_58 = _objc_retainAutoreleasedReturnValue();
    bVar4 = true;
    local_68 = _objc_loadWeakRetained(param_1 + 0x40);
    bVar3 = true;
    bVar5 = true;
    if (local_58 == local_68) {
      local_78 = _objc_loadWeakRetained(param_1 + 0x40);
      bVar2 = true;
      _objc_msgSend_superview(local_78,local_b8);
      local_88 = _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar5 = local_88 == 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_88);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_00110458)(local_68);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_00110458)(local_58);
  }
  if (!bVar5) {
    _objc_msgSend_galleryPendingChecks(local_50,local_b8);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeObject_(uVar7,local_b8,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_00110458)(uVar7);
    _objc_msgSend_galleryFileSignature_(local_50,local_b8,*(undefined8 *)(param_1 + 0x28));
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend_isEqual_(uVar7,local_b8,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_00110458)(uVar7);
    if ((uVar6 & 1) != 0) {
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        _objc_msgSend_galleryInvalidFiles(local_50,local_b8);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_addObject_(uVar7,local_b8,*(undefined8 *)(param_1 + 0x20));
        (*(code *)PTR__objc_release_00110458)(uVar7);
        local_38 = &cf_bytes;
        uVar7 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x30),local_b8);
        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_b8,uVar7);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        local_30 = uVar7;
        _objc_msgSend_dictionaryWithObjects_forKeys_count_
                  (&_OBJC_CLASS___NSDictionary,local_b8,&local_30,&local_38,1);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _Trace(&cf_gallery_file_notReady);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar7);
      }
      else {
        _objc_msgSend_galleryValidatedData(local_50,local_b8);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        uVar8 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x30),local_b8);
        _objc_msgSend_setObject_forKey_cost_(uVar7,local_b8,uVar9,uVar10,uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        _objc_msgSend_setGalleryImmediateSignature_
                  (local_50,local_b8,*(undefined8 *)(param_1 + 0x20));
        _objc_msgSend_setGalleryImmediateData_(local_50,local_b8,*(undefined8 *)(param_1 + 0x30));
      }
      _objc_msgSend_pumpGallery(local_50,local_b8);
      _objc_msgSend_setGalleryImmediateData_(local_50,local_b8);
      _objc_msgSend_setGalleryImmediateSignature_(local_50,local_b8,0);
    }
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

