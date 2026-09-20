// initWithPerspectiveCornersLeftTop:rightTop:leftBottom:rightBottom:templateSize:videoSize:frameImage: @ 010f2984

/* Function Stack Size: 0x78 bytes */

ID WCRefinePerspectiveVideoCompositor::
   initWithPerspectiveCornersLeftTop_rightTop_leftBottom_rightBottom_templateSize_videoSize_frameImage_
             (ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4,CGPoint param_5,CGPoint param_6
             ,CGSize param_7,CGSize param_8,ID param_9)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 local_88;
  SEL local_80;
  ID local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_60 = param_6.field0_0x0;
  local_58 = param_6.field1_0x8;
  local_70 = param_7.field0_0x0;
  dStack_68 = param_7.field1_0x8;
  local_88 = 0;
  local_80 = param_2;
  local_78 = param_1;
  local_50 = in_d6;
  local_48 = in_d7;
  local_40 = in_d4;
  local_38 = in_d5;
  local_30 = in_d2;
  local_28 = in_d3;
  local_20 = in_d0;
  local_18 = in_d1;
  _objc_storeStrong(&local_88,param_3.field0_0x0,param_3.field0_0x0,param_3.field1_0x8,
                    param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,param_5.field1_0x8);
  IVar1 = local_78;
  local_78 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_init_026ca6a8);
  local_78 = IVar1;
  _objc_storeStrong(&local_78);
  if (local_78 != 0) {
    *(undefined8 *)(local_78 + 0x10) = local_20;
    *(undefined8 *)(local_78 + 0x18) = local_18;
    *(undefined8 *)(local_78 + 0x20) = local_30;
    *(undefined8 *)(local_78 + 0x28) = local_28;
    *(undefined8 *)(local_78 + 0x30) = local_40;
    *(undefined8 *)(local_78 + 0x38) = local_38;
    *(undefined8 *)(local_78 + 0x40) = local_50;
    *(undefined8 *)(local_78 + 0x48) = local_48;
    *(double *)(local_78 + 0x50) = local_60;
    *(double *)(local_78 + 0x58) = local_58;
    *(double *)(local_78 + 0xa0) = dStack_68;
    *(double *)(local_78 + 0x98) = local_70;
    _objc_storeStrong(local_78 + 0x60,local_88);
  }
  IVar1 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_78,0);
  return IVar1;
}

