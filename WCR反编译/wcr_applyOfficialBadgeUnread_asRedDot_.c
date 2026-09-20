// wcr_applyOfficialBadgeUnread:asRedDot: @ 015e16d0

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatCellView::wcr_applyOfficialBadgeUnread_asRedDot_
               (ID param_1,SEL param_2,unsigned_int param_3,bool param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  byte local_25;
  unsigned_int local_24;
  SEL local_20;
  ID local_18;
  
  local_25 = (byte)param_4;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOfficialBadge__026b10d8,0);
  local_30 = PTR_WCRefineHelper_026ce000;
  if (local_24 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_24);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_25 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_officialUnreadBadgeViewWithCount_026b10e0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_30 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOfficialBadge__026b10d8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_layoutOfficialBadge_026b10a8);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

