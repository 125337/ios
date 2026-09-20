// dismissCellActionMenu @ 015f2b50

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::dismissCellActionMenu(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cellActionMenu_026b1588);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCellActionMenu__026b1590);
  puVar1 = PTR____NSArray0___02578280;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCellActionMenuLabels__026b1598,
             *(undefined8 *)PTR____NSArray0___02578280);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCellActionMenuActions__026b15a0,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCellActionUsername__026b15a8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setCellActionMenuIndex__026b15b0,0xffffffffffffffff);
  return;
}

