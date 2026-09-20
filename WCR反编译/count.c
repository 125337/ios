// count @ 01fcacf4

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRConfigMutableSnapshot::count(ID param_1,SEL param_2)

{
  undefined8 local_30;
  
  local_30 = *(unsigned_long_long *)(param_1 + (long)_wcrMutableStorage);
  if (local_30 == 0) {
    local_30 = *(unsigned_long_long *)(param_1 + (long)_wcrSnapshot);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  return local_30;
}

