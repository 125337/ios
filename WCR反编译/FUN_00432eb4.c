// FUN_00432eb4 @ 00432eb4

void FUN_00432eb4(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  
  pcVar1 = "MMThemeManager";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_getValueOfProperty_inRuleSet_;
    _NSSelectorFromString();
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar3 != (char *)0x0) {
      FUN_00433070(pcVar1,pcVar2,FUN_0043310c,&DAT_028ca868);
    }
  }
  pcVar1 = "CLocalInfo";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_00433070(pcVar1,PTR_s_m_uiGlobalFontLevel_026a3898,FUN_00433590,&DAT_028ca870);
  }
  pcVar1 = "RoomContentLogicController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_getMemeberCountLabel;
    _NSSelectorFromString();
    pcVar3 = pcVar1;
    _class_getInstanceMethod(pcVar1,pcVar2);
    if (pcVar3 != (char *)0x0) {
      FUN_00433070(pcVar1,pcVar2,FUN_004336b4,&DAT_028ca878);
    }
  }
  return;
}

