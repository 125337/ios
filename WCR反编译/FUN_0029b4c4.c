// FUN_0029b4c4 @ 0029b4c4

void FUN_0029b4c4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *local_58;
  undefined *local_48;
  undefined *local_40 [2];
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf_ck_WYt_;
  }
  else {
    local_58 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if ((DAT_028c9578 == 0) ||
     (pcVar1 = DAT_028c9580,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9580,PTR_s_isEqualToString__0269ccc8,local_58),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
    pcVar1 = DAT_028c9580;
    DAT_028c9580 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    uVar4 = DAT_028c9578;
    if (DAT_028c9578 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_setValue_forKey__0269d300,puVar3,&cf_loadingStyle);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar4 = DAT_028c9578;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c9578,PTR_s_respondsToSelector__026ca818,PTR_s_showToastWithText__026a18d8);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c9578,PTR_s_showToastWithText__026a18d8,local_20);
        local_30 = 1;
        goto LAB_0029b904;
      }
    }
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar3;
    if (puVar3 == (undefined *)0x0) {
      FUN_0028cf78();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      if ((puVar3 == (undefined *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_respondsToSelector__026ca818,
                     PTR_s_startLoadingWithText_block__026a1878), ((ulong)puVar3 & 1) == 0)) {
        if ((local_48 != (undefined *)0x0) &&
           (puVar3 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_startLoadingBlocked_026a1870
                     ), ((ulong)puVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_startLoadingBlocked_026a1870);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_startLoadingWithText_block__026a1878,local_20,1);
      }
      _objc_storeStrong(&local_48,0);
      local_30 = 0;
    }
    else {
      _objc_storeStrong(&DAT_028c9578,puVar3);
      local_30 = 1;
    }
    _objc_storeStrong(local_40,0);
  }
  else {
    local_30 = 1;
  }
LAB_0029b904:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

