// wcr_prepareChatSearchControllerForDismiss: @ 0155b9b8

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_prepareChatSearchControllerForDismiss_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  uint local_34;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028e39a1 & 1) != 0) && (local_28 != 0)) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isMovingFromParentViewController_0269f458);
    local_34 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isBeingDismissed_0269f460);
      local_34 = (uint)uVar1;
    }
    if ((local_34 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_trimChatSearchNavigationStac_026b05c8,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

