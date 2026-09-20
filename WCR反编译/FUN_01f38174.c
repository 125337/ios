// FUN_01f38174 @ 01f38174

void FUN_01f38174(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long local_48;
  uint local_3c;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  bVar1 = lVar2 != 0;
  local_38 = lVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_resolvedSinglePaletteHexWithLigh_026c89c0,local_20,local_28,
               *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_appendSvgPaletteHex__026c89c8,lVar2);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

