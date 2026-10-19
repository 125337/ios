// endSeeking @0x29bb8

/* WARNING: Removing unreachable block (ram,0x00029d24) */
/* WARNING: Removing unreachable block (ram,0x00029d38) */
/* WARNING: Removing unreachable block (ram,0x00029d3c) */
/* WARNING: Removing unreachable block (ram,0x00029d44) */
/* WARNING: Removing unreachable block (ram,0x00029d58) */
/* WARNING: Removing unreachable block (ram,0x00029d5c) */
/* WARNING: Removing unreachable block (ram,0x00029d68) */
/* WARNING: Removing unreachable block (ram,0x00029d70) */
/* WARNING: Removing unreachable block (ram,0x00029c70) */
/* WARNING: Removing unreachable block (ram,0x00029c8c) */
/* WARNING: Removing unreachable block (ram,0x00029c90) */
/* WARNING: Removing unreachable block (ram,0x00029c98) */
/* WARNING: Removing unreachable block (ram,0x00029cac) */
/* WARNING: Removing unreachable block (ram,0x00029cb0) */
/* WARNING: Removing unreachable block (ram,0x00029cbc) */
/* WARNING: Removing unreachable block (ram,0x00029cc4) */
/* Function Stack Size: 0x10 bytes */

void WCMVideoController::endSeeking(ID param_1,SEL param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [36];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  long local_50;
  SEL local_48;
  ID local_40;
  double local_30;
  
  local_48 = param_2;
  local_40 = param_1;
  _objc_msgSend_player(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_currentItem(uVar2,local_128);
  local_50 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (local_50 == 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
  }
  else {
    _objc_msgSend_duration(&local_70,local_50,local_128);
  }
  local_58 = (double)_CMTimeGetSeconds(&local_70);
  _objc_msgSend_setSeeking_(local_40,local_128,0);
  local_30 = local_58;
  if ((ABS(local_58) != INFINITY) && (0.0 < local_58)) {
    _objc_initWeak(auStack_78,local_40);
    uVar2 = _objc_msgSend_player(local_40,local_128);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    dVar1 = local_58;
    uVar3 = _objc_msgSend_progress(local_40,local_128);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    fVar4 = (float)_objc_msgSend_value(uVar3,local_128);
    _CMTimeMakeWithSeconds(auStack_9c,dVar1 * (double)fVar4,600);
    local_d0 = PTR___NSConcreteStackBlock_001104f0;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = ___32__WCMVideoController_endSeeking__block_invoke;
    local_b8 = &___block_descriptor_48_e8_32s40w_e8_v12__0B8l;
    _objc_copyWeak(auStack_a8,auStack_78);
    local_b0 = (*(code *)PTR__objc_retain_00110460)(local_50);
    uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 8);
    local_f0 = *(undefined8 *)PTR__kCMTimeZero_001108f8;
    local_e0 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 0x10);
    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 8);
    local_110 = *(undefined8 *)PTR__kCMTimeZero_001108f8;
    local_100 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 0x10);
    _objc_msgSend_seekToTime_toleranceBefore_toleranceAfter_completionHandler_
              (uVar2,local_128,auStack_9c,&local_f0,&local_110,&local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_b0,0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
  }
  _objc_storeStrong(&local_50,0);
  return;
}

