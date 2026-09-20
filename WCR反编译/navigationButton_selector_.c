// navigationButton:selector: @ 01c6ef18

/* Function Stack Size: 0x20 bytes */

ID WCRefinePageBackgroundLibraryViewController::navigationButton_selector_
             (ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  undefined *puVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

