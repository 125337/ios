// FUN_0006b3b8 @ 0006b3b8

void FUN_0006b3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_68;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_00078284();
  (*DAT_028c7dc8)(local_18,local_20,local_28);
  FUN_00078344((uint)uVar1 & 1);
  uVar1 = local_18;
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_28;
  }
  FUN_00077a3c(uVar1,local_68);
  FUN_00078388(local_18);
  _objc_storeStrong(&local_28,0);
  return;
}

