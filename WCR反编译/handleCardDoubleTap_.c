// handleCardDoubleTap: @ 01e758e4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::handleCardDoubleTap_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 3) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((puVar3 == (undefined1 *)0x0) || (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentQuickAddToDoAlertForSourc_026c6e38,puVar3);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

