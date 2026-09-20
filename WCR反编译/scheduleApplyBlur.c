// scheduleApplyBlur @ 00eb5798

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundBlur::scheduleApplyBlur(ID param_1,SEL param_2)

{
  ID IVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  IVar1 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyRequestToken_026ab248);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setApplyRequestToken__026ab250,IVar1 + 1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyRequestToken_026ab248);
  local_28 = IVar1;
  dVar2 = _dispatch_time(0,100000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_30 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar1;
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38,0);
  return;
}

