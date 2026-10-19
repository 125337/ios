// presentAnimatedFromParentViewController:fromView:fromFrame:setup:completion: @0xa64f0

/* Function Stack Size: 0x50 bytes */

void __thiscall
WCMTOCropViewController::
presentAnimatedFromParentViewController_fromView_fromFrame_setup_completion_
          (WCMTOCropViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,CGRect param_5
          ,ID param_6,undefined4 param_7,ID param_8,undefined4 param_9)

{
  undefined8 local_90;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ID local_40;
  WCMTOCropViewController *local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_18 = param_5.field1_0x10.field1_0x8;
  local_20 = param_5.field1_0x10.field0_0x0;
  local_28 = param_5.field0_0x0.field1_0x8;
  local_30 = param_5.field0_0x0.field0_0x0;
  local_48 = 0;
  local_40 = param_1;
  local_38 = this;
  _objc_storeStrong(&local_48,param_2);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_6);
  _objc_msgSend_presentAnimatedFromParentViewController_fromImage_fromView_fromFrame_angle_toImageFrame_setup_completion_
            (local_30,local_28,local_20,local_18,*(undefined8 *)PTR__CGRectZero_001108d8,
             *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
             *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),local_38,local_90,local_48,0,local_50,
             0,local_58,local_60);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

