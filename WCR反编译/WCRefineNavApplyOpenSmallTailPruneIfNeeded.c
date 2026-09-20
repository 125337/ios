// WCRefineNavApplyOpenSmallTailPruneIfNeeded @ 00676018

/* WCRefineNavApplyOpenSmallTailPruneIfNeeded(objc_object*) */

byte WCRefineNavApplyOpenSmallTailPruneIfNeeded(objc_object *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((DAT_026f4510 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fixOpenSmallTailPluginEnabled_026a6390);
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_20;
      FUN_00676178();
      local_11 = (byte)uVar2 & 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

