// itemSideForContainerWidth: @ 01099e10

/* Function Stack Size: 0x18 bytes */

double WCRefineLocalEmoticonStore::itemSideForContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  double local_40;
  double local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsPerRow_026ae470);
  if (((long)param_1 < 3) || (8 < (long)param_1)) {
    local_18 = 64.0;
  }
  else if (80.0 <= param_3) {
    local_40 = (((param_3 - 16.0) - 16.0) + 15.0) / (double)(long)param_1 - 15.0;
    if (local_40 < 36.0) {
      local_40 = 36.0;
    }
    local_18 = (double)(long)local_40;
  }
  else {
    local_18 = 64.0;
  }
  return local_18;
}

