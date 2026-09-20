// FUN_0083e908 @ 0083e908

void FUN_0083e908(void)

{
  undefined **ppuVar1;
  undefined **local_18;
  
  if ((DAT_028cd280 & 1) != 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_02580880;
    _objc_retainBlock();
    local_18 = ppuVar1;
    (*(code *)ppuVar1[2])(ppuVar1,DAT_028cd060);
    (*(code *)local_18[2])(local_18,DAT_028cd068);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

