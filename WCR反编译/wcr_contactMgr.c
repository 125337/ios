// wcr_contactMgr @ 00eddad8

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomMuteHelper::wcr_contactMgr(ID param_1,SEL param_2)

{
  char *pcVar1;
  
  pcVar1 = "CContactMgr";
  _objc_getClass("CContactMgr");
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_service__026ab620,pcVar1);
  return param_1;
}

