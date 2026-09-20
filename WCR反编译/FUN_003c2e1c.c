// FUN_003c2e1c @ 003c2e1c

byte FUN_003c2e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int local_5c;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_30;
    FUN_003c32ec();
    if ((uVar2 & 1) != 0) {
      local_11 = false;
      goto LAB_003c2f30;
    }
  }
  if (DAT_028ca1c8 == (code *)0x0) {
    local_5c = 0;
  }
  else {
    uVar3 = local_20;
    (*DAT_028ca1c8)(local_20,local_28,local_30);
    local_5c = (int)uVar3;
  }
  local_11 = local_5c != 0;
LAB_003c2f30:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

