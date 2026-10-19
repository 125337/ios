// mediaFinished: @0x3251c

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::mediaFinished_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  _objc_msgSend_object(local_40,local_58);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_facade(local_30,local_58);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if (lVar1 == lVar2) {
    _objc_msgSend_updateGallery(0,local_30,local_58);
    local_28 = &cf_pending;
    _objc_msgSend_pendingExports(local_30,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_count(uVar3,local_58);
    _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_58,uVar4);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_20 = uVar4;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_58,&local_20,&local_28,1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _Trace(&cf_media_callback);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_mediaProbeTimes(local_30,local_58);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeAllObjects(uVar3,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_scheduleMediaReload(local_30,local_58);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

