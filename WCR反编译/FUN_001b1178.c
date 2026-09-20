// FUN_001b1178 @ 001b1178

void FUN_001b1178(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_138;
  long local_118;
  undefined *local_c8;
  byte local_b9;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_94;
  undefined *local_90 [3];
  long local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_2);
  lVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar2;
  _os_unfair_lock_lock(&DAT_028c8a48);
  puVar3 = DAT_028c89c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c89c0,PTR_s_objectForKeyedSubscript__0269d098,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_90[0] = puVar3;
  _os_unfair_lock_unlock(&DAT_028c8a48);
  puVar3 = local_90[0];
  if (local_90[0] == (undefined *)0x0) {
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               local_68);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = local_68;
      FUN_001b1788();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = lVar2;
      if (lVar2 == 0) {
        local_60 = (undefined *)0x0;
        local_94 = 1;
      }
      else {
        FUN_001b1948(lVar2,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 0;
        bVar1 = local_70 == 0;
        local_a8 = lVar2;
        if (bVar1) {
          local_118 = local_68;
          FUN_001b21e4(local_68,lVar2,local_a0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_118;
        }
        else {
          local_118 = local_70;
        }
        local_b9 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_118;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if (local_b0 == 0) {
          local_60 = (undefined *)0x0;
          local_94 = 1;
        }
        else {
          local_58 = &cf_query;
          lVar2 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
          if (lVar2 == 0) {
            local_138 = local_68;
          }
          else {
            local_138 = local_a8;
          }
          local_40 = local_138;
          local_50 = &cf_contact;
          local_38 = local_b0;
          local_48 = &cf_groupMember;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _os_unfair_lock_lock(&DAT_028c8a48);
          if (DAT_028c89c0 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = DAT_028c89c0;
            DAT_028c89c0 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c89c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,local_78);
          _os_unfair_lock_unlock(&DAT_028c8a48);
          puVar3 = local_c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = puVar3;
          local_94 = 1;
          _objc_storeStrong(&local_c8,0);
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    else {
      local_60 = (undefined *)0x0;
      local_94 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar3;
    local_94 = 1;
  }
  _objc_storeStrong(local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_60);
  return;
}

