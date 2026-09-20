// FUN_01bc92e8 @ 01bc92e8

byte FUN_01bc92e8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_20);
    _CGImageSourceCreateWithURL();
    local_11 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      _CGImageSourceGetCount();
      _CFRelease(puVar2);
      local_11 = puVar3 != (undefined *)0x0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

