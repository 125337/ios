// FUN_0075d594 @ 0075d594

void FUN_0075d594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = DAT_028cc878 + 1;
  DAT_028cc878 = lVar1;
  if (DAT_028cc860 != (code *)0x0) {
    (*DAT_028cc860)(local_18,param_2);
  }
  uVar3 = local_18;
  if (((DAT_028cc880 & 1) == 0) && (lVar1 == 1)) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      DAT_028cc880 = 1;
      FUN_00765798(local_18);
      DAT_028cc880 = 0;
    }
  }
  DAT_028cc878 = DAT_028cc878 + -1;
  _objc_storeStrong(&local_18,0);
  return;
}

