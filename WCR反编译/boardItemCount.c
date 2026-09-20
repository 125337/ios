// boardItemCount @ 01099824

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineLocalEmoticonStore::boardItemCount(ID param_1,SEL param_2)

{
  undefined8 local_18;
  
  if (DAT_028e32a0 == 0) {
    local_18 = DAT_028e32a8;
  }
  else {
    local_18 = DAT_028e32a0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e32a0,PTR_s_count_0269cfe0);
  }
  return local_18;
}

