// FUN_01558b84 @ 01558b84

void FUN_01558b84(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_openOfficialProfileForContact__0269efc0,*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    FUN_01558bec(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

