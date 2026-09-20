// FUN_01126ff8 @ 01126ff8

void FUN_01126ff8(long param_1)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double local_98;
  double local_90;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if ((uVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_invalidated_026a6d50), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    dVar1 = DAT_0232c6d8;
    if (uVar3 == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_totalCount_026a3130);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_showWithTotalCount__026a1630,uVar3);
    }
    else {
      dVar4 = DAT_0232c6d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayedProgress_026af1b0);
      if (dVar4 < dVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayedProgress_026af1b0);
        if (0.35 <= dVar4) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayedProgress_026af1b0);
          local_90 = DAT_0232c6c8;
          if (0.7 <= dVar4) {
            local_90 = DAT_0232c6d0;
          }
        }
        else {
          local_90 = DAT_0232c6c0;
        }
        local_98 = dVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayedProgress_026af1b0);
        local_98 = local_98 + local_90;
        if (dVar1 < local_98) {
          local_98 = dVar1;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,local_30,PTR_s_applyProgress_failedCount_animat_026af1b8,0,1);
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

