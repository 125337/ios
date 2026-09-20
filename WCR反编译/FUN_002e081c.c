// FUN_002e081c @ 002e081c

void FUN_002e081c(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
  _object_getClass();
  if ((((puVar1 != (undefined *)0x0) && (param_1 != 0)) && (param_2 != 0)) &&
     (param_3 != (undefined8 *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
    _class_getClassMethod();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      _method_getImplementation();
      *param_3 = puVar2;
      _method_setImplementation(puVar1,param_2);
    }
  }
  return;
}

