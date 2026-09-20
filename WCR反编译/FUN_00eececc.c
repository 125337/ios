// FUN_00eececc @ 00eececc

void FUN_00eececc(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  
  pcVar1 = "MultiSelectChatRoomHalfScreenViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_onClickMakeSureButton;
    _NSSelectorFromString(&cf_onClickMakeSureButton);
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar3 != (char *)0x0) {
      _method_setImplementation(pcVar3,FUN_00eed07c);
      DAT_028e2a98 = pcVar3;
    }
    pcVar2 = &cf_updateRightMakeSureButton;
    _NSSelectorFromString(&cf_updateRightMakeSureButton);
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar3 != (char *)0x0) {
      _method_setImplementation(pcVar3,FUN_00eed170);
      DAT_028e2aa0 = pcVar3;
    }
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90);
    if (pcVar3 != (char *)0x0) {
      _method_setImplementation(pcVar3,FUN_00eed254);
      DAT_028e2aa8 = pcVar3;
    }
    pcVar2 = &cf_searchBar_textDidChange_;
    _NSSelectorFromString(&cf_searchBar_textDidChange_);
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar3 != (char *)0x0) {
      _method_setImplementation(pcVar3,FUN_00eed338);
      DAT_028e2ab0 = pcVar3;
    }
    pcVar2 = &cf_didSelectContact_;
    _NSSelectorFromString(&cf_didSelectContact_);
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar1 != (char *)0x0) {
      _method_setImplementation(pcVar1,FUN_00eed47c);
      DAT_028e2ab8 = pcVar1;
    }
  }
  return;
}

