// FUN_000dc534 @ 000dc534

byte FUN_000dc534(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long lStack_48;
  undefined4 uStack_40;
  long lStack_30;
  byte bStack_21;
  undefined1 *puStack_20;
  code *pcStack_18;
  long *plVar2;
  
  ___cxa_begin_catch();
  std::terminate();
  pcStack_18 = FUN_000dc544;
  plVar2 = &lStack_30;
  lStack_30 = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  if ((lStack_30 == 0) || (FUN_000d8808(), (uVar1 & 1) == 0)) {
    bStack_21 = 0;
    uStack_40 = 1;
  }
  else {
    lVar3 = lStack_30;
    FUN_000dc670();
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_selectedSegmentIndex_0269e998);
    bStack_21 = lVar3 == 3;
    uStack_40 = 1;
    _objc_storeStrong(&lStack_48,0);
  }
  _objc_storeStrong(&lStack_30,0);
  return bStack_21 & 1;
}

