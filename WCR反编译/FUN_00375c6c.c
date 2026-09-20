// FUN_00375c6c @ 00375c6c

undefined1 FUN_00375c6c(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_60;
  char *local_58;
  undefined1 local_11;
  
  if ((DAT_028ca2c0 & 1) == 0) {
    pcVar2 = "MenuButton";
    _objc_getClass();
    puVar1 = PTR_s_sendAction_to_forEvent__026a3090;
    if (pcVar2 == (char *)0x0) {
      local_11 = 0;
    }
    else {
      local_58 = pcVar2;
      _class_getInstanceMethod(pcVar2,PTR_s_sendAction_to_forEvent__026a3090);
      if (local_58 == (char *)0x0) {
        local_58 = "v@::@@";
      }
      else {
        _method_getTypeEncoding();
      }
      pcVar3 = pcVar2;
      _class_getSuperclass();
      if (pcVar3 == (char *)0x0) {
        local_60 = (char *)0x0;
      }
      else {
        local_60 = pcVar2;
        _class_getSuperclass();
        _class_getMethodImplementation();
      }
      pcVar3 = pcVar2;
      _class_addMethod(pcVar2,puVar1,FUN_003ce8dc,local_58);
      if (((ulong)pcVar3 & 1) == 0) {
        _class_getInstanceMethod(pcVar2,puVar1);
        if (pcVar2 == (char *)0x0) {
          return 0;
        }
        pcVar3 = pcVar2;
        _method_getImplementation();
        DAT_028ca2c8 = pcVar3;
        _method_setImplementation(pcVar2,FUN_003ce8dc);
      }
      else {
        DAT_028ca2c8 = local_60;
      }
      DAT_028ca2c0 = 1;
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

