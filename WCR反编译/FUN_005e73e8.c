// FUN_005e73e8 @ 005e73e8

void FUN_005e73e8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  (*DAT_028cb840)(param_1,param_2);
  uVar1 = param_1;
  _WCRNameplateHostIsGroupingEntry();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_isSceneEnabled__026a5d60,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_applyNameplateToMainFrameItemVie_026a3020,
               param_1,(byte)puVar2 & 1);
  }
  return;
}

