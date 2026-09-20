// endChangeBatch @ 0107ac74

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonStore::endChangeBatch(ID param_1,SEL param_2)

{
  if (0 < DAT_028e3238) {
    DAT_028e3238 = DAT_028e3238 + -1;
  }
  if ((DAT_028e3238 < 1) && ((DAT_028e3240 & 1) != 0)) {
    DAT_028e3240 = 0;
    FUN_0107ad08();
  }
  return;
}

