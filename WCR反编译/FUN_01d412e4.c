// FUN_01d412e4 @ 01d412e4

void FUN_01d412e4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_autoDetectHollowAreasAndApplyMis_026c4698,0);
  }
  return;
}

