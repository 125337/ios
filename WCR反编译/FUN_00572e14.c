// FUN_00572e14 @ 00572e14

void FUN_00572e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *local_38;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(puVar2,param_3);
  if (DAT_028cb560 != (code *)0x0) {
    puVar2 = local_18;
    (*DAT_028cb560)(local_18,local_20,local_28);
  }
  FUN_0057348c();
  bVar1 = ((ulong)puVar2 & 1) != 0;
  if (bVar1) {
    puVar2 = local_18;
    FUN_005734fc(local_18,"m_privacyButton");
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    FUN_00573640(puVar2);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

