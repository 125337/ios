// FUN_004528d4 @ 004528d4

void FUN_004528d4(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_other_local_emoticon_board_tab;
  _WCRPluginIconResolvedTitle(&cf_other_local_emoticon_board_tab,&cf__g0Wh_N_);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf__g0Wh_N_;
  }
  else {
    local_38 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

