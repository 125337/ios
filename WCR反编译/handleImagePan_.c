// handleImagePan: @ 0190ff9c

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::handleImagePan_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar5 = local_28;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickedImageView_026b8a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_locationInView__026ca798);
  local_38 = in_d0;
  local_30 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  lVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if ((lVar5 == 1) ||
     (lVar5 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
     lVar5 == 2)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,local_30,local_18,PTR_s_pickColorAtPoint_showMagnifier__026b8a90,1);
  }
  else {
    lVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if ((lVar5 == 3) ||
       (lVar5 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
       lVar5 == 4)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,local_30,local_18,PTR_s_pickColorAtPoint_showMagnifier__026b8a90,0);
      IVar4 = local_18;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar1 = PTR___NSConcreteStackBlock_02578660;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01910234;
      local_48 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_18;
      local_40 = IVar4;
      local_88 = puVar1;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_019102a8;
      local_70 = &DAT_02579d00;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323da8,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_60,
                 &local_88);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

