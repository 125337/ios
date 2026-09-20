// FUN_00767de4 @ 00767de4

void FUN_00767de4(double param_1,cfstringStruct *param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  cfstringStruct *local_4f8;
  cfstringStruct *local_340;
  undefined *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_230;
  undefined *local_228;
  uint local_21c;
  double local_210;
  undefined1 *local_208;
  undefined *local_200;
  cfstringStruct *local_1f8;
  undefined8 local_1f0;
  cfstringStruct *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8 [3];
  int local_1bc;
  cfstringStruct *local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  undefined *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158 [3];
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined8 local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined8 local_108;
  cfstringStruct *local_100;
  undefined *local_f8 [5];
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (cfstringStruct *)0x0;
  local_128 = param_3;
  local_120 = param_2;
  _objc_storeStrong(&local_130,param_4);
  local_138 = (cfstringStruct *)0x0;
  pcVar1 = local_120;
  FUN_0076b520();
  local_139 = (byte)pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_158[0] = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_130;
  local_160 = &cf___;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128);
    if (((ulong)pcVar1 & 1) != 0) {
      local_50 = &cf_amount;
      local_48 = &cf_m_amount;
      local_40 = &cf_m_uiAmount;
      local_38 = &cf_selectedAmount;
      local_30 = &cf_currentAmount;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar2;
      _memset(auStack_1b0,0,0x40);
      puVar2 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_d0,0x10)
      ;
      if (local_2a8 != (undefined *)0x0) {
        lVar6 = *local_1a0;
        local_2b0 = (undefined *)0x0;
        do {
          do {
            if (*local_1a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar6,puVar2);
            }
            local_170 = *(undefined8 *)(local_1a8 + (long)local_2b0 * 8);
            pcVar1 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_valueForKey__0269d128,local_170);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = pcVar1;
            if (pcVar1 == (cfstringStruct *)0x0) {
LAB_00768238:
              local_1bc = 0;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)pcVar1 & 1) == 0) goto LAB_00768238;
              pcVar1 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_longLongValue_0269d5e0);
              pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              local_138 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_arg_kvc___);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_158[0];
              local_158[0] = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              local_1bc = 6;
            }
            _objc_storeStrong(&local_1b8,0);
            if (local_1bc != 0) goto LAB_007682d0;
            local_2b0 = local_2b0 + 1;
          } while (local_2b0 < local_2a8);
          local_2a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_d0,
                     0x10);
          local_2b0 = (undefined *)0x0;
        } while (local_2a8 != (undefined *)0x0);
      }
      local_1bc = 0;
LAB_007682d0:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_168,0);
    }
  }
  else {
    pcVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_longLongValue_0269d5e0);
    local_138 = pcVar1;
    _objc_storeStrong(local_158,&cf_arg_number);
  }
  pcVar1 = local_130;
  if (local_138 == (cfstringStruct *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_titleForState__026a2208,0);
      _objc_retainAutoreleasedReturnValue();
      local_340 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_340 = &cf___;
      }
      _objc_storeStrong(&local_160,local_340);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_160;
        pcVar4 = local_160;
        local_1d8[0] = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
        local_110 = 0;
        local_108 = 0;
        local_1f0 = 0;
        local_1e8 = pcVar4;
        local_118 = pcVar4;
        local_100 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,pcVar1,0,0,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = puVar2;
        if ((puVar2 != (undefined1 *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberOfRanges_0269ef18),
           pcVar1 = local_160, (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar2)) {
          puVar5 = local_1e0;
          puVar2 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_rangeAtIndex__0269ef20,1);
          local_208 = puVar5;
          local_200 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_substringWithRange__0269d138,puVar5,puVar2);
          _objc_retainAutoreleasedReturnValue();
          local_1f8 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_doubleValue_026ca608);
          local_210 = param_1;
          if (0.0 < param_1) {
            param_1 = param_1 * 100.0;
            local_138 = (cfstringStruct *)(long)param_1;
            _objc_storeStrong(local_158,&cf_arg_buttonTitle);
          }
          _objc_storeStrong(&local_1f8,0);
        }
        _objc_storeStrong(&local_1e0);
        _objc_storeStrong(local_1d8,0);
      }
    }
  }
  if (local_138 == (cfstringStruct *)0x0) {
    local_f8[0] = PTR_s_currentAmount_026a7dc0;
    local_f8[1] = PTR_s_selectedAmount_026a7dc8;
    local_f8[2] = PTR_s_amount_026a7dd0;
    local_f8[3] = PTR_s_m_amount_026a7dd8;
    local_f8[4] = PTR_s_m_uiAmount_026a7de0;
    for (local_21c = 0; local_21c < 5; local_21c = local_21c + 1) {
      local_228 = local_f8[(int)local_21c];
      pcVar1 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_respondsToSelector__026ca818,local_228);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_performSelector__026ca7b8,local_228);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_230 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar1 & 1) == 0) {
          local_1bc = 0;
        }
        else {
          pcVar4 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_longLongValue_0269d5e0);
          pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          puVar2 = local_228;
          local_138 = pcVar4;
          _NSStringFromSelector();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_stringWithFormat__0269cca8,&cf_self_selector___);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_158[0];
          local_158[0] = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_1bc = 0xd;
        }
        _objc_storeStrong(&local_230,0);
        if (local_1bc != 0) break;
      }
    }
  }
  if (0 < (long)local_138) {
    if ((local_139 & 1) == 0) {
      FUN_0076bfd0();
    }
    else {
      if (DAT_028cc8b0 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = DAT_028cc8b0;
        DAT_028cc8b0 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc8b0,PTR_s_removeAllObjects_0269d508);
      }
      FUN_0076bc54();
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_hasRewardAction
                );
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                 &cf_pendingTimestamp);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                 &cf_fromPluginSponsorPage);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_pluginReward,
                 &cf_rewardActionType);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                 &cf_tapAmountInCents);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(long)local_138 / 100.0,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_tapAmountInYuan
                );
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar7 = (double)(long)local_138 / 100.0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_amount);
      (*(code *)PTR__objc_release_02578630)();
      FUN_0076be80();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_wxid);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_timestamp);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_158[0] == (cfstringStruct *)0x0) {
        local_4f8 = &cf___;
      }
      else {
        local_4f8 = local_158[0];
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,local_4f8,
                 &cf_tapAmountSource);
      pcVar1 = local_130;
      FUN_0076beb0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar1,&cf_tapArgClass);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  (*DAT_028cc8c8)(local_120,local_128,local_130);
  _objc_storeStrong(&local_160);
  _objc_storeStrong(local_158,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

