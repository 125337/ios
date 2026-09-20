// openHistory @ 018ed118

/* Function Stack Size: 0x10 bytes */

void WCRefineClipboardSettingsViewController::openHistory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineClipboardHistoryListViewController_026cf138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClipboardHistoryListViewController_026cf138,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_pushViewController__026b83a0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

