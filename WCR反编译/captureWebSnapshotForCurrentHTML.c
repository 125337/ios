// captureWebSnapshotForCurrentHTML @ 01e8b57c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::captureWebSnapshotForCurrentHTML(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  double in_d0;
  double in_d1;
  double dVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  long local_108;
  undefined1 auStack_100 [24];
  ID local_e8;
  undefined1 auStack_e0 [8];
  ID local_d8;
  double local_c8;
  uint local_9c;
  double local_90;
  double local_70;
  byte local_51;
  ID local_50;
  long local_48;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = DAT_028e47d8;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_copy_0269d150);
  puVar2 = local_38;
  local_48 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
  local_51 = 0;
  bVar1 = true;
  if ((((ulong)puVar2 & 1) != 0) && (bVar1 = true, local_40 != 0)) {
    lVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    bVar1 = true;
    if (lVar5 != 0) {
      uVar4 = DAT_028e47e0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,local_48);
      bVar1 = true;
      if ((uVar4 & 1) != 0) {
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        bVar1 = true;
        local_50 = IVar3;
        if (IVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8);
          bVar1 = true;
          in_d1 = DAT_02323ec0;
          if (DAT_02323ec0 <= in_d0) {
            dVar6 = DAT_02323ec0;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
            dVar7 = 1.0;
            bVar1 = true;
            in_d1 = dVar7;
            local_70 = dVar6;
            if (1.0 < in_d2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
              in_d1 = 1.0;
              bVar1 = in_d3 <= 1.0;
              local_90 = dVar7;
            }
          }
        }
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    IVar3 = local_28;
    local_c8 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotInterfaceStyle_026c7290);
    local_d8 = IVar3;
    _objc_initWeak(auStack_e0,local_28);
    IVar3 = local_40;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01e8b9c8;
    local_110 = &DAT_0258c990;
    _objc_copyWeak(auStack_100,auStack_e0);
    lVar5 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_d8;
    local_108 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_takeSnapshotWithConfiguration_co_026a8c18,0,&local_128);
    _objc_storeStrong(&local_108,0);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_e0);
  }
  local_9c = (uint)bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

