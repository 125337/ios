// cropViewController:didCropToImage:withRect:angle: @0x4f940

/* Function Stack Size: 0x48 bytes */

void WCMFeedController::cropViewController_didCropToImage_withRect_angle_
               (ID param_1,SEL param_2,ID param_3,ID param_4,CGRect param_5,long_long param_6)

{
  undefined8 uVar1;
  undefined8 local_f8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long_long local_68;
  undefined8 local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_28 = param_5.field1_0x10.field1_0x8;
  local_30 = param_5.field1_0x10.field0_0x0;
  local_38 = param_5.field0_0x0.field1_0x8;
  local_40 = param_5.field0_0x0.field0_0x0;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = param_6;
  _objc_msgSend_cropAccount(local_48,local_f8);
  local_70 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCropAccount_(local_48,local_f8,0);
  uVar1 = local_58;
  local_88 = (*(code *)PTR__objc_retain_00110460)(local_48);
  local_80 = (*(code *)PTR__objc_retain_00110460)(local_60);
  local_78 = (*(code *)PTR__objc_retain_00110460)(local_70);
  _objc_msgSend_dismissViewControllerAnimated_completion_(uVar1,local_f8,1);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}

