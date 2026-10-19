// frameDurationAtIndex: @0x93c1c

/* Function Stack Size: 0x18 bytes */

double WCMYYImageDecoder::frameDurationAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_30;
  
  local_30 = 0.0;
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x68),0xffffffffffffffff);
  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x70),local_40);
  if (param_3 < uVar1) {
    _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(param_1 + 0x70),local_40,param_3);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_30 = (double)_objc_msgSend_duration(uVar2,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x68));
  return local_30;
}

