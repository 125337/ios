// FUN_0179466c @ 0179466c

/* WARNING: Removing unreachable block (ram,0x01794764) */

void FUN_0179466c(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  bVar2 = true;
  if (param_1 != 0) {
    lVar3 = param_1;
    _objc_getAssociatedObject(param_1,DAT_028c6298);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if (!bVar2) {
    puVar4 = PTR_WCPluginsViewControllerBehavior_026cefe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCPluginsViewControllerBehavior_026cefe0,PTR_s_class_0269cd60);
    _class_copyMethodList();
    _free(0,puVar4);
    _class_addProtocol(param_1,PTR_UIScrollViewDelegate_026cdf38);
    _class_addProtocol(param_1,PTR_WCRefinePluginWCActionSheetDelegate_026cdf40);
    uVar1 = DAT_028c6298;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  return;
}

