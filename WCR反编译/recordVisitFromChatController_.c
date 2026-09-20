// recordVisitFromChatController: @ 014e8d28

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSessionStatsEngine::recordVisitFromChatController_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  double in_d0;
  uint local_f4;
  undefined1 *local_b0;
  undefined1 *local_a0;
  byte local_91;
  undefined1 *local_90;
  uint local_88;
  uint local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  double local_70;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined1 *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_3c = 1;
  }
  else if (local_38 == (undefined1 *)0x0) {
    local_3c = 1;
  }
  else {
    local_48 = (undefined1 *)0x0;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_48 == (undefined1 *)0x0) &&
       (puVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
       ((ulong)puVar2 & 1) != 0)) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GetContact_0269d2c0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_50 = (undefined *)0x0;
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_50;
    FUN_014dfa54();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined1 *)0x0) ||
       (puVar2 = local_50, FUN_014e76b8(), ((ulong)puVar2 & 1) != 0)) {
      local_3c = 1;
    }
    else {
      puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                 local_50);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        local_70 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,DAT_028e36f0)
        ;
        if ((((ulong)puVar2 & 1) == 0) || (12.0 <= local_70 - DAT_028e36f8)) {
          puVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
          puVar4 = DAT_028e36f0;
          DAT_028e36f0 = puVar2;
          (*(code *)PTR__objc_release_02578630)();
          DAT_028e36f8 = local_70;
          FUN_014e41d8();
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_objectForKeyedSubscript__0269d098,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar4;
          if (puVar4 == (undefined1 *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_80;
            local_80 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,local_50);
          }
          puVar4 = local_80;
          local_84 = (uint)local_70;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_84);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (local_84 < 0x76a701) {
            local_f4 = 0;
          }
          else {
            local_f4 = local_84 - 0x76a700;
          }
          local_88 = local_f4;
          do {
            puVar4 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            local_91 = 0;
            bVar1 = true;
            if (puVar4 < (undefined1 *)((long)&section_00000108.addr + 5)) {
              puVar4 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
              bVar1 = false;
              if (puVar4 != (undefined1 *)0x0) {
                puVar4 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                local_91 = 1;
                local_90 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar1 = (uint)puVar4 < local_88;
              }
            }
            if ((local_91 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_90);
            }
            if (!bVar1) break;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObjectAtIndex__0269d530,0);
            puVar4 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
          } while (puVar4 != (undefined1 *)0x0);
          puVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
          if (&section_00000158.reloff < puVar4) {
            puVar4 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_keysSortedByValueUsingComparator_026af880,
                       &PTR___NSConcreteGlobalBlock_025860b8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = local_78;
            local_a0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
            local_b0 = (undefined1 *)0x0;
            while( true ) {
              bVar1 = false;
              if (local_b0 < puVar5 + -0x168) {
                puVar4 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
                bVar1 = local_b0 < puVar4;
              }
              puVar4 = local_78;
              if (!bVar1) break;
              puVar6 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_removeObjectForKey__0269d700);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_b0 = local_b0 + 1;
            }
            _objc_storeStrong(&local_a0,0);
          }
          FUN_014e9700();
          _objc_storeStrong(&local_80);
          _objc_storeStrong(&local_78,0);
          local_3c = 0;
        }
        else {
          local_3c = 1;
        }
      }
      else {
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

