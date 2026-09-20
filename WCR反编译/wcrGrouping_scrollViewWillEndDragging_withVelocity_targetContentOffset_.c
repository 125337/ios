// wcrGrouping_scrollViewWillEndDragging:withVelocity:targetContentOffset: @ 0037e104

/* Function Stack Size: 0x30 bytes */

void __thiscall
WCRefineHomeSessionGroupingHook::
wcrGrouping_scrollViewWillEndDragging_withVelocity_targetContentOffset_
          (WCRefineHomeSessionGroupingHook *this,ID param_1,SEL param_2,ID param_3,CGPoint param_4,
          CGPoint *param_5)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = in_d0;
  local_18 = in_d1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,local_18,local_28,PTR_s_wcrGrouping_scrollViewWillEndDra_026a29f0,local_38,
             param_4.field0_0x0);
  _objc_storeStrong(&local_38,0);
  return;
}

