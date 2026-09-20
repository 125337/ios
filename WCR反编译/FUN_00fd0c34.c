// FUN_00fd0c34 @ 00fd0c34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fd0c34(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined *local_1d8;
  undefined *local_150;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double dStack_f8;
  undefined *local_f0;
  byte local_e1;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  char local_71;
  undefined *local_70;
  int local_64;
  code *local_60;
  long local_58;
  ulong local_50;
  undefined *local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (undefined *)0x0;
  local_40 = param_5;
  _objc_storeStrong(&local_48);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_7);
  local_60 = *(code **)(param_5 + 0x20);
  puVar2 = local_48;
  local_58 = param_5;
  _objc_getAssociatedObject(local_48,&DAT_028e3045);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    (*local_60)(local_48,*(undefined8 *)(param_5 + 0x28),local_50);
    local_64 = 1;
    goto LAB_00fd1440;
  }
  puVar2 = local_48;
  _objc_getAssociatedObject(local_48,&DAT_028e3040);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_tag_026cab98);
  local_81 = 0;
  local_91 = 0;
  bVar1 = true;
  if (puVar2 != (undefined *)0x7f152) {
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableHeaderView_0269ea08);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (puVar2 != (undefined *)0x7f152) {
      puVar2 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028e3047);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      bVar1 = puVar2 != (undefined *)0x0;
      local_90 = puVar2;
    }
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_71 = bVar1;
  if ((bVar1 == false) ||
     (puVar2 = PTR_WCRefineHomeTableHeaderHost_026ce570,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_wantsTableHeader_026ad198),
     ((ulong)puVar2 & 1) == 0)) {
    (*local_60)(local_48,*(undefined8 *)(param_5 + 0x28),local_50);
    local_64 = 1;
  }
  else {
    uVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tag_026cab98);
    if (uVar4 == 0x7f152) {
      (*local_60)(local_48,*(undefined8 *)(param_5 + 0x28),local_50);
      local_64 = 1;
    }
    else {
      uVar4 = local_50;
      FUN_00fcee64();
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        dVar8 = 1.0;
        local_c0 = param_1;
        local_b8 = param_2;
        local_b0 = param_3;
        local_a8 = param_4;
        local_a0 = param_3;
        if (param_3 < 1.0) {
          puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          dVar6 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_e0 = param_3;
          local_d8 = dVar8;
          local_d0 = dVar6;
          local_c8 = param_4;
          local_a0 = dVar6;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        local_e1 = (byte)local_48;
        FUN_00fd148c();
        puVar2 = PTR_WCRefineHomeTableHeaderHost_026ce570;
        dVar6 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeTableHeaderHost_026ce570,
                   PTR_s_embedSearchBase_intoHostFor_widt_026ad1a0,local_50,local_48,
                   (local_e1 ^ 1) & 1);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_64 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18);
          puVar2 = local_48;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_100 = dVar6;
          dStack_f8 = dVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*local_60)(local_48,*(undefined8 *)(param_5 + 0x28),local_f0);
          _objc_setAssociatedObject(local_48,&DAT_028e3045,0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18);
          dVar7 = ABS(dVar8 - dStack_f8);
          uVar9 = 0x3fe0000000000000;
          local_110 = dVar6;
          local_108 = dVar8;
          if ((0.5 < dVar7) ||
             ((*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18),
             local_120 = dVar7, local_118 = uVar9, 0.5 < ABS(dVar7 - local_100))) {
            dStack_128 = dStack_f8;
            local_130 = local_100;
            dStack_138 = dStack_f8;
            local_140 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,dStack_f8,local_48,PTR_s_setContentOffset__0269e780);
          }
          if ((local_e1 & 1) == 0) {
            puVar2 = local_48;
            _objc_getAssociatedObject(local_48,&DAT_028e3047);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
            local_148 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_48;
            local_38 = &cf_owner;
            bVar1 = local_148 == (undefined *)0x0;
            if (bVar1) {
              local_1d8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_150 = local_1d8;
            }
            else {
              local_1d8 = local_148;
            }
            local_30 = local_1d8;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
                       &cf_com_qimiao_wcrefine_home_th_applied,puVar2);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_150);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_148,0);
          }
          local_64 = 1;
        }
        _objc_storeStrong(&local_f0,0);
        if (local_64 != 0) goto LAB_00fd1418;
      }
      (*local_60)(local_48,*(undefined8 *)(param_5 + 0x28),local_50);
      local_64 = 0;
    }
  }
LAB_00fd1418:
  _objc_storeStrong(&local_70,0);
  if (local_64 == 0) {
    local_64 = 0;
  }
LAB_00fd1440:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

