// FUN_01603b58 @ 01603b58

byte FUN_01603b58(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined1 local_29;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_29 = 0;
  bVar2 = true;
  uVar1 = local_20 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = &DAT_028e3bd0;
    _objc_loadWeakRetained();
    bVar2 = puVar3 == (undefined *)0x0;
    local_29 = uVar1;
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  if (bVar2) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_40 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_70;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_38;
    local_11 = 0;
    if (local_38 != (undefined *)0x0) {
      puVar4 = &DAT_028e3bd0;
      _objc_loadWeakRetained();
      local_11 = puVar3 == puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

