// _updateData:final: @0x93e18

/* Function Stack Size: 0x1c bytes */

bool WCMYYImageDecoder::_updateData_final_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((*(byte *)(local_20 + 0x90) & 1) == 0) {
    uVar1 = _objc_msgSend_length(local_30,local_58);
    uVar2 = _objc_msgSend_length(*(undefined8 *)(local_20 + 0x98),local_58);
    if (uVar1 < uVar2) {
      local_11 = 0;
    }
    else {
      *(byte *)(local_20 + 0x90) = (byte)param_4 & 1;
      _objc_storeStrong(local_20 + 0x98,local_30);
      lVar3 = _WCMYYImageDetectType(local_30);
      if ((*(byte *)(local_20 + 0x48) & 1) == 0) {
        uVar1 = _objc_msgSend_length(*(undefined8 *)(local_20 + 0x98),local_58);
        if (0x10 < uVar1) {
          *(long *)(local_20 + 0xa0) = lVar3;
          *(undefined1 *)(local_20 + 0x48) = 1;
          _objc_msgSend__updateSource(local_20,local_58);
        }
      }
      else {
        if (*(long *)(local_20 + 0xa0) != lVar3) {
          local_11 = 0;
          goto LAB_00093fb0;
        }
        _objc_msgSend__updateSource(0,local_20,local_58);
      }
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
LAB_00093fb0:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

