// animatedImageDurationAtIndex: @0x9c6f8

/* Function Stack Size: 0x18 bytes */

double WCMYYFrameImage::animatedImageDurationAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_frameDurations));
  if (param_3 < uVar1) {
    _objc_msgSend_objectAtIndexedSubscript_
              (*(undefined8 *)(local_20 + (long)_frameDurations),local_50,local_30);
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_18 = (double)_objc_msgSend_doubleValue(local_38,local_50);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}

