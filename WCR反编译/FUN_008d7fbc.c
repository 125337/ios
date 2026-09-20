// FUN_008d7fbc @ 008d7fbc

uint FUN_008d7fbc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  uint local_40;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_lp_voice_pack_include;
  _WCRPluginIconResolvedTitle(&cf_lp_voice_pack_include,&cf__eQ);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = pcVar1;
  FUN_008d8ac4(local_18,pcVar1);
  local_40 = 1;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_18;
    FUN_008d8ac4(local_18,&cf__eQ);
    local_40 = (uint)uVar2;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_40 & 1;
}

