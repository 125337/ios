// isDeleting @ 0185b0ec

/* Function Stack Size: 0x10 bytes */

bool WCRefineBatchDeleteFriendViewController::isDeleting(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isDeleting) & 1;
}

