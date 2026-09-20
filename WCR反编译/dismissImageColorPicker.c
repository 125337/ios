// dismissImageColorPicker @ 019119ec

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::dismissImageColorPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01911b18;
  local_30 = &DAT_0257a800;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd0000000000000,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_48);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

