// serialQueueIsEmpty @ 01138a7c

/* Function Stack Size: 0x10 bytes */

bool WCRefineRedEnvelopTaskManager::serialQueueIsEmpty(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_serialTaskQueue_026af3d8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)(IVar2 == 0);
}

