// WCRefineAppendThemeBoxLongPressMenuItemIfNeeded @ 0169b454

/* WCRefineAppendThemeBoxLongPressMenuItemIfNeeded(objc_object*, objc_object*) */

void WCRefineAppendThemeBoxLongPressMenuItemIfNeeded(objc_object *param_1,objc_object *param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

