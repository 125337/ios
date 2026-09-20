// FUN_0039ba90 @ 0039ba90

byte FUN_0039ba90(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_28;
  long local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineTelegramTabStripView_026ce638;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramTabStripView_026ce638,PTR_s_occupiesSectionHeader__026a3200,param_1
            );
  if (((ulong)puVar2 & 1) != 0) {
    local_11 = 1;
    goto LAB_0039bc2c;
  }
  if (local_20 != 0) {
    local_11 = 0;
    goto LAB_0039bc2c;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardEnabled_026a3208);
  if (((ulong)puVar2 & 1) == 0) {
LAB_0039bb6c:
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeAvatarStripEnabled_026a2568);
    bVar1 = false;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeAvatarStripSectionOffset_026a23d0);
      bVar1 = -1 < (long)puVar2;
    }
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardCustomSectionOffset_026a2578);
    bVar1 = true;
    if ((long)puVar2 < 0) goto LAB_0039bb6c;
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameSpacingUnifyEnabled_026a2d70);
  local_11 = true;
  if (((ulong)puVar2 & 1) != 0) {
    local_11 = bVar1;
  }
  _objc_storeStrong(&local_28,0);
LAB_0039bc2c:
  return local_11 & 1;
}

