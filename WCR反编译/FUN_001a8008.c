// FUN_001a8008 @ 001a8008

byte FUN_001a8008(double param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  byte local_23;
  byte local_11;
  
  _CFAbsoluteTimeGetCurrent();
  _os_unfair_lock_lock(&DAT_028c8a60);
  local_23 = DAT_028c8a71;
  bVar1 = DAT_028c8a70 & 1;
  dVar4 = param_1 - DAT_028c8a68;
  _os_unfair_lock_unlock(&DAT_028c8a60);
  if (bVar1 == 0 || 1.0 <= dVar4) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_23 = (byte)puVar3;
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_searchRecordsByWxidVisibleForCur_0269fe80);
      local_23 = (byte)puVar2;
    }
    _os_unfair_lock_lock();
    DAT_028c8a71 = local_23 & 1;
    DAT_028c8a70 = 1;
    DAT_028c8a68 = param_1;
    _os_unfair_lock_unlock(&DAT_028c8a60);
  }
  local_11 = local_23 & 1;
  return local_11;
}

