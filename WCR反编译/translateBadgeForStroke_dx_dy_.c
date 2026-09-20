// translateBadgeForStroke:dx:dy: @ 01658f4c

/* Function Stack Size: 0x28 bytes */

void WCRSuperFloatCropViewController::translateBadgeForStroke_dx_dy_
               (ID param_1,SEL param_2,ID param_3,double param_4,double param_5)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  ulong local_40;
  double local_38;
  double local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  local_38 = param_5;
  local_30 = param_4;
  _objc_getAssociatedObject(local_28,DAT_028c6018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    dVar3 = param_4 + local_30;
    dVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    dVar4 = dVar4 + local_38;
    FUN_0164494c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar4,local_40,PTR_s_setCenter__026ca8c0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

