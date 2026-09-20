// resetSwitchToOff @ 00ecdb5c

/* Function Stack Size: 0x10 bytes */

void WCRefineChatIndentOverrideHelper::resetSwitchToOff(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = &DAT_028e2a18;
  local_20 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setOn_animated__026a8098,0,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

