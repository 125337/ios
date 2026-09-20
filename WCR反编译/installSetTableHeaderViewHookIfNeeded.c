// installSetTableHeaderViewHookIfNeeded @ 00fd15b8

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeTableHeaderHost::installSetTableHeaderViewHookIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_hookSetTableHeaderViewOnClass__026ad1a8,puVar1);
  pcVar2 = "MainFrameTableView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_hookSetTableHeaderViewOnClass__026ad1a8,pcVar2);
  }
  return;
}

