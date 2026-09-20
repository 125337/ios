// resetSessionPage @ 015fe598

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatRuntime::resetSessionPage(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSessionPageLimit__026b1730,DAT_02339778);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPrivatePageLimit__026b1738,DAT_02339778);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setGroupPageLimit__026b1740,DAT_02339778);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSessionHasMore__026b1718,1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLoadingNextSessionPage__026b1748,0);
  return;
}

