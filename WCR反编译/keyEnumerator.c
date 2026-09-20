// keyEnumerator @ 01fcad6c

/* Function Stack Size: 0x10 bytes */

ID WCRConfigMutableSnapshot::keyEnumerator(ID param_1,SEL param_2)

{
  undefined8 local_30;
  
  local_30 = *(ID *)(param_1 + (long)_wcrMutableStorage);
  if (local_30 == 0) {
    local_30 = *(ID *)(param_1 + (long)_wcrSnapshot);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_keyEnumerator_026a8c50);
  return local_30;
}

