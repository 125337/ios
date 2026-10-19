// ___26-[WCMCacheController_done]_block_invoke @0x2d42c

void ___26__WCMCacheController_done__block_invoke(long param_1)

{
  long lVar1;
  undefined8 local_40;
  
  _objc_msgSend_onClose(*(undefined8 *)(param_1 + 0x20));
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_onClose(*(undefined8 *)(param_1 + 0x20),local_40);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  return;
}

