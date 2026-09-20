// tryInstallHomeLongPressHooks @ 00375e18

/* Function Stack Size: 0x10 bytes */

bool WCRefineHomeSessionGroupingHook::tryInstallHomeLongPressHooks(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  byte local_11;
  
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_11 = 0;
  }
  else {
    FUN_003758b0();
    if ((DAT_028ca0f9 & 1) == 0) {
      DAT_028ca0f9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_addLongPressHelpersToClass__026a2a38,pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,
                 PTR_s_tableView_willDisplayCell_forRow_0269fba8,
                 PTR_s_wcrGrouping_tableView_willDispla_026a29a0);
      pcVar2 = &cf_logicGetSessionAtIndexPath_;
      _NSSelectorFromString(&cf_logicGetSessionAtIndexPath_);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,pcVar1,pcVar2,
                 PTR_s_wcrGrouping_logicGetSessionAtInd_026a2980);
      local_11 = 1;
    }
    else {
      local_11 = 1;
    }
  }
  return (uint)local_11;
}

