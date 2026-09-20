// FUN_008902c4 @ 008902c4

void FUN_008902c4(ulong param_1)

{
  FUN_008a0c48();
  if ((param_1 & 1) != 0) {
    FUN_008a0d30("ChatBotVoIPMgr",PTR_s_enableMiniTaskPageChat_026a9638,FUN_008a0df0,&DAT_028cdd58);
    FUN_008a0d30("ChatBotVoIPMgr",PTR_s_isXiaoWeiEntryEnabled_026a9640,FUN_008a0e7c,&DAT_028cdd60);
    FUN_008a0d30("MMGrowTextViewExtConfig",PTR_s_enableAskXiaoWei_026a9648,FUN_008a0f08,
                 &DAT_028cdd68);
    FUN_008a0d30("ChatBotResMgr",PTR_s_getString__026a9650,FUN_008a0f94,&DAT_028cdd70);
  }
  return;
}

