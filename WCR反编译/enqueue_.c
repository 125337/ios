// enqueue: @ 01137618

/* Function Stack Size: 0x18 bytes */

bool WCRefineRedEnvelopParamQueue::enqueue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar2 = true;
  if (local_30 != 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sendId_026a69f8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = lVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  IVar1 = local_20;
  if (bVar2) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_paramDict_026af3a8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sendId_026a69f8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_11 = IVar6 == 0;
    if ((bool)local_11) {
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_queue_026af3b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      lVar3 = local_30;
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_paramDict_026af3a8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sendId_026a69f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setObject_forKeyedSubscript__0269d248,lVar3)
      ;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

