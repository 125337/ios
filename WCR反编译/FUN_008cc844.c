// FUN_008cc844 @ 008cc844

void FUN_008cc844(cfstringStruct *param_1,undefined8 param_2,undefined4 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_18;
  
  pcVar1 = param_1;
  FUN_008cf4a8(param_1,param_3);
  if (((ulong)pcVar1 & 1) == 0) {
    (*DAT_028ce200)(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = &cf_other_voice_pack_attachment;
    _WCRPluginIconResolvedTitle(&cf_other_voice_pack_attachment,&cf_S);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

