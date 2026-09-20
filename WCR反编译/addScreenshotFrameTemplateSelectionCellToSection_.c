// addScreenshotFrameTemplateSelectionCellToSection: @ 017efe58

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::addScreenshotFrameTemplateSelectionCellToSection_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf__gb;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameTemplate_026a7498);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  bVar1 = false;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (bVar1) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 1);
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_58,0);
    }
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_50,0);
  }
  pcVar4 = "WCTableViewNormalCellManager";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addCell__0269e3f8,pcVar4);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

