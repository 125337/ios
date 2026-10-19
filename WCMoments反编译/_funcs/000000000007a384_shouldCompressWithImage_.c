// shouldCompressWithImage: @0x7a384

/* Function Stack Size: 0x18 bytes */

bool WCMYBIBImageData::shouldCompressWithImage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 local_50;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = _objc_msgSend_size(local_30,local_50);
    uVar3 = _objc_msgSend_scale(local_30,local_50);
    local_11 = _objc_msgSend_shouldCompressWithImageSize_scale_(uVar2,in_d1,uVar3,IVar1,local_50);
    local_11 = local_11 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

