// momentsAutoEngageFollowsSharedRefresh @ 01c094dc

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsViewController::momentsAutoEngageFollowsSharedRefresh(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint local_48;
  undefined *local_40;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsAntiDeleteMomentsEnabled_026a4918);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsAntiDeleteAutoRefreshEnab_026a4920);
    if (((ulong)puVar2 & 1) != 0) {
      local_11 = 1;
      goto LAB_01c09690;
    }
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsSpecialFollowEnabled_026a4a70);
  bVar1 = false;
  local_48 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsSpecialFollowContacts_026a4a78);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = 0;
    if (puVar2 != (undefined *)0x0) {
      local_48 = 0;
      FUN_01138c30(&cf_moments_special_follow,0);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_48 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
LAB_01c09690:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

