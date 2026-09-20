// wcr_bindUsr:name:meta:dark: @ 01d8719c

/* Function Stack Size: 0x2c bytes */

void WCRSSActivityMemberCell::wcr_bindUsr_name_meta_dark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_290;
  ulong local_288;
  undefined *local_1f0;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  byte local_131;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  byte local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  local_d1 = (byte)param_6;
  local_e1 = 0;
  local_f1 = 0;
  local_1f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((param_6 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_1f0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f10,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_1f0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888,local_1f0);
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_101 = 0;
  local_111 = 0;
  if ((local_d1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = puVar3;
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_nameLab_026c4c88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  local_121 = 0;
  local_131 = 0;
  if ((local_d1 & 1) == 0) {
    uVar7 = 0x3ff0000000000000;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c78,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_131 = 1;
    local_130 = puVar3;
  }
  else {
    uVar7 = 0x3ff0000000000000;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d60,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = puVar3;
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_metaLab_026c4c90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_nameLab_026c4c88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_metaLab_026c4c90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _memset(auStack_180,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_288 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_288 != 0) {
    lVar5 = *local_170;
    local_290 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,IVar4);
        }
        local_140 = *(undefined8 *)(local_178 + local_290 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_removeFromSuperview_026ca800);
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_290 = 0;
    } while (local_288 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  uVar6 = 0x4046000000000000;
  puVar3 = PTR_WCRefineSessionStatsBoardView_026cf5b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSessionStatsBoardView_026cf5b8,PTR_s_headViewForUsr_size__026c4c98,local_c0
            );
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_b0;
  local_188 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,in_d2,in_d3,local_188,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setAutoresizingMask__026ca878,0x12);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

