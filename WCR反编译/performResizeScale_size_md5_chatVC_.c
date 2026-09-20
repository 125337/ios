// performResizeScale:size:md5:chatVC: @ 00f3b628

/* Function Stack Size: 0x38 bytes */

void __thiscall
WCRefineEmoticonToolsHelper::performResizeScale_size_md5_chatVC_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,double param_3,CGSize param_4,
          ID param_5,ID param_6)

{
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = in_d1;
  local_18 = in_d2;
  _objc_storeStrong(&local_40,param_4.field0_0x0);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4.field1_0x8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,local_20,local_18,0,local_28,PTR_s_performResizeScale_size_speed_md_026abfd0,
             local_40,local_48);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

