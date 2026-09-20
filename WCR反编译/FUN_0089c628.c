// FUN_0089c628 @ 0089c628

void FUN_0089c628(code *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  code *local_80;
  
  if (((param_1 != (code *)0x0) && (param_2 != 0)) &&
     (pcVar1 = param_1, _class_getInstanceMethod(param_1,param_2), pcVar1 != (code *)0x0)) {
    local_80 = param_1;
    _class_getSuperclass();
    if (local_80 == (code *)0x0) {
      local_80 = (code *)0x0;
    }
    else {
      _class_getInstanceMethod(local_80,param_2);
    }
    pcVar2 = pcVar1;
    _method_getImplementation();
    lVar4 = 0;
    if (local_80 != (code *)0x0) {
      _method_getImplementation();
      lVar4 = (long)local_80 - (long)pcVar2;
      if (lVar4 == 0) {
        return;
      }
    }
    pcVar2 = param_1;
    _objc_getAssociatedObject(lVar4,param_1,&DAT_028cdd30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (((pcVar2 == (code *)0x0) &&
        (_method_setImplementation(pcVar1,FUN_0089c8b0), pcVar1 != (code *)0x0)) &&
       (pcVar1 != FUN_0089c8b0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithPointer__026a2118,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(param_1,&DAT_028cdd30,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  return;
}

