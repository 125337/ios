// collapseSidebar @ 015e6ab0

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::collapseSidebar(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSidebarExpanded__026b12c8,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scheduleIdleSnap_026b12d0);
  return;
}

