// offsetValueForTag: @ 019ef458

/* Function Stack Size: 0x18 bytes */

long_long WCRefineFontConvertViewController::offsetValueForTag_
                    (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_18;
  
  if (param_3 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_weightOffset_026b1058);
    local_18 = param_1;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sizeOffset_026b1060);
    local_18 = param_1;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lineHeightOffset_026b1068);
    local_18 = param_1;
  }
  else if (param_3 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_letterSpacingOffset_026b1070);
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

