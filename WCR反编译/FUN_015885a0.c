// FUN_015885a0 @ 015885a0

void FUN_015885a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  if ((*(long *)(param_1 + 0x38) == DAT_028e3998) && (DAT_028e3878 != 0)) {
    lVar3 = DAT_028e3878;
    local_20 = param_1;
    local_18 = param_1;
    _objc_getAssociatedObject(DAT_028e3878,DAT_028c5df8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar3;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20);
    local_30 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_30);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
        if (lVar3 != 0) {
          FUN_0152ecd8(lVar3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar3);
        }
        FUN_01588724(*(undefined8 *)(param_1 + 0x30));
      }
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

