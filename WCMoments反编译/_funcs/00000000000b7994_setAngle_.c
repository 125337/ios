// setAngle: @0xb7994

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::setAngle_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_48;
  long_long local_30;
  
  local_30 = param_3;
  if ((long)param_3 % 0x5a != 0) {
    local_30 = 0;
  }
  lVar1 = (long)local_30 % 0x168;
  uVar2 = _objc_msgSend_initialSetupPerformed(param_1,local_48);
  if ((uVar2 & 1) == 0) {
    _objc_msgSend_setRestoreAngle_(param_1,local_48,lVar1);
  }
  else {
    uVar2 = (ulong)(-1 < lVar1);
    do {
      lVar3 = _objc_msgSend_angle(uVar2,param_1,local_48);
      if (lVar3 - lVar1 == 0) {
        return;
      }
      lVar3 = _objc_msgSend_angle(lVar3 - lVar1,param_1,local_48);
      _objc_msgSend_rotateImageNinetyDegreesAnimated_clockwise_completion_
                (param_1,local_48,0,-1 < lVar1,0);
      lVar4 = _objc_msgSend_angle(param_1,local_48);
      uVar2 = lVar4 - lVar3;
    } while (uVar2 != 0);
  }
  return;
}

