// ___38-[WCMFeedController_galleryImageData:]_block_invoke @0x491ac

void ___38__WCMFeedController_galleryImageData___block_invoke(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_e8;
  long local_d8;
  undefined8 local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  byte local_70;
  long local_68;
  byte local_59;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = param_1;
  local_40 = param_1;
  uVar4 = _objc_autoreleasePoolPush();
  _objc_msgSend_dataWithContentsOfFile_options_error_
            (&_OBJC_CLASS___NSData,local_c8,*(undefined8 *)(param_1 + 0x20),0,0);
  local_50 = _objc_retainAutoreleasedReturnValue();
  if (local_50 == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = _CGImageSourceCreateWithData(local_50,0);
  }
  local_58 = local_d8;
  local_59 = false;
  if (local_d8 != 0) {
    iVar3 = _CGImageSourceGetStatus(local_d8);
    local_59 = false;
    if (iVar3 == 0) {
      lVar5 = _CGImageSourceGetCount(local_58);
      local_59 = lVar5 != 0;
    }
  }
  lVar5 = local_58;
  if ((bool)local_59 == false) {
    local_e8 = 0;
  }
  else {
    local_38 = *(undefined8 *)PTR__kCGImageSourceShouldCache_001102d8;
    local_30 = PTR____kCFBooleanFalse_00110728;
    uVar6 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_c8,&local_30,&local_38,1);
    local_e8 = _CGImageSourceCreateImageAtIndex(lVar5,0,uVar6);
  }
  local_68 = local_e8;
  bVar2 = false;
  if ((local_59 & 1) != 0) {
    bVar2 = false;
    if (local_e8 != 0) {
      lVar5 = _CGImageGetWidth(local_e8);
      bVar2 = false;
      if (lVar5 != 0) {
        lVar5 = _CGImageGetHeight(local_68);
        bVar2 = lVar5 != 0;
      }
    }
  }
  local_59 = bVar2;
  if (local_68 != 0) {
    _CGImageRelease(local_68);
  }
  if (local_58 != 0) {
    _CFRelease(local_58);
  }
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar6 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_b8 = PTR___NSConcreteStackBlock_001104f0;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = ___38__WCMFeedController_galleryImageData___block_invoke_2;
  local_a0 = &___block_descriptor_73_e8_32s40s48s56w64w_e5_v8__0l;
  _objc_copyWeak(auStack_80,param_1 + 0x30);
  _objc_copyWeak(auStack_78,param_1 + 0x38);
  local_98 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_90 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_70 = local_59 & 1;
  local_88 = (*(code *)PTR__objc_retain_00110460)(local_50);
  _dispatch_async(uVar6,&local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleasePoolPop(uVar4);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

