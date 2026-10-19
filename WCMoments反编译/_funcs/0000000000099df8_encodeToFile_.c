// encodeToFile: @0x99df8

/* Function Stack Size: 0x18 bytes */

bool WCMYYImageEncoder::encodeToFile_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = _objc_msgSend_count(*(undefined8 *)(local_20 + 8),local_48);
  if ((lVar1 == 0) || (lVar1 = _objc_msgSend_length(local_30,local_48), lVar1 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = _objc_msgSend__imageIOAvaliable(local_20,local_48);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend_encode(local_20,local_48);
      local_40 = _objc_retainAutoreleasedReturnValue();
      if (local_40 == 0) {
        local_11 = 0;
      }
      else {
        local_11 = _objc_msgSend_writeToFile_atomically_(local_40,local_48,local_30,1);
        local_11 = local_11 & 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = _objc_msgSend__encodeWithImageIO_(local_20,local_48,local_30);
      local_11 = local_11 & 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

