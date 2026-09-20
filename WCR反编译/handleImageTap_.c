// handleImageTap: @ 0190fb84

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::handleImageTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickedImageView_026b8a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
  local_38 = in_d0;
  local_30 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,local_30,local_18,PTR_s_pickColorAtPoint_showMagnifier__026b8a90,1);
  dVar3 = _dispatch_time(0,1200000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar2;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

