// close @0x2a63c

/* Function Stack Size: 0x10 bytes */

int WCMVideoController::close(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  _objc_msgSend_player(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pause(uVar2,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_timer(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar2,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setTimer_(param_1,local_30);
  _objc_msgSend_clearVideoPreparation(param_1,local_30);
  _objc_msgSend_player(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_replaceCurrentItemWithPlayerItem_(uVar2,local_30,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  iVar1 = _objc_msgSend_dismissViewControllerAnimated_completion_(param_1,local_30,1,0);
  return iVar1;
}

