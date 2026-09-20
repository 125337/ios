// FUN_006a8bf8 @ 006a8bf8

uint FUN_006a8bf8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_24;
  undefined8 local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_006a8f74();
  local_24 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_24 = (uint)uVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

