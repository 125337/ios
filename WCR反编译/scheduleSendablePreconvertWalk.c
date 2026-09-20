// scheduleSendablePreconvertWalk @ 0107d5b8

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonStore::scheduleSendablePreconvertWalk(ID param_1,SEL param_2)

{
  if ((DAT_028e3250 & 1) == 0) {
    DAT_028e3250 = 1;
    DAT_028e3251 = 1;
    FUN_0107d664();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

