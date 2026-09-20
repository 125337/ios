// _WCRChatToolbarEnsureRegistrationHost @ 00eef738

void _WCRChatToolbarEnsureRegistrationHost(void)

{
  char *pcVar1;
  undefined *puVar2;
  
  if ((DAT_028e2ad0 & 1) == 0) {
    pcVar1 = "MYActionsViewController";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      _objc_allocateClassPair();
      if (puVar2 == (undefined *)0x0) {
        pcVar1 = "MYActionsViewController";
        _objc_getClass();
        DAT_028e2ad0 = pcVar1 != (char *)0x0;
      }
      else {
        _class_addMethod(puVar2,PTR_s_init_026ca6a8,FUN_00eef89c);
        _class_addMethod(puVar2,PTR_s_initData_0269ec58,FUN_00eef974,"v@:");
        _class_addMethod(puVar2,PTR_s_dataSource_0269e800,FUN_00eef9c8,"@@:");
        _class_addMethod(puVar2,PTR_s_setDataSource__026a2640,FUN_00eefa38,"v@:@");
        _class_addMethod(puVar2,PTR_s_addAction_name_icon__026ab910,FUN_00eefc78,"v@:@@@");
        _objc_registerClassPair(puVar2);
        DAT_028e2ad0 = 1;
      }
    }
    else {
      DAT_028e2ad0 = 1;
    }
  }
  return;
}

