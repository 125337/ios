// viewDidDisappear: @0x1bb74

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::viewDidDisappear_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  uint local_3c;
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMVideoController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewDidDisappear:",param_3 & 1);
  _objc_msgSend_presentedViewController(local_18,local_50);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(&objc::class_t::WCMVideoComments);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  local_3c = 0;
  if ((uVar3 & 1) != 0) {
    local_3c = _objc_msgSend_isBeingDismissed(local_18,local_50);
    local_3c = local_3c ^ 1;
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_3c & 1) == 0) {
    _objc_msgSend_player(local_18,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_replaceCurrentItemWithPlayerItem_(uVar1,local_50,0);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_audioCategory(local_18,local_50);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar4 != 0) {
      _objc_msgSend_sharedInstance(&_OBJC_CLASS___AVAudioSession,local_50);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_audioCategory(local_18,local_50);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_audioMode(local_18,local_50);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend_audioOptions(local_18,local_50);
      _objc_msgSend_setCategory_mode_options_error_(uVar1,local_50,uVar2,uVar5,uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      _objc_msgSend_setAudioCategory_(local_18,local_50,0);
    }
  }
  return;
}

