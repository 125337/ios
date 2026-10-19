// init @0x4000

/* Function Stack Size: 0x10 bytes */

ID WCMAssetHandler::init(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_50;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMAssetHandler;
  local_30 = param_1;
  local_20 = param_2;
  lVar1 = _objc_msgSendSuper2(&local_30,"init");
  local_18 = lVar1;
  _objc_storeStrong(&local_18);
  if (lVar1 != 0) {
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSOperationQueue);
    _objc_msgSend_setDecodeQueue_(local_18,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_decodeQueue(local_18,local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMaxConcurrentOperationCount_(uVar2,local_50,2);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_decodeQueue(local_18,local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setQualityOfService_(uVar2,local_50,0x19);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCache);
    _objc_msgSend_setDisplayCache_(local_18,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_displayCache(local_18,local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTotalCostLimit_(uVar2,local_50,0x1000000);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_hashTableWithOptions_(&_OBJC_CLASS___NSHashTable,local_50,0x200);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setActiveTasks_(local_18,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar3;
}

