// screenshotFromWindow: @ 014af74c

/* Function Stack Size: 0x18 bytes */

ID WCRefineRestar::screenshotFromWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_88 [9];
  undefined8 local_40;
  undefined8 uStack_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_40 = in_d2;
  uStack_38 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _UIGraphicsBeginImageContextWithOptions(0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,uStack_38,in_d2,in_d3,IVar2,PTR_s_drawViewHierarchyInRect_afterScr_0269e2f8,1)
  ;
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  local_88[0] = IVar2;
  _UIGraphicsEndImageContext();
  IVar2 = local_88[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_88,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

