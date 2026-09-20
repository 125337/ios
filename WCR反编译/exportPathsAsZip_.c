// exportPathsAsZip: @ 019a8810

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::exportPathsAsZip_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  dispatch_queue_t pdVar4;
  undefined8 local_60;
  ID local_58;
  ID local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_beginFileOperationWithText__026ba5f8,&cf_ck_WSbS_);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeOperationToast_026ba600);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  _objc_initWeak(auStack_40,local_18);
  pdVar4 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_40);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_30;
  local_60 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_38;
  local_58 = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar2;
  _dispatch_async(pdVar4);
  (*(code *)PTR__objc_release_02578630)(pdVar4);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

