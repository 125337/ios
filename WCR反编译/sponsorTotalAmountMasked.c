// sponsorTotalAmountMasked @ 02167d98

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::sponsorTotalAmountMasked(ID param_1,SEL param_2)

{
  double in_d0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSponsorSecureStore_026ce918,PTR_s_loadTrustedTotalForWxid_cloudGen_026b00c0
             ,0,&local_28);
  return in_d0;
}

