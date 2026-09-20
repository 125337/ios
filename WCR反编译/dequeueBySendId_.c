// dequeueBySendId: @ 01137994

/* Function Stack Size: 0x18 bytes */

ID WCRefineRedEnvelopParamQueue::dequeueBySendId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID local_78;
  ID local_70 [3];
  ulong local_58;
  ulong local_50;
  int local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  IVar2 = local_30;
  if (lVar3 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    local_50 = 0x7fffffffffffffff;
    local_58 = 0;
    while( true ) {
      uVar1 = local_58;
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queue_026af3b0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if (IVar5 <= uVar1) break;
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queue_026af3b0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70[0] = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_sendId_026a69f8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((IVar5 & 1) == 0) {
        local_44 = 0;
      }
      else {
        local_50 = local_58;
        local_44 = 2;
      }
      _objc_storeStrong(local_70,0);
      if (local_44 != 0) break;
      local_58 = local_58 + 1;
    }
    if (local_50 == 0x7fffffffffffffff) {
      local_28 = 0;
      local_44 = 1;
    }
    else {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queue_026af3b0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queue_026af3b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar4;
      local_44 = 1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

