// frameAtIndex:decodeForDisplay: @0x93b68

/* Function Stack Size: 0x1c bytes */

ID WCMYYImageDecoder::frameAtIndex_decodeForDisplay_
             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_58;
  undefined8 local_38;
  byte local_29;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_29 = (byte)param_4;
  local_38 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  _objc_msgSend__frameAtIndex_decodeForDisplay_(local_18,local_58,local_28,local_29 & 1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_38 = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _objc_storeStrong(&local_38,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

