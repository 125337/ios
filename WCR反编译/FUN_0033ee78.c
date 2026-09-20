// FUN_0033ee78 @ 0033ee78

byte FUN_0033ee78(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  byte local_4c;
  byte local_48;
  undefined *local_30;
  undefined *local_20;
  
  bVar2 = false;
  bVar1 = false;
  local_48 = 1;
  if ((DAT_028c9ee8 < 1) && (local_48 = 1, (DAT_028c9ee1 & 1) == 0)) {
    local_48 = 1;
    if ((DAT_028c9ee0 & 1) == 0) {
      local_20 = &DAT_028c9ed8;
      _objc_loadWeakRetained();
      bVar2 = true;
      local_4c = 0;
      bVar1 = local_20 != (undefined *)0x0;
      if (bVar1) {
        local_30 = &DAT_028c9ed8;
        _objc_loadWeakRetained();
        puVar3 = local_30;
        FUN_0033f024();
        local_4c = (byte)puVar3;
      }
      local_48 = local_4c;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  return local_48 & 1;
}

