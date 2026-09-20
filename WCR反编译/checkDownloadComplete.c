// checkDownloadComplete @ 0059b1c4

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMediaDownloader::checkDownloadComplete(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  ID local_58;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasFinished_026a5640);
  if ((param_1 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completedCount_026a5620);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    local_39 = 0;
    bVar1 = true;
    if ((long)IVar2 < (long)IVar3) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadedCount_026a5628);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
      bVar1 = true;
      if ((long)IVar2 < (long)IVar3) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadedCount_026a5628);
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
        _objc_retainAutoreleasedReturnValue();
        local_39 = 1;
        local_38 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
        bVar1 = IVar4 <= IVar2 + IVar3;
      }
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeoutTimer_026a5660);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimeoutTimer__026a5658,0);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (IVar3 != 0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
        bVar1 = IVar4 <= IVar3;
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (bVar1) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_ZSON_1Y_);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar5;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_completeWithSuccess_errorMessage_026a5610,0,local_68);
        _objc_storeStrong(&local_68,0);
      }
      else {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (IVar3 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_completeWithSuccess_errorMessage_026a5610,1,0);
        }
        else {
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_failedMedia_026a5618);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_RZSON_1Y_);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar5;
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_completeWithSuccess_errorMessage_026a5610,0,local_70);
          _objc_storeStrong(&local_70,0);
        }
      }
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadMgr_026a5680);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 != 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_downloadMgr_026a5680);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDownloadMgr__026a5688,0);
      }
    }
  }
  return;
}

