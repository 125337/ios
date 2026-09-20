// FUN_01554c74 @ 01554c74

void FUN_01554c74(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  
  if ((*(long *)(param_5 + 0x38) == DAT_028e3998) && (DAT_028e3878 == *(long *)(param_5 + 0x20))) {
    lVar2 = *(long *)(param_5 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_5 + 0x28);
      _objc_getAssociatedObject(uVar3,DAT_028c5e78);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_5 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = lVar2 != 0;
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (!bVar1) {
        FUN_0154f2fc(*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                     *(byte *)(param_5 + 0x40) & 1);
        dVar6 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x28),PTR_s_frame_026ca640);
        if (0.5 < ABS(param_4 - param_1)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar6,param_2,param_3,param_1,*(undefined8 *)(param_5 + 0x28),
                     PTR_s_setFrame__026ca960);
        }
      }
    }
  }
  return;
}

