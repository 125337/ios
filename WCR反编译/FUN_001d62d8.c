// FUN_001d62d8 @ 001d62d8

byte FUN_001d62d8(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_001d3fac();
  if (((uVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    pcVar3 = &cf_WCContentItemViewTemplateGrid;
    _NSClassFromString();
    uVar4 = local_20;
    local_38 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar4;
    for (local_48 = 0; local_40 != 0 && local_48 < 0xc; local_48 = local_48 + 1) {
      if ((local_38 != (cfstringStruct *)0x0) &&
         (uVar4 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_38),
         (uVar4 & 1) != 0)) {
        local_11 = 1;
        goto LAB_001d6498;
      }
      uVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_11 = 0;
LAB_001d6498:
    local_30 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

