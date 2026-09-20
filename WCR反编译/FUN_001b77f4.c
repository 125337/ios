// FUN_001b77f4 @ 001b77f4

byte FUN_001b77f4(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte local_11;
  
  pcVar2 = "ContactUtils";
  _objc_getClass();
  puVar1 = PTR_s_getDeleteContactKeepChatHistoryO_0269ffc0;
  if ((pcVar2 == (char *)0x0) ||
     (pcVar3 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar2,PTR_s_respondsToSelector__026ca818,
                PTR_s_getDeleteContactKeepChatHistoryO_0269ffc0), ((ulong)pcVar3 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
    local_11 = (byte)pcVar2 & 1;
  }
  return local_11;
}

