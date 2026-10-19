// imageProperties @0x93d78

/* Function Stack Size: 0x10 bytes */

ID WCMYYImageDecoder::imageProperties(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  _objc_msgSend__imageProperties(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_28 = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_28,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

