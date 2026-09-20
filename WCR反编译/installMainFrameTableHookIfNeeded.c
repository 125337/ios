// installMainFrameTableHookIfNeeded @ 00fce048

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeHeaderUnstick::installMainFrameTableHookIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  char *local_90;
  
  puVar1 = PTR__OBJC_CLASS___NSObject_026ce188;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_class_0269cd60);
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
  pcVar3 = "MainFrameTableView";
  _objc_getClass();
  puVar1 = PTR_s_layoutSubviews_0269de80;
  if (pcVar3 == (char *)0x0) {
    return;
  }
  pcVar4 = pcVar3;
  _class_getInstanceMethod(pcVar3,PTR_s_layoutSubviews_0269de80);
  if (pcVar4 == (char *)0x0) {
    return;
  }
  pcVar5 = pcVar4;
  _method_getTypeEncoding();
  _method_getImplementation();
  if (pcVar4 == (char *)0x0) {
    return;
  }
  if (pcVar5 == (char *)0x0) {
    return;
  }
  ppuVar6 = &PTR___NSConcreteGlobalBlock_02583dd0;
  DAT_028e3038 = pcVar4;
  _objc_retainBlock();
  ppuVar7 = ppuVar6;
  _imp_implementationWithBlock();
  (*(code *)PTR__objc_release_02578630)(ppuVar6);
  pcVar4 = pcVar3;
  _class_addMethod(pcVar3,puVar1,ppuVar7,pcVar5);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = pcVar3;
    _class_getInstanceMethod(pcVar3,puVar1);
    local_90 = pcVar3;
    _class_getSuperclass();
    if (local_90 == (char *)0x0) {
      local_90 = (char *)0x0;
    }
    else {
      _class_getInstanceMethod(local_90,puVar1);
    }
    if ((pcVar4 != (char *)0x0) && (local_90 != (char *)0x0)) {
      pcVar8 = pcVar4;
      _method_getImplementation();
      _method_getImplementation();
      if (pcVar8 == local_90) {
        _class_replaceMethod(0,pcVar3,puVar1,ppuVar7,pcVar5);
        goto LAB_00fce2a8;
      }
    }
    if (pcVar4 == (char *)0x0) {
      _class_replaceMethod(pcVar3,puVar1,ppuVar7,pcVar5);
    }
    else {
      _method_setImplementation(pcVar4,ppuVar7);
      DAT_028e3038 = pcVar4;
    }
  }
LAB_00fce2a8:
  puVar1 = PTR__OBJC_CLASS___NSObject_026ce188;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_class_0269cd60);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,&DAT_028e3032,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

