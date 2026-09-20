// resolveSmartTransportFrom:to: @ 00f5b47c

/* Function Stack Size: 0x30 bytes */

long_long WCRefineFakeLocationEngine::resolveSmartTransportFrom_to_
                    (ID param_1,SEL param_2,CLLocationCoordinate2D param_3,
                    CLLocationCoordinate2D param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long_long local_18;
  
  local_48 = param_2;
  local_40 = param_1;
  local_38 = in_d2;
  local_30 = in_d3;
  local_28 = in_d0;
  local_20 = in_d1;
  _CLLocationCoordinate2DIsValid
            (in_d0,in_d1,param_1,param_2,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
             param_4.field1_0x8);
  if (((param_1 & 1) == 0) ||
     (_CLLocationCoordinate2DIsValid(local_38,local_30), (param_1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CLLocation_026ceb88;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_20);
    puVar2 = PTR__OBJC_CLASS___CLLocation_026ceb88;
    local_50 = puVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_30);
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_distanceFromLocation__026ac620,puVar2);
    if (1500.0 <= local_38) {
      if (10000.0 <= local_38) {
        if (400000.0 <= local_38) {
          local_18 = 5;
        }
        else {
          local_18 = 0;
        }
      }
      else {
        local_18 = 2;
      }
    }
    else {
      local_18 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  return local_18;
}

