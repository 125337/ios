// preferredStatusBarStyle @0xa28b4

/* WARNING: Removing unreachable block (ram,0x000a291c) */
/* Function Stack Size: 0x10 bytes */

long_long WCMTOCropViewController::preferredStatusBarStyle(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 local_18;
  
  _objc_msgSend_navigationController(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 == 0) {
    local_18 = 3;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}

