// snapshotPreviewImageForUsername: @ 01848c94

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameSpecialUsersViewController::snapshotPreviewImageForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_68 [7];
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_avatarFramePreviewForUsername__026b6800,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_bounds_026ca548);
  _UIGraphicsBeginImageContextWithOptions(in_d2,in_d3,0,0);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  _UIGraphicsGetCurrentContext();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_renderInContext__0269e300,IVar2);
  (*(code *)PTR__objc_release_02578630)();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  local_68[0] = IVar1;
  _UIGraphicsEndImageContext();
  IVar1 = local_68[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

