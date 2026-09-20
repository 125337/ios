// textAreaWidthForSessionName:contentPages:maxWidth: @ 00ff7604

/* Function Stack Size: 0x28 bytes */

double WCRefineKeywordAlertDanmakuPresenter::textAreaWidthForSessionName_contentPages_maxWidth_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  ulong uVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double in_d2;
  double dVar8;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  ulong local_2b0;
  ulong local_2a8;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_118;
  undefined8 local_110;
  double local_108;
  ulong *local_100;
  ulong *local_f8;
  double local_f0;
  ulong local_e8;
  undefined8 local_e0;
  SEL local_d8;
  ID local_d0;
  undefined8 local_c8;
  ulong *local_c0;
  undefined1 auStack_b8 [128];
  undefined8 local_38;
  ulong *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  puVar2 = &local_e8;
  local_e8 = 0;
  _objc_storeStrong(puVar2,param_4);
  local_f0 = param_5;
  FUN_00ff0954();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar2;
  FUN_00ff0a20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_e0;
  uVar7 = 0x4034000000000000;
  dVar6 = local_f0;
  local_100 = puVar2;
  FUN_00ff10f0();
  local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  local_30 = local_f8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_118 = dVar6;
  local_110 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = local_118;
  uVar7 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_boundingRectWithSize_options_att_0269e550,1,puVar3,0);
  dVar8 = in_d2;
  local_138 = dVar6;
  local_130 = uVar7;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_140 = 0.0;
  local_108 = in_d2;
  _memset(auStack_188,0,0x40);
  uVar1 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_b8,0x10);
  if (local_2a8 != 0) {
    lVar4 = *local_178;
    local_2b0 = 0;
    do {
      do {
        dVar6 = dVar8;
        if (*local_178 - lVar4 != 0) {
          _objc_enumerationMutation(*local_178 - lVar4,uVar1);
          dVar6 = dVar8;
        }
        uVar5 = *(undefined8 *)(local_180 + local_2b0 * 8);
        local_148 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lineHeight_0269e7d8);
        FUN_00ff10f0();
        local_c8 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        local_c0 = local_100;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_boundingRectWithSize_options_att_0269e550,1,puVar3,0);
        dVar8 = dVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_2f0 = (double)(long)dVar6;
        if (local_f0 <= local_2f0) {
          local_2f0 = local_f0;
        }
        if (local_2f0 <= local_140) {
          local_2f8 = local_140;
        }
        else {
          local_2f8 = local_2f0;
        }
        local_140 = local_2f8;
        local_2b0 = local_2b0 + 1;
      } while (local_2b0 < local_2a8);
      local_2a8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_b8,0x10);
      local_2b0 = 0;
    } while (local_2a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_300 = (double)(long)local_108;
  if (local_300 < local_140) {
    local_300 = local_140;
  }
  local_308 = local_300 + 1.0;
  if (local_308 < 56.0) {
    local_308 = 56.0;
  }
  if (local_f0 <= local_308) {
    local_310 = local_f0;
  }
  else {
    local_310 = local_308;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_310;
}

