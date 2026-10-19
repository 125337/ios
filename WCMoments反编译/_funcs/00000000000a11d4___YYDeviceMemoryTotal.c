// __YYDeviceMemoryTotal @0xa11d4

long __YYDeviceMemoryTotal(void)

{
  undefined8 uVar1;
  undefined8 local_30;
  long local_18;
  
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_18 = _objc_msgSend_physicalMemory(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_18 < -1) {
    local_18 = -1;
  }
  return local_18;
}

