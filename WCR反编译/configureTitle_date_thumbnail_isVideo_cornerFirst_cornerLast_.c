// configureTitle:date:thumbnail:isVideo:cornerFirst:cornerLast: @ 01be5be0

/* Function Stack Size: 0x34 bytes */

void WCRMomentsDraftRowView::configureTitle_date_thumbnail_isVideo_cornerFirst_cornerLast_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,bool param_7,
               bool param_8)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_configureTitle_date_thumbnail_is_026c09b0,local_28,local_30,local_38,
             param_6 & 1,param_7 & 1,param_8 & 1,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

