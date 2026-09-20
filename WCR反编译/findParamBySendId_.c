// findParamBySendId: @ 01137d50

/* Function Stack Size: 0x18 bytes */

ID WCRefineRedEnvelopParamQueue::findParamBySendId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     IVar1 = local_20, lVar2 == 0)) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_paramDict_026af3a8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

