// chatRecordSearchVisibleForCurrentUser @ 00faaf98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineHelper::chatRecordSearchVisibleForCurrentUser(WCRefineHelper *this,ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined8 *puVar6;
  double in_d0;
  ID local_70;
  byte local_61;
  undefined *local_60;
  byte local_52;
  byte local_51;
  double local_50;
  SEL local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  _CFAbsoluteTimeGetCurrent();
  local_50 = in_d0;
  _os_unfair_lock_lock(&DAT_028e2f74);
  local_51 = (DAT_028e2f80 & 1) != 0 && local_50 - DAT_028e2f78 < 1.0;
  local_52 = DAT_028e2f81 & 1;
  _os_unfair_lock_unlock(&DAT_028e2f74);
  if ((local_51 & 1) == 0) {
    puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_61 = 0;
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_all);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
      bVar1 = (byte)puVar2;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_isEqualToString__0269ccc8,&cf_internal_only);
        bVar1 = (byte)puVar2;
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_isEqualToString__0269ccc8,&cf_authorized_only);
          bVar1 = (byte)puVar2;
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
            if (((ulong)puVar2 & 1) == 0) {
              IVar4 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCurrentUserWxid_0269e148);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              IVar5 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_70 = IVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(IVar4);
              IVar4 = local_70;
              puVar6 = &local_30;
              uStack_28 = _UNK_0232c5c8;
              local_30 = _DAT_0232c5c0;
              uStack_21 = DAT_0232c5cf;
              FUN_00faa9c4(puVar6,0x13);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8);
              local_61 = (byte)IVar4;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              _objc_storeStrong(&local_70,0);
            }
            else {
              local_61 = 0;
            }
          }
          else {
            FUN_009724d8();
            local_61 = bVar1;
          }
        }
        else {
          FUN_00963008();
          local_61 = bVar1;
        }
      }
      else {
        FUN_00966a44();
        local_61 = bVar1;
      }
    }
    else {
      local_61 = 1;
    }
    _os_unfair_lock_lock();
    DAT_028e2f81 = local_61 & 1;
    DAT_028e2f78 = local_50;
    DAT_028e2f80 = 1;
    _os_unfair_lock_unlock(&DAT_028e2f74);
    local_31 = local_61 & 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_31 = local_52 & 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_31 & 1;
}

