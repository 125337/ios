// setAvoidDuplicateAffixes: @ 01867c7c

/* Function Stack Size: 0x14 bytes */

void WCRefineBatchRemarkViewController::setAvoidDuplicateAffixes_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_avoidDuplicateAffixes) = (byte)param_3 & 1;
  return;
}

