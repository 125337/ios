// FUN_01791780 @ 01791780

void FUN_01791780(void)

{
  undefined *puVar1;
  char *local_18;
  
  local_18 = "WCPluginsViewController";
  _objc_getClass();
  if (local_18 == (char *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    _objc_allocateClassPair();
    if (puVar1 != (undefined *)0x0) {
      _objc_registerClassPair(puVar1);
    }
    local_18 = "WCPluginsViewController";
    _objc_getClass();
  }
  FUN_0179466c(local_18);
  _objc_retainAutoreleaseReturnValue(local_18);
  return;
}

