// setIsDeleting: @ 0185b118

/* Function Stack Size: 0x14 bytes */

void WCRefineBatchDeleteFriendViewController::setIsDeleting_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isDeleting) = (byte)param_3 & 1;
  return;
}

