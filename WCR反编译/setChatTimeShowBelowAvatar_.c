// setChatTimeShowBelowAvatar: @ 02078c18

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setChatTimeShowBelowAvatar_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  if ((param_3 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chatTimePlacement_0269f080);
    if (IVar1 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setChatTimePlacement__026b7d00,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setChatTimePlacement__026b7d00,2);
  }
  return;
}

