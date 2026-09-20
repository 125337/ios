// reset @ 018d4a68

/* Function Stack Size: 0x10 bytes */

void WCRChatToolbarAdjustmentViewController::reset(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4059000000000000,puVar1,PTR_s_setChatToolbarScalePercent__026b8128);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4041800000000000,local_28,PTR_s_setChatToolbarHeight__026b80e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setChatToolbarInputSpacing__026b80e8);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setChatToolbarBottomSpacing__026b80f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x403c000000000000,local_28,PTR_s_setChatToolbarItemHeight__026b80f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4020000000000000,local_28,PTR_s_setChatToolbarItemSpacing__026b8100);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4008000000000000,local_28,PTR_s_setChatToolbarIconTitleSpacing__026b8108);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4034000000000000,local_28,PTR_s_setChatToolbarIconSize__026b8110);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,local_28,PTR_s_setChatToolbarFontSize__026b8118);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,local_28,PTR_s_setChatToolbarCornerRadius__026b8120);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setChatToolbarCenterHorizontalOf_026b8130);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setChatToolbarCenterSpacing__026b8138,0);
  FUN_018ca37c();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

