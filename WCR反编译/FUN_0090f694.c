// FUN_0090f694 @ 0090f694

void FUN_0090f694(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_getLogsForType_026aa1a8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  if ((lVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_getEmptyMessage_026aa1b0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_logTextView_026a9fc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_statsLabel_026aa138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_3c = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_logType_026aa0f8);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_updateNavigationLogs__026aa1b8,local_38);
    }
    else {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x20);
      local_48 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar5,PTR_s_filteredLinesByKeywordFromLines__026aa1c0,lVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_count_0269cfe0);
      bVar1 = false;
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_keywordFilter_026aa188);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = lVar2 != 0;
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      if (bVar1) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_logTextView_026a9fc0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_renderNSLogLines__026aa1c8,local_50);
      }
      lVar5 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_keywordFilter_026aa188);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (lVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_N);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_statsLabel_026aa138);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_keywordFilter_026aa188);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_N);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_statsLabel_026aa138);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

