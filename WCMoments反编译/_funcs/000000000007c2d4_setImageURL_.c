// setImageURL: @0x7c2d4

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::setImageURL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_48 = local_28;
  }
  else {
    _objc_msgSend_URLWithString_(&_OBJC_CLASS___NSURL,local_50,local_28);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  _objc_storeStrong(local_18 + 0x80,local_48);
  if (!bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

