// exportAllWatermarks @ 01fb229c

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::exportAllWatermarks(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  lVar2 = *(long *)(param_1 + (long)_watermarkPaths);
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4lpS__Nzz);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_W_Q_);
    uVar3 = *(undefined8 *)(local_18 + (long)_watermarkPaths);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
    local_28 = uVar3;
    pdVar4 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01fb2448;
    local_40 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_28;
    local_38 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar3;
    _dispatch_async(pdVar4,&local_58);
    (*(code *)PTR__objc_release_02578630)(pdVar4);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

