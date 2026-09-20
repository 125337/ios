// cardDeleteDragThresholdForCell: @ 01b136b4

/* Function Stack Size: 0x18 bytes */

double WCRefineKeywordAlertHistoryCardViewController::cardDeleteDragThresholdForCell_
                 (ID param_1,SEL param_2,ID param_3)

{
  double in_d3;
  double local_90;
  double local_88;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  local_88 = in_d3 * DAT_02323ec8;
  if (130.0 < local_88) {
    local_88 = 130.0;
  }
  if (local_88 <= 70.0) {
    local_90 = 70.0;
  }
  else {
    local_90 = local_88;
  }
  _objc_storeStrong(&local_28,0);
  return local_90;
}

