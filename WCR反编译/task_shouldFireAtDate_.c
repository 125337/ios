// task:shouldFireAtDate: @ 014b73c8

/* Function Stack Size: 0x20 bytes */

bool __thiscall
WCRefineScheduledTask::task_shouldFireAtDate_
          (WCRefineScheduledTask *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  double in_d0;
  double dVar7;
  ID local_260;
  ID local_258;
  ID local_118;
  ID local_110;
  ID local_108;
  undefined4 local_fc;
  double local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  undefined4 local_d4;
  double local_d0;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  double local_80;
  double local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  int local_4c;
  ulong local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_48;
  if ((IVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isTaskEnabled__026a6cb8,local_40);
      if ((IVar2 & 1) == 0) {
        local_21 = 0;
        local_4c = 1;
        goto LAB_014b8430;
      }
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringArrayInTask_forKey__026a6cf0,local_40,&cf_targets);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
      if (IVar2 == 0) {
        local_21 = 0;
        local_4c = 1;
        goto LAB_014b8420;
      }
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_contentMode);
      local_60 = IVar2;
      if (IVar2 == 2) {
        IVar2 = 2;
LAB_014b76dc:
        FUN_014b3828();
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_components_fromDate__026a44c0,0x2fc,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_timeIntervalSince1970_0269cfc8);
        local_78 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_doubleInTask_forKey__026a6cd0,local_40,&cf_lastFiredAt);
        IVar4 = local_30;
        local_80 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_scheduleMode);
        IVar2 = local_30;
        local_88 = IVar4;
        if (IVar4 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_dayOfMonth);
          IVar4 = local_68;
          puVar1 = PTR_s_rangeOfUnit_inUnit_forDate__026a52d0;
          local_90 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_rangeOfUnit_inUnit_forDate__026a52d0,0x10,8,local_48);
          local_a0 = IVar4;
          local_98 = puVar1;
          if (((long)local_90 < 1) || ((long)puVar1 < (long)local_90)) {
            local_21 = 0;
            local_4c = 1;
          }
          else {
            IVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_day_026a4c38);
            if (IVar2 == local_90) {
              IVar2 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hour_026a44c8);
              IVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_hour);
              if (IVar2 == IVar4) {
                IVar4 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_minute_026a44d0);
                IVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_minute);
                IVar2 = local_68;
                if (IVar4 == IVar5) {
                  if (0.0 < local_80) {
                    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_80,PTR__OBJC_CLASS___NSDate_026cdf88,
                               PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar2,PTR_s_components_fromDate__026a44c0,0x1c);
                    _objc_retainAutoreleasedReturnValue();
                    local_a8 = IVar2;
                    (*(code *)PTR__objc_release_02578630)(puVar1);
                    IVar2 = local_a8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_year_0269fa28);
                    IVar4 = local_70;
                    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_year_0269fa28);
                    lVar6 = IVar2 - IVar4;
                    if (lVar6 == 0) {
                      IVar2 = local_a8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_month_026a52a8);
                      IVar4 = local_70;
                      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_month_026a52a8);
                      lVar6 = IVar2 - IVar4;
                      if (lVar6 != 0) goto LAB_014b7b04;
                      IVar2 = local_a8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_day_026a4c38);
                      IVar4 = local_70;
                      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_day_026a4c38);
                      lVar6 = IVar2 - IVar4;
                      if (lVar6 != 0) goto LAB_014b7b04;
                      lVar6 = 1;
                      local_21 = 0;
                      local_4c = 1;
                    }
                    else {
LAB_014b7b04:
                      local_4c = 0;
                    }
                    _objc_storeStrong(lVar6,&local_a8,0);
                    if (local_4c != 0) goto LAB_014b8400;
                  }
                  local_21 = 1;
                  local_4c = 1;
                  goto LAB_014b8400;
                }
              }
              local_21 = 0;
              local_4c = 1;
            }
            else {
              local_21 = 0;
              local_4c = 1;
            }
          }
        }
        else if (IVar4 == 1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_weekday);
          IVar4 = local_70;
          local_b0 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_weekday_026abdb0);
          FUN_014b389c();
          if (IVar4 != local_b0) {
            local_21 = 0;
            local_4c = 1;
            goto LAB_014b8400;
          }
          IVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hour_026a44c8);
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_hour);
          if (IVar2 == IVar4) {
            IVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_minute_026a44d0);
            IVar5 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_minute);
            IVar2 = local_68;
            if (IVar4 == IVar5) {
              if (0.0 < local_80) {
                puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR__OBJC_CLASS___NSDate_026cdf88,
                           PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar2,PTR_s_components_fromDate__026a44c0,0x1c);
                _objc_retainAutoreleasedReturnValue();
                local_b8 = IVar2;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                IVar2 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_year_0269fa28);
                IVar4 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_year_0269fa28);
                lVar6 = IVar2 - IVar4;
                if (lVar6 == 0) {
                  IVar2 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_month_026a52a8);
                  IVar4 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_month_026a52a8);
                  lVar6 = IVar2 - IVar4;
                  if (lVar6 != 0) goto LAB_014b7df8;
                  IVar2 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_day_026a4c38);
                  IVar4 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_day_026a4c38);
                  lVar6 = IVar2 - IVar4;
                  if (lVar6 != 0) goto LAB_014b7df8;
                  lVar6 = 1;
                  local_21 = 0;
                  local_4c = 1;
                }
                else {
LAB_014b7df8:
                  local_4c = 0;
                }
                _objc_storeStrong(lVar6,&local_b8,0);
                if (local_4c != 0) goto LAB_014b8400;
              }
              local_21 = 1;
              local_4c = 1;
              goto LAB_014b8400;
            }
          }
          local_21 = 0;
          local_4c = 1;
        }
        else {
          if (IVar4 != 2) {
            if (IVar4 == 3) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_intervalHours);
              local_d4 = 1;
              local_258 = IVar2;
              if ((long)IVar2 < 2) {
                local_258 = 1;
              }
              local_e8 = local_258;
              local_d0 = (double)(long)local_258 * 3600.0;
              local_e0 = IVar2;
              local_c8 = IVar2;
              if (0.0 < local_80) {
                local_21 = local_d0 <= local_78 - local_80;
                local_4c = 1;
              }
              else {
                local_21 = 0;
                local_4c = 1;
              }
            }
            else if (IVar4 == 4) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_intervalMinutes)
              ;
              local_fc = 1;
              local_260 = IVar2;
              if ((long)IVar2 < 2) {
                local_260 = 1;
              }
              local_110 = local_260;
              local_f8 = (double)(long)local_260 * 60.0;
              local_108 = IVar2;
              local_f0 = IVar2;
              if (0.0 < local_80) {
                local_21 = local_f8 <= local_78 - local_80;
                local_4c = 1;
              }
              else {
                local_21 = 0;
                local_4c = 1;
              }
            }
            else if (IVar4 == 5) {
              IVar4 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_onceDateText);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_onceDateFromText__026af498);
              _objc_retainAutoreleasedReturnValue();
              local_118 = IVar2;
              (*(code *)PTR__objc_release_02578630)(IVar4);
              if (local_118 == 0) {
                local_21 = 0;
              }
              else {
                dVar7 = local_78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_timeIntervalSince1970_0269cfc8);
                if (dVar7 <= local_78) {
                  if ((local_80 <= 0.0) ||
                     (dVar7 = local_80,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_118,PTR_s_timeIntervalSince1970_0269cfc8), local_80 < dVar7))
                  {
                    local_21 = 1;
                  }
                  else {
                    local_21 = 0;
                  }
                }
                else {
                  local_21 = 0;
                }
              }
              local_4c = 1;
              _objc_storeStrong(&local_118,0);
            }
            else {
              local_21 = 0;
              local_4c = 1;
            }
            goto LAB_014b8400;
          }
          IVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hour_026a44c8);
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_hour);
          if (IVar2 == IVar4) {
            IVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_minute_026a44d0);
            IVar5 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_integerInTask_forKey__026a6cc8,local_40,&cf_minute);
            IVar2 = local_68;
            if (IVar4 == IVar5) {
              if (0.0 < local_80) {
                puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR__OBJC_CLASS___NSDate_026cdf88,
                           PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar2,PTR_s_components_fromDate__026a44c0,0x1c);
                _objc_retainAutoreleasedReturnValue();
                local_c0 = IVar2;
                (*(code *)PTR__objc_release_02578630)(puVar1);
                IVar2 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_year_0269fa28);
                IVar4 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_year_0269fa28);
                lVar6 = IVar2 - IVar4;
                if (lVar6 == 0) {
                  IVar2 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_month_026a52a8);
                  IVar4 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_month_026a52a8);
                  lVar6 = IVar2 - IVar4;
                  if (lVar6 != 0) goto LAB_014b807c;
                  IVar2 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_day_026a4c38);
                  IVar4 = local_70;
                  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_day_026a4c38);
                  lVar6 = IVar2 - IVar4;
                  if (lVar6 != 0) goto LAB_014b807c;
                  lVar6 = 1;
                  local_21 = 0;
                  local_4c = 1;
                }
                else {
LAB_014b807c:
                  local_4c = 0;
                }
                _objc_storeStrong(lVar6,&local_c0,0);
                if (local_4c != 0) goto LAB_014b8400;
              }
              local_21 = 1;
              local_4c = 1;
              goto LAB_014b8400;
            }
          }
          local_21 = 0;
          local_4c = 1;
        }
LAB_014b8400:
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      else if (IVar2 == 1) {
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_stringArrayInTask_forKey__026a6cf0,local_40,&cf_repositoryCodes);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if (IVar2 != 0) goto LAB_014b76dc;
        local_21 = 0;
        local_4c = 1;
      }
      else {
        IVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_textContent);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        FUN_014b5580();
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if (IVar2 != 0) goto LAB_014b76dc;
        local_21 = 0;
        local_4c = 1;
      }
LAB_014b8420:
      _objc_storeStrong(&local_58,0);
      goto LAB_014b8430;
    }
  }
  local_21 = 0;
  local_4c = 1;
LAB_014b8430:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

