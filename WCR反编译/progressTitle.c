// progressTitle @ 00f749e0

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineFriendRelationChecker::progressTitle
          (WCRefineFriendRelationChecker *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  cfstringStruct *local_170;
  bool local_99;
  cfstringStruct *local_98;
  ID local_88;
  ID local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rechecking_026aca80);
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((param_1 & 1) == 0) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_status_026a1830);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_isEqualToString__0269ccc8,_kWCRFriendRelationStatusRunning);
    if ((IVar1 & 1) == 0) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,_kWCRFriendRelationStatusPaused);
      if ((IVar1 & 1) == 0) {
        IVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,_kWCRFriendRelationStatusCompleted);
        if ((IVar1 & 1) == 0) {
          IVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pendingUserNames_026acad0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_170 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (IVar4 == 0) {
            local_170 = &cf_bVT;
          }
          else {
            local_88 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pendingUserNames_026acad0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_stringWithFormat__0269cca8,&cf__hKm);
            _objc_retainAutoreleasedReturnValue();
            local_98 = local_170;
          }
          local_99 = IVar4 != 0;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = local_170;
          if (local_99) {
            (*(code *)PTR__objc_release_02578630)(local_98);
            (*(code *)PTR__objc_release_02578630)(local_88);
          }
          (*(code *)PTR__objc_release_02578630)(IVar1);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_hKm_b;
        }
      }
      else {
        IVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pauseReason_026acac8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        if ((IVar4 & 1) == 0) {
          IVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queueCount_026acab8);
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cursor_026acaa8);
          if (IVar4 < IVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queueCount_026acab8);
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cursor_026acaa8);
          }
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf__f_PiRYO);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar3;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf__eNQ___8__f_P;
        }
      }
    }
    else {
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_snap_026aca78);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      dVar5 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (in_d0 - dVar5 <= 0.0) {
        IVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentDisplayName_026acac0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_progressCompletedCount_026aca48);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_progressTotalCount_026aca38);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_ck_WhKm);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_progressCompletedCount_026aca48);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_progressTotalCount_026aca38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf__eNQ__A___);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentDisplayName_026acac0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_recheckCursor_026acaa0);
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_recheckQueue_026acab0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_Yh);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

