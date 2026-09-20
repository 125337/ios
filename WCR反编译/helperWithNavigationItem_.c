// helperWithNavigationItem: @ 0061e370

/* Function Stack Size: 0x18 bytes */

ID WCRefineTQQTypingAnimationHelper::helperWithNavigationItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineTQQTypingAnimationHelper_026ce7f0;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNavigationItem__026a5db8,local_28);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

