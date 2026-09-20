// FUN_002e4254 @ 002e4254

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_002e4254(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  DAT_028c9951 = *(byte *)(param_1 + 0x60) & 1;
  DAT_026dfd68 = *(byte *)(param_1 + 0x61) & 1;
  DAT_028c9952 = *(byte *)(param_1 + 0x62) & 1;
  DAT_028c9953 = *(byte *)(param_1 + 99) & 1;
  DAT_026dfd70 = *(undefined8 *)(param_1 + 0x40);
  DAT_028c9958 = *(undefined8 *)(param_1 + 0x48);
  DAT_028c9960 = *(undefined8 *)(param_1 + 0x50);
  DAT_028c9968 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar1 = DAT_028c9850;
  DAT_028c9850 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar1 = DAT_028c9858;
  DAT_028c9858 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  uVar1 = DAT_028c9860;
  DAT_028c9860 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&DAT_028c9868,*(undefined8 *)(param_1 + 0x38));
  return;
}

