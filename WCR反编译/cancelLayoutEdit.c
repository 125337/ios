// cancelLayoutEdit @ 018cdfc4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::cancelLayoutEdit(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingLayoutKey__026b8090);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setPendingLayoutItemIndex__026b7e58,DAT_02339d98);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLayoutAlert__026b80c8,0);
  return;
}

