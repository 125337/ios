// recordProactivelyDeletedTid:forUsername: @ 010c1b18

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsMonitor::recordProactivelyDeletedTid_forUsername_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setDeletedState_forUsername_tid__026ae730,1,local_30,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

