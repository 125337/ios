// initWithPoint:dotColor:borderColor:dotSize:borderWidth:hasBorder:duration: @ 008032b4

/* Function Stack Size: 0x4c bytes */

ID __thiscall
WBTouchTrailDotView::initWithPoint_dotColor_borderColor_dotSize_borderWidth_hasBorder_duration_
          (WBTouchTrailDotView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4,ID param_5,
          double param_6,double param_7,bool param_8,double param_9)

{
  ID IVar1;
  undefined8 in_d3;
  undefined8 in_d4;
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
  IVar1 = local_28;
  local_28 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,dStack_18,param_9,in_d3,in_d4,0x3ff0000000000000,IVar1,
             PTR_s_initWithPoint_dotColor_borderCol_026a89f8,local_38,local_40,(uint)param_4 & 1,0,0
            );
  local_28 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return IVar1;
}

