// isQuickSection: @ 01ab5bbc

/* Function Stack Size: 0x18 bytes */

bool WCRGroupListViewController::isQuickSection_(ID param_1,SEL param_2,long_long param_3)

{
  undefined4 local_2c;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasQuickSection_026bde38);
  local_2c = 0;
  if ((param_1 & 1) != 0) {
    local_2c = (uint)(param_3 == 1);
  }
  return local_2c;
}

