// startResetTimer @0xb5094

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::startResetTimer(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_resetTimer(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_28,local_18);
    uVar2 = _objc_msgSend_cropAdjustingDelay(local_18,local_88);
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___32__WCMTOCropView_startResetTimer__block_invoke;
    local_48 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;
    _objc_copyWeak(auStack_40,auStack_28);
    uVar2 = _objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_
                      (uVar2,&_OBJC_CLASS___NSTimer,local_88,0,&local_60);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    _objc_msgSend_setResetTimer_(local_18,local_88);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

