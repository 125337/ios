// viewDidAppear: @0x11cac

/* Function Stack Size: 0x14 bytes */

void WCMVideoComments::viewDidAppear_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMVideoComments;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewDidAppear:",param_3 & 1);
  _objc_initWeak(auStack_40,local_18);
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = ___34__WCMVideoComments_viewDidAppear___block_invoke;
  local_50 = &___block_descriptor_40_e8_32w_e17_v16__0__NSTimer_8l;
  _objc_copyWeak(auStack_48,auStack_40);
  uVar1 = _objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_
                    (0x3ff0000000000000,&_OBJC_CLASS___NSTimer,local_98,1,&local_68);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  _objc_msgSend_setTimer_(local_18,local_98);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}

