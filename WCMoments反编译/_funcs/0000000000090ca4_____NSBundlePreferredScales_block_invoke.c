// ____NSBundlePreferredScales_block_invoke @0x90ca4

void ____NSBundlePreferredScales_block_invoke(void)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_40;
  
  _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)_objc_msgSend_scale(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (1.0 < dVar2) {
    if (2.0 < dVar2) {
      _objc_storeStrong(&__NSBundlePreferredScales_scales,
                        &PTR__OBJC_CLASS___NSConstantArray_0010fc80);
    }
    else {
      _objc_storeStrong(&__NSBundlePreferredScales_scales,
                        &PTR__OBJC_CLASS___NSConstantArray_0010fc68);
    }
  }
  else {
    _objc_storeStrong(&__NSBundlePreferredScales_scales,&PTR__OBJC_CLASS___NSConstantArray_0010fc50)
    ;
  }
  return;
}

