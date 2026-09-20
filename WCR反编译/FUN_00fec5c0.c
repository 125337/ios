// FUN_00fec5c0 @ 00fec5c0

void FUN_00fec5c0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  if ((DAT_028e3110 & 1) == 0) {
    DAT_028e3110 = 1;
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_class_0269cd60);
    puVar3 = PTR_s_sendEvent__026a67f8;
    pcVar2 = (code *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,"MSHookMessageEx");
    if (pcVar2 == (code *)0x0) {
      _class_getInstanceMethod(puVar1,puVar3);
      if (puVar1 != (undefined *)0x0) {
        puVar3 = puVar1;
        _method_getImplementation();
        DAT_028e3118 = puVar3;
        _method_setImplementation(puVar1,FUN_00fedf88);
      }
    }
    else {
      (*pcVar2)(puVar1,puVar3,FUN_00fedf88,&DAT_028e3118);
    }
  }
  return;
}

