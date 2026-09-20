// createNavigationBarButtonWithTitle:target:action: @ 01d60114

/* Function Stack Size: 0x28 bytes */

ID WCRefineScreenshotFrameLibraryViewController::createNavigationBarButtonWithTitle_target_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,SEL param_5)

{
  undefined *puVar1;
  undefined *local_40;
  SEL local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  local_38 = param_5;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setEnabled__026ca938,1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

