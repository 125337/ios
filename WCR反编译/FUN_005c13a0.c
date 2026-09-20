// FUN_005c13a0 @ 005c13a0

void FUN_005c13a0(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_40 [3];
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "MMLanguageMgr";
  _objc_getClass();
  FUN_005a5ba4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = PTR_s_getStringForCurLanguage__0269f768;
  local_20 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28,&cf_WCFinder_Msg_Not_Support);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = pcVar3;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40[0];
    bVar1 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
    }
    _objc_storeStrong(bVar1,local_40,0);
    if (bVar1) goto LAB_005c1560;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_S_MR_OHr_gN_ecU__yQ_GS_;
LAB_005c1560:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

