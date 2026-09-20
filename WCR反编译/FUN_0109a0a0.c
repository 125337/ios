// FUN_0109a0a0 @ 0109a0a0

byte FUN_0109a0a0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 < 3) {
    local_11 = false;
  }
  else {
    uVar2 = local_20;
    _CGImageSourceCreateWithData(uVar1 - 3,local_20,0);
    local_11 = false;
    if (uVar2 != 0) {
      uVar1 = uVar2;
      _CGImageSourceGetCount();
      _CFRelease(uVar2);
      local_11 = uVar1 != 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

