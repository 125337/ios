// initWithPoint:dotColor:borderColor:dotSize:borderWidth:hasBorder:duration:useCustomImage:customImage: @ 00803428

/* Function Stack Size: 0x58 bytes */

ID __thiscall
WBTouchTrailDotView::
initWithPoint_dotColor_borderColor_dotSize_borderWidth_hasBorder_duration_useCustomImage_customImage_
          (WBTouchTrailDotView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4,ID param_5,
          double param_6,double param_7,bool param_8,double param_9,bool param_10,ID param_11)

{
  ID IVar1;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 local_70;
  byte local_61;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double dStack_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = param_6;
  dStack_18 = param_7;
  _objc_storeStrong(&local_38,param_3.field0_0x0);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3.field1_0x8);
  local_51 = (byte)param_4;
  local_61 = (byte)param_5;
  local_70 = 0;
  local_60 = in_d4;
  local_50 = in_d3;
  local_48 = param_9;
  _objc_storeStrong(&local_70,param_8);
  IVar1 = local_28;
  local_28 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,dStack_18,local_48,local_50,local_60,0x3fe0000000000000,IVar1,
             PTR_s_initWithPoint_dotColor_borderCol_026a89f8,local_38,local_40,local_51 & 1,
             local_61 & 1,local_70);
  local_28 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return IVar1;
}

