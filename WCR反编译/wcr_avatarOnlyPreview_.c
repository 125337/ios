// wcr_avatarOnlyPreview: @ 0034b8b0

/* Function Stack Size: 0x18 bytes */

ID WCRHomeAvatarStripContextMenuDelegate::wcr_avatarOnlyPreview_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double in_d2;
  double in_d3;
  double dVar6;
  double local_b8;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_resolvedPreviewView__026a22e8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIPreviewParameters_026ce550;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    if ((1.0 < in_d2) && (1.0 < in_d3)) {
      local_b8 = in_d3;
      if (in_d2 < in_d3) {
        local_b8 = in_d2;
      }
      dVar4 = (in_d2 - local_b8) * 0.5;
      dVar5 = (in_d3 - local_b8) * 0.5;
      dVar6 = local_b8;
      FUN_003467d0();
      puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,dVar5,local_b8,dVar6,PTR__OBJC_CLASS___UIBezierPath_026ce268,
                 PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setVisiblePath__026a22f0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___UITargetedPreview_026ce558;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

