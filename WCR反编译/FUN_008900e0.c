// FUN_008900e0 @ 008900e0

void FUN_008900e0(ulong param_1)

{
  byte local_19;
  ulong local_18;
  
  if ((DAT_028cdd32 & 1) == 0) {
    FUN_0089d19c();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    FUN_0089d2a0(param_1,&cf_8_0_61);
    if ((param_1 & 1) == 0) {
      local_19 = 5;
      FUN_0089d798("MicroMessengerAppDelegate",PTR_s_loadUpdateAndExcute_026a95e8,FUN_0089d838,
                   &DAT_028cdd38);
    }
    else {
      local_19 = 0xb7;
      FUN_0089d798("WCUpdateMgr",PTR_s_loadMainUpdateBundle_026a95f0,FUN_0089ded0,&DAT_028cdd40);
    }
    DAT_028cdd32 = local_19 & 1;
    _objc_storeStrong(&local_18,0);
  }
  return;
}

