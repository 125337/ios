// rotateButtonsHidden @0xaac24

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::rotateButtonsHidden(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined1 local_38;
  undefined8 local_30;
  
  _objc_msgSend_toolbar(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_rotateCounterclockwiseButtonHidden(uVar2,local_48);
  local_38 = 0;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    _objc_msgSend_toolbar(param_1,local_48);
    local_30 = _objc_retainAutoreleasedReturnValue();
    local_38 = _objc_msgSend_rotateClockwiseButtonHidden(local_30,local_48);
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return (uint)(local_38 & 1);
}

