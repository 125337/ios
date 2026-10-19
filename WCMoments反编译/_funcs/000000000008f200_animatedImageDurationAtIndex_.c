// animatedImageDurationAtIndex: @0x8f200

/* Function Stack Size: 0x18 bytes */

double WCMYYSpriteSheetImage::animatedImageDurationAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_18;
  
  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_frameDurations));
  if (param_3 < uVar1) {
    _objc_msgSend_objectAtIndexedSubscript_
              (*(undefined8 *)(param_1 + (long)_frameDurations),local_48,param_3);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_18 = (double)_objc_msgSend_doubleValue(uVar2,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}

