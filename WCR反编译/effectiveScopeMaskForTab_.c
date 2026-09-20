// effectiveScopeMaskForTab: @ 0151fe78

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineTelegramGroupingStore::effectiveScopeMaskForTab_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scopeMask_026a8338);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabId_026a8270);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    local_30 = local_30 | 4;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

