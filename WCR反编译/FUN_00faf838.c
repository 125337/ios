// FUN_00faf838 @ 00faf838

void FUN_00faf838(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = &cf_privateHideToast;
  local_28 = uVar1;
  _NSSelectorFromString();
  uVar3 = *(ulong *)(param_1 + 0x28);
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_performSelector__026ca7b8,local_30);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SeN1Y_);
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_CMessageWrap;
    _NSClassFromString();
    pcVar5 = &cf_genFileAppMsgWithFileName_filePath_fileData_;
    local_40 = pcVar2;
    _NSSelectorFromString();
    local_48 = pcVar5;
    if ((local_40 == (cfstringStruct *)0x0) ||
       (pcVar6 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar5),
       pcVar5 = local_40, pcVar2 = local_48, ((ulong)pcVar6 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___N_eceNS);
      local_34 = 1;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,pcVar2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30)
                );
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_50 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubeNmo_1Y_);
        local_34 = 1;
      }
      else {
        puVar7 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_wcr_startOfficialForwardForMessa_026acf90,
                   local_50,local_28);
        if (((ulong)puVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
        }
        local_34 = 0;
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

