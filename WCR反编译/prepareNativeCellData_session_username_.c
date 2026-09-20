// prepareNativeCellData:session:username: @ 01a95150

/* Function Stack Size: 0x28 bytes */

void WCRefineGroupDataProvider::prepareNativeCellData_session_username_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_200;
  undefined *local_1f8;
  ID local_1c8;
  ID local_1c0;
  ulong local_1b8 [4];
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined4 local_144;
  long local_140;
  ID local_138;
  ulong local_130;
  SEL local_128;
  ID local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  local_128 = param_2;
  local_120 = param_1;
  _objc_storeStrong(&local_130,param_3);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_4);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_5);
  if (local_130 == 0) {
    local_144 = 1;
  }
  else {
    _memset(auStack_190,0,0x40);
    local_c8 = &cf_updateDataFieldForUI;
    local_c0 = &cf_makeTextForNameLabel;
    local_b8 = &cf_makeTextForMessageLabel;
    local_b0 = &cf_updateTextForTimeLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f8 != (undefined *)0x0) {
      lVar6 = *local_180;
      local_200 = (undefined *)0x0;
      do {
        do {
          if (*local_180 - lVar6 != 0) {
            _objc_enumerationMutation(*local_180 - lVar6,puVar1);
          }
          uVar7 = *(undefined8 *)(local_188 + (long)local_200 * 8);
          local_150 = uVar7;
          _NSSelectorFromString();
          uVar2 = local_130;
          local_198 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_respondsToSelector__026ca818,uVar7);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,local_198);
          }
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_200 = (undefined *)0x0;
      } while (local_1f8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_130;
    local_d8 = &cf_m_textForNameLabel;
    local_d0 = &cf_textForNameLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a93950();
    _objc_retainAutoreleasedReturnValue();
    local_1b8[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_1b8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8[0],PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_1b8[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_1b8[0],PTR_s_isEqualToString__0269ccc8,local_140)
       , (uVar2 & 1) != 0)) {
      IVar3 = local_138;
      FUN_01a91e98(local_138,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_120;
      lVar6 = local_140;
      local_1c0 = IVar3;
      if (IVar3 == 0) {
        IVar4 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contactManager_026ab1d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_contactForUserName_manager__026bd9d0,lVar6);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_1c0;
        local_1c0 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar5 = local_1c0;
      local_118 = &cf_m_nsRemark;
      local_110 = &cf_m_nsRemarkName;
      local_108 = &cf_getRemark;
      local_100 = &cf_getRemarkName;
      local_f8 = &cf_m_nsNickName;
      local_f0 = &cf_getDisplayName;
      local_e8 = &cf_getNickName;
      local_e0 = &cf_nickname;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_118,8);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a93950();
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = IVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar5 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
      if (IVar5 != 0) {
        FUN_01a95728(IVar5,local_130,&cf_m_textForNameLabel,local_1c8);
      }
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1c0,0);
    }
    lVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      FUN_01a95728(lVar6,local_130,&cf_m_nsHeadImgUsrName,local_140);
    }
    _objc_storeStrong(local_1b8,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

