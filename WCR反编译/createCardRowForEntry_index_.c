// createCardRowForEntry:index: @ 01e81be0

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoCardView::createCardRowForEntry_index_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ID IVar6;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar6 = local_18;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_done_026a1598);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardBadgeText_026c7120);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOverdue_026c7128);
  uVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDueToday_026c7130);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_daily_026c7138);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar6,PTR_s_createItemRowWithText_done_index_026c7140,uVar1,uVar2 & 0xffffffff,param_4,
             1,uVar3,uVar4 & 0xffffffff,(char)uVar5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar6;
}

