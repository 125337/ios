// FUN_00f55f40 @ 00f55f40

void FUN_00f55f40(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "JSFunctionDef";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _object_getClass();
    pcVar2 = pcVar1;
    _class_getInstanceMethod(pcVar1,PTR_s_isDisallowedFunction__026ac5a0);
    if (pcVar2 == (char *)0x0) {
      _class_addMethod(pcVar1,PTR_s_isDisallowedFunction__026ac5a0,FUN_00f55fcc,"B@:@");
    }
  }
  return;
}

