// toggleMute @0x299a0

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::toggleMute(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  uVar2 = _objc_msgSend_muted(param_1);
  _objc_msgSend_setMuted_(param_1,local_38,uVar2 ^ 1);
  uVar3 = _objc_msgSend_muted(param_1,local_38);
  _objc_msgSend_player(param_1,local_38);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMuted_(uVar4,local_38,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_muteButton(param_1,local_38);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend_muted(param_1,local_38);
  pcVar1 = &cf_speaker_slash_fill;
  if ((uVar5 & 1) == 0) {
    pcVar1 = &cf_speaker_wave_2_fill;
  }
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_38,pcVar1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar4,local_38,uVar6,0);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  uVar5 = _objc_msgSend_muted(param_1,local_38);
  pcVar1 = &cf___;
  if ((uVar5 & 1) == 0) {
    pcVar1 = &cf_Y;
  }
  _objc_msgSend_muteButton(param_1,local_38);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAccessibilityLabel_(uVar4,local_38,pcVar1);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  return;
}

