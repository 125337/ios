// FUN_006fea68 @ 006fea68

void FUN_006fea68(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double local_158;
  double local_150;
  long local_60;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30);
  lVar3 = param_2 + 0x28;
  local_38 = param_2;
  _objc_loadWeakRetained();
  param_2 = param_2 + 0x30;
  local_40 = lVar3;
  _objc_loadWeakRetained();
  bVar1 = false;
  bVar2 = true;
  local_48 = param_2;
  if ((local_40 != 0) && (bVar2 = true, param_2 != 0)) {
    local_60 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar2 = local_60 == 0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  lVar3 = local_40;
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_invalidate_026ca758);
  }
  else {
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_exportProgressTickCount_026a72e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_setWcr_exportProgressTickCount__026a72f0,lVar4 + 1);
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_status_026a1830);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_progress_026a6d78);
    dVar6 = (double)param_1;
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_lastExportStatusLogged_026a72f8);
    if (lVar3 == lVar4) {
      dVar7 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_lastExportProgressLogged_026a7318);
      lVar4 = local_40;
      if (DAT_02323db0 <= ABS(dVar6 - dVar7)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setWcr_exportStuckTickCount__026a7308,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar6,local_40,PTR_s_setWcr_lastExportProgressLogged__026a7310);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_exportProgressTickCount_026a72e8);
      }
      else {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_exportStuckTickCount_026a7320);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar4,PTR_s_setWcr_exportStuckTickCount__026a7308,lVar5 + 1);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_exportStuckTickCount_026a7320);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setWcr_lastExportStatusLogged__026a7300,lVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setWcr_exportStuckTickCount__026a7308,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,local_40,PTR_s_setWcr_lastExportProgressLogged__026a7310);
    }
    if ((lVar3 == 4) || (lVar3 == 5)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_invalidate_026ca758);
    }
    else {
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_status_026a1830);
      if ((lVar3 == 2) ||
         (lVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_status_026a1830),
         lVar3 == 1)) {
        local_158 = DAT_02323e38;
        dVar6 = DAT_02323e38;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_progress_026a6d78);
        if (DAT_02323e40 <= (double)SUB84(dVar6,0)) {
          local_150 = DAT_02323e40;
        }
        else {
          local_150 = (double)SUB84(dVar6,0);
        }
        if (local_150 <= local_158) {
        }
        else {
          local_158 = local_150;
        }
        lVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_progressHUD_026a7178);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_158);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

