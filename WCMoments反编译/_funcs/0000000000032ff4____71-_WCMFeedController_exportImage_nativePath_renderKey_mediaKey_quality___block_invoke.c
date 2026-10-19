// ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke @0x32ff4

void ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke
               (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 local_170;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  bool local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  long local_98;
  bool local_89;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_78 = param_1;
  local_70 = param_1;
  uVar5 = _objc_autoreleasePoolPush();
  lVar6 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x20),local_138);
  local_89 = false;
  if (lVar6 == 0) {
    local_140 = 0;
  }
  else {
    _objc_msgSend_dataWithContentsOfFile_options_error_
              (&_OBJC_CLASS___NSData,local_138,*(undefined8 *)(param_1 + 0x20),1,0);
    local_140 = _objc_retainAutoreleasedReturnValue();
    local_88 = local_140;
  }
  local_89 = lVar6 != 0;
  local_80 = (*(code *)PTR__objc_retain_00110460)(local_140);
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_88);
  }
  local_98 = 0;
  uVar7 = _objc_msgSend_length(local_80,local_138);
  uVar9 = local_80;
  if (0xb < uVar7 && uVar7 - 0xc != 0) {
    _objc_retainAutorelease(uVar7 - 0xc);
    local_a0 = (char *)_objc_msgSend_bytes(uVar9,local_138);
    if ((*local_a0 == -1) && (local_a0[1] == -0x28)) {
      _objc_storeStrong(0,&local_98,&cf_jpg);
    }
    else if ((*local_a0 == -0x77) &&
            (((local_a0[1] == 'P' && (local_a0[2] == 'N')) && (local_a0[3] == 'G')))) {
      _objc_storeStrong(0,&local_98,&cf_png);
    }
    else {
      iVar4 = _memcmp(local_a0 + 4,"ftyp",4);
      if ((iVar4 == 0) &&
         (((iVar4 = _memcmp(local_a0 + 8,"heic",4), iVar4 == 0 ||
           (iVar4 = _memcmp(local_a0 + 8,"heix",4), iVar4 == 0)) ||
          ((iVar4 = _memcmp(local_a0 + 8,"mif1",4), iVar4 == 0 ||
           (iVar4 = _memcmp(local_a0 + 8,"msf1",4), iVar4 == 0)))))) {
        _objc_storeStrong(&local_98,&cf_heic);
      }
    }
  }
  if (local_98 == 0) {
    _UIImageJPEGRepresentation(0x3fef5c28f5c28f5c,*(undefined8 *)(param_1 + 0x28));
    uVar8 = _objc_retainAutoreleasedReturnValue();
    uVar9 = local_80;
    local_80 = uVar8;
    (*(code *)PTR__objc_release_00110458)(uVar9);
    _objc_storeStrong(&local_98,&cf_jpg);
  }
  _Digest(*(undefined8 *)(param_1 + 0x30));
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByAppendingPathExtension_(uVar9,local_138,local_98);
  local_a8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar9);
  _objc_msgSend_stringByAppendingPathComponent_(*(undefined8 *)(param_1 + 0x38),local_138,local_a8);
  local_b0 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_138);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  uVar7 = _objc_msgSend_fileExistsAtPath_(uVar9,local_138,local_b0);
  bVar3 = 1;
  if ((uVar7 & 1) == 0) {
    bVar3 = _objc_msgSend_writeToFile_options_error_(local_80,local_138,local_b0,0x40000001,0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar9);
  local_b1 = bVar3 & 1;
  local_c9 = false;
  bVar1 = (bVar3 & 1) == 0;
  if (bVar1) {
    local_170 = 0;
  }
  else {
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_138,&cf_wcm_cache________);
    local_170 = _objc_retainAutoreleasedReturnValue();
    local_c8 = local_170;
  }
  local_c9 = !bVar1;
  local_c0 = (*(code *)PTR__objc_retain_00110460)(local_170);
  if ((local_c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_c8);
  }
  local_68 = &cf_quality;
  _objc_msgSend_numberWithInteger_
            (&_OBJC_CLASS___NSNumber,local_138,*(undefined8 *)(param_1 + 0x58));
  uVar9 = _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_saved;
  local_48 = uVar9;
  _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_138,local_b1 & 1);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_bytes;
  local_40 = uVar8;
  uVar10 = _objc_msgSend_length(local_80,local_138);
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_138,uVar10);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_ms;
  local_38 = uVar10;
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_138);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  dVar14 = (double)_objc_msgSend_systemUptime(uVar11,local_138);
  _objc_msgSend_numberWithDouble_
            ((dVar14 - *(double *)(param_1 + 0x60)) * 1000.0,&_OBJC_CLASS___NSNumber,local_138);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  local_30 = uVar12;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_138,&local_48,&local_68,4);
  uVar13 = _objc_retainAutoreleasedReturnValue();
  _Trace(&cf_image_export_finish);
  (*(code *)PTR__objc_release_00110458)(uVar13);
  (*(code *)PTR__objc_release_00110458)(uVar12);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  puVar2 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar9 = _objc_retainAutoreleasedReturnValue(puVar2);
  local_120 = PTR___NSConcreteStackBlock_001104f0;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = 
  ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke_2;
  local_108 = &___block_descriptor_80_e8_32s40s48s56w_e5_v8__0l;
  local_e0 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_e8,param_1 + 0x50);
  local_100 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
  local_f8 = (*(code *)PTR__objc_retain_00110460)(local_c0);
  local_d8 = *(undefined8 *)(param_1 + 0x58);
  local_f0 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x48));
  _dispatch_async(uVar9,&local_120);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_100,0);
  _objc_destroyWeak(auStack_e8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleasePoolPop(uVar5);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

