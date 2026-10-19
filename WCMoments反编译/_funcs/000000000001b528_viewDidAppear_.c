// viewDidAppear: @0x1b528

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCMVideoController::viewDidAppear_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d3;
  undefined8 local_d0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  ID local_48;
  class_t *local_40;
  undefined1 local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (undefined1)param_3;
  local_40 = &objc::class_t::WCMVideoController;
  local_48 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_48,"viewDidAppear:",param_3 & 1);
  _objc_msgSend_timer(local_28,local_d0);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    _objc_msgSend_sharedInstance(&_OBJC_CLASS___AVAudioSession,local_d0);
    local_50 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_category(local_50,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAudioCategory_(local_28,local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_mode(local_50,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAudioMode_(local_28,local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_msgSend_categoryOptions(local_50,local_d0);
    _objc_msgSend_setAudioOptions_(local_28,local_d0,uVar2);
    _objc_msgSend_setCategory_mode_options_error_
              (local_50,local_d0,*(undefined8 *)PTR__AVAudioSessionCategoryPlayback_00110698,
               *(undefined8 *)PTR__AVAudioSessionModeMoviePlayback_001106a0,0);
    _objc_msgSend_setActive_error_(local_50,local_d0,1,0);
    _objc_msgSend_collection(local_28,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layoutIfNeeded(uVar2,local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_collection(local_28,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar1 = _objc_msgSend_index(local_28,local_d0);
    _objc_msgSend_collection(local_28,local_d0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_80 = _objc_msgSend_bounds(uVar3,local_d0);
    in_d3 = (double)lVar1 * in_d3;
    local_60 = _CGPointMake(0);
    local_58 = in_d3;
    _objc_msgSend_setContentOffset_animated_(local_60,in_d3,uVar2,local_d0,0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_activateVideo(local_28,local_d0);
    _objc_initWeak(auStack_88,local_28);
    local_b0 = PTR___NSConcreteStackBlock_001104f0;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = ___36__WCMVideoController_viewDidAppear___block_invoke;
    local_98 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = _objc_msgSend_timerWithTimeInterval_repeats_block_
                      (0x3fd0000000000000,&_OBJC_CLASS___NSTimer,local_d0,1,&local_b0);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    _objc_msgSend_setTimer_(local_28,local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_msgSend_mainRunLoop(&_OBJC_CLASS___NSRunLoop,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar3 = _objc_msgSend_timer(local_28,local_d0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    _objc_msgSend_addTimer_forMode_
              (uVar2,local_d0,uVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_001106f0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_50,0);
  }
  else {
    _objc_msgSend_updateVideoCounts(local_28,local_d0);
  }
  return;
}

