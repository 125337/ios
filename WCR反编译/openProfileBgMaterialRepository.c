// openProfileBgMaterialRepository @ 01cdc9f8

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::openProfileBgMaterialRepository
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineProfileBgMaterialRepositoryViewController_026cf500;
  _objc_alloc_init();
  local_28 = puVar1;
  _WCRefineProfileBgPushController(local_18,puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

