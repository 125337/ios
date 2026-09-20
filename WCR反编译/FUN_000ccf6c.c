// FUN_000ccf6c @ 000ccf6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000ccf6c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  uint uVar1;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  long local_28;
  long lVar2;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 != 0) {
    FUN_000cba84(local_28);
    lVar2 = local_28;
    uVar5 = 0x3fe0000000000000;
    if (0.5 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentInset_0269dcc8);
      FUN_000d21c8(lVar2);
      lVar2 = local_28;
      dVar3 = param_4;
      uVar6 = param_3;
      uVar7 = uVar5;
      dVar9 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentInset_0269dcc8);
      uVar1 = (uint)lVar2;
      FUN_000d22f8();
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setContentInset__0269e770);
        dVar3 = param_1;
        uVar6 = uVar5;
        uVar7 = param_3;
        dVar9 = param_4;
      }
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollIndicatorInsets_0269e880);
      FUN_000d21c8(lVar2);
      lVar2 = local_28;
      dVar4 = dVar9;
      uVar5 = uVar7;
      uVar8 = uVar6;
      dVar10 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollIndicatorInsets_0269e880);
      uVar1 = (uint)lVar2;
      FUN_000d22f8(dVar4,uVar5,uVar8,dVar10,dVar3,uVar6,uVar7,dVar9);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar3,uVar6,uVar7,dVar9,local_28,PTR_s_setScrollIndicatorInsets__0269e778);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

