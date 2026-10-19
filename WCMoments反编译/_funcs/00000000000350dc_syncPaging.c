// syncPaging @0x350dc

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::syncPaging(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  
  uVar1 = _objc_msgSend_ready(param_1);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_facade(param_1,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar2,&cf_getUnReadMessageCount,PTR____NSArray0__struct_00110718);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_unsignedIntegerValue(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_web(param_1,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_loadingTail(param_1,local_40);
    _objc_msgSend_exhausted(param_1,local_40);
    _objc_msgSend_tailRetryRequired(param_1,local_40);
    uVar1 = _objc_msgSend_refreshingHead(param_1,local_40);
    if ((uVar1 & 1) == 0) {
      _objc_msgSend_initialHeadPending(param_1,local_40);
    }
    _objc_msgSend_stringWithFormat_
              (&_OBJC_CLASS___NSString,local_40,&cf_setMessageCount__lu__setPaging_____________);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_evaluateJavaScript_completionHandler_
              (uVar2,local_40,uVar3,&___block_literal_global_1749);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}

