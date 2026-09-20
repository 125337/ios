// removeBadgeForStroke: @ 016590c8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::removeBadgeForStroke_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6018);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
  _objc_setAssociatedObject(local_28,DAT_028c6018,0,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

