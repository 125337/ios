// tableView:heightForHeaderInSection: @0x8831c

/* Function Stack Size: 0x20 bytes */

double WCMYBIBSheetView::tableView_heightForHeaderInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (param_4 == 0) {
    local_40 = 2.2250738585072014e-308;
  }
  else {
    local_40 = _kOffsetSpace;
  }
  _objc_storeStrong(&local_28,0);
  return local_40;
}

