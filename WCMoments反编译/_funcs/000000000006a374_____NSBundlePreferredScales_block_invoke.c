// ____NSBundlePreferredScales_block_invoke @0x6a374

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
                        &PTR__OBJC_CLASS___NSConstantArray_0010fbc0);
    }
    else {
      _objc_storeStrong(&__NSBundlePreferredScales_scales,
                        &PTR__OBJC_CLASS___NSConstantArray_0010fba8);
    }
  }
  else {
    _objc_storeStrong(&__NSBundlePreferredScales_scales,&PTR__OBJC_CLASS___NSConstantArray_0010fb90)
    ;
  }
  return;
}

