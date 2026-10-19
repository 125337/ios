// resetVideoSurface @0x20384

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::resetVideoSurface(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction);
  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_28,1);
  _objc_msgSend_playerLayer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_28,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_playerLayer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeFromSuperlayer(uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_playerLayer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setPlayer_(uVar1,local_28,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_player(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_playerLayerWithPlayer_(&_OBJC_CLASS___AVPlayerLayer,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setPlayerLayer_(param_1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_001101b8;
  _objc_msgSend_playerLayer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setVideoGravity_(uVar1,local_28,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_playerLayer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar1,local_28,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_28);
  return;
}

