// FUN_0053f370 @ 0053f370

void FUN_0053f370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long local_b8;
  uint local_a0;
  long local_70;
  long local_68;
  byte local_5d;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsDraftEnabled_026a4d60);
  local_a0 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    lVar4 = local_28;
    FUN_0054255c();
    local_a0 = (uint)lVar4 ^ 1;
  }
  local_5d = (byte)local_a0 & 1;
  bVar2 = (local_a0 & 1) == 0;
  if (bVar2) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_28;
    _objc_getAssociatedObject(local_28,_kWCRefineDraftEditingIndexKey);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_b8;
  if (!bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  bVar2 = false;
  if ((local_5d & 1) != 0) {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_deleteDraftAfterPost_026a4dc0);
    bVar2 = false;
    if ((((ulong)puVar3 & 1) != 0) && (bVar2 = false, local_68 != 0)) {
      lVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
      bVar2 = -1 < lVar4;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
  }
  lVar4 = local_28;
  uVar1 = DAT_026f4360;
  if ((local_5d & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar4,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*DAT_028cb310)(local_28,local_30,local_38,local_40,local_48);
  if (bVar2) {
    puVar3 = PTR_WCRefineMomentsDraftManager_026ce740;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

