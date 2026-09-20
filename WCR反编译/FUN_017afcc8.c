// FUN_017afcc8 @ 017afcc8

/* WARNING: Removing unreachable block (ram,0x017aff88) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017afcc8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *local_1c0;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_30 = param_5;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_1c0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_1c0 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_1c0;
  }
  local_71 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_1c0;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  FUN_017b04d0(local_38,*(undefined8 *)(param_5 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  dVar9 = param_1;
  dVar10 = param_2;
  local_80 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_safeAreaInsets_026ca828);
    dVar8 = param_1;
    dVar11 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_frame_026ca640);
    dVar9 = param_3;
    dVar10 = param_1;
    param_4 = dVar8;
    if (param_1 < param_3) {
      param_4 = dVar11 + (param_3 - param_1);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFrame__026ca960);
      dVar9 = dVar8;
      dVar10 = param_1;
      param_3 = param_2;
    }
  }
  lVar4 = *(long *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar6 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar5);
  }
  (*(code *)PTR__objc_release_02578630)(lVar4);
  if (bVar1) {
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if (0.0 < dVar10) {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,0,param_3,param_4);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_38,0);
  return;
}

