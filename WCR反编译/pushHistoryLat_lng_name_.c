// pushHistoryLat:lng:name: @ 019547cc

/* Function Stack Size: 0x28 bytes */

void WCRefineFakeLocationSettingsViewController::pushHistoryLat_lng_name_
               (ID param_1,SEL param_2,double param_3,double param_4,ID param_5)

{
  undefined8 local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,local_30,PTR_WCRefineFakeLocationHistoryStore_026cf188,
             PTR_s_pushLat_lng_name__026b9b28,local_38);
  _objc_storeStrong(&local_38,0);
  return;
}

