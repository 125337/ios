// FUN_0081d34c @ 0081d34c

byte FUN_0081d34c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar4 == 0)) {
    local_11 = 0;
  }
  else {
    lVar2 = DAT_028ccff8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccff8,PTR_s_count_0269cfe0);
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar3 = local_20;
      FUN_0081df3c(local_20,DAT_028ccff8);
      uVar4 = uVar3 & 0xffffffff;
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
        goto LAB_0081d4c8;
      }
    }
    uVar3 = local_20;
    FUN_0081e178(uVar4);
    local_11 = ((byte)uVar3 ^ 1) & 1;
  }
LAB_0081d4c8:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

