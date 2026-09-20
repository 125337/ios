// currentResults @ 00fe4e00

/* Function Stack Size: 0x10 bytes */

ID WCRefineIconNameCaptureSupport::currentResults(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_30;
  
  IVar1 = DAT_028e3058;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_copy_0269d150);
  local_30 = IVar1;
  if (IVar1 == 0) {
    local_30 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return local_30;
}

