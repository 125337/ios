// ___WCMYBIBLowMemory_block_invoke @0x8394c

void ___WCMYBIBLowMemory_block_invoke(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_48;
  
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_physicalMemory(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _WCMYBIBLowMemory_lowMemory = uVar2 != 0 && uVar2 < 0x5dc00000;
  return;
}

