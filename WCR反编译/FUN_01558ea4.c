// FUN_01558ea4 @ 01558ea4

void FUN_01558ea4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_30;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_01558ffc();
  local_30 = 0;
  if (lVar2 == 1) {
    local_30 = (uint)*(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_015591c0();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_30 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_openOfficialProfileForContact__0269efc0,*(undefined8 *)(param_1 + 0x28));
    if ((uVar4 & 1) == 0) {
      FUN_01558bec(*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

