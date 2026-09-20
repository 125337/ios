// searchRecordsByWxidVisibleForCurrentUser @ 00fab3c0

/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineHelper::searchRecordsByWxidVisibleForCurrentUser
          (WCRefineHelper *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  byte local_41;
  undefined *local_40;
  byte local_32;
  byte local_31;
  double local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  _CFAbsoluteTimeGetCurrent();
  local_30 = in_d0;
  _os_unfair_lock_lock(&DAT_028e2f84);
  local_31 = (DAT_028e2f90 & 1) != 0 && local_30 - DAT_028e2f88 < 1.0;
  local_32 = DAT_028e2f91 & 1;
  _os_unfair_lock_unlock(&DAT_028e2f84);
  if ((local_31 & 1) == 0) {
    puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_all);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
      local_41 = (byte)puVar1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_authorized_only);
        local_41 = (byte)puVar1;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_hidden)
          ;
          local_41 = (byte)puVar1;
          if (((ulong)puVar1 & 1) == 0) {
            FUN_00963008();
          }
          else {
            local_41 = 0;
          }
        }
        else {
          FUN_009724d8();
        }
      }
      else {
        FUN_00966a44();
      }
    }
    else {
      local_41 = 1;
    }
    _os_unfair_lock_lock();
    DAT_028e2f91 = local_41 & 1;
    DAT_028e2f88 = local_30;
    DAT_028e2f90 = 1;
    _os_unfair_lock_unlock(&DAT_028e2f84);
    local_11 = local_41 & 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = local_32 & 1;
  }
  return local_11 & 1;
}

