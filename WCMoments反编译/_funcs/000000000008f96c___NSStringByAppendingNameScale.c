// __NSStringByAppendingNameScale @0x8f96c

void __NSStringByAppendingNameScale(double param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else if (((ABS(param_1 - 1.0) <= 1.1920928955078125e-07) ||
           (lVar1 = _objc_msgSend_length(local_20,local_40), lVar1 == 0)) ||
          (uVar2 = _objc_msgSend_hasSuffix_(local_20,local_40,&cf__), lVar1 = local_20,
          (uVar2 & 1) != 0)) {
    local_18 = _objc_msgSend_copy(local_20,local_40);
  }
  else {
    _objc_msgSend_numberWithDouble_(param_1,&_OBJC_CLASS___NSNumber,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringByAppendingFormat_(lVar1,local_40,&cf____x);
    local_18 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

