// finishRefreshWithSuccess: @0x3446c

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::finishRefreshWithSuccess_(ID param_1,SEL param_2,bool param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  bVar1 = _objc_msgSend_refreshingHead(param_1);
  _objc_msgSend_setRefreshingHead_(param_1,local_38,0);
  lVar3 = _objc_msgSend_refreshGeneration(param_1,local_38);
  _objc_msgSend_setRefreshGeneration_(param_1,local_38,lVar3 + 1);
  if ((bVar1 & 1) == 0) {
    _objc_msgSend_refreshControl(param_1,local_38);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend_qqShowingFeedback(uVar4,local_38);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend_refreshControl(param_1,local_38);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_cancelFeedback(uVar4,local_38);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
  }
  else {
    _objc_msgSend_refreshControl(param_1,local_38);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_finishWithSuccess_(uVar4,local_38,param_3 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  return;
}

