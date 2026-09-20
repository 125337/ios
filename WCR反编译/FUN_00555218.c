// FUN_00555218 @ 00555218

byte FUN_00555218(void)

{
  bool bVar1;
  undefined *puVar2;
  uint local_4c;
  undefined *local_38;
  undefined *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsAntiDeleteMomentsEnabled_026a4918);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsAntiDeleteAutoRefreshEnab_026a4920);
    if (((ulong)puVar2 & 1) != 0) {
      local_11 = 1;
      goto LAB_00555448;
    }
  }
  bVar1 = false;
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsSpecialFollowEnabled_026a4a70);
  local_4c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsSpecialFollowContacts_026a4a78);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = 0;
    if (puVar2 != (undefined *)0x0) {
      local_4c = 0;
      FUN_01138c30(&cf_moments_special_follow,0);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_4c & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
LAB_00555448:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

