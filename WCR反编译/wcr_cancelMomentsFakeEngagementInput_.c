// wcr_cancelMomentsFakeEngagementInput: @ 0155bec8

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_cancelMomentsFakeEngagementInput_
               (ID param_1,SEL param_2,ID param_3)

{
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(&DAT_028e3920,0);
  DAT_028e39b8 = 0;
  if (local_28 != 0) {
    _objc_setAssociatedObject(local_28,DAT_028c5f48,0,1);
    _objc_setAssociatedObject(local_28,DAT_028c5f50,0,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

