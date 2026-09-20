// scoreMessageWrap:forRecord: @ 01b2d3d0

/* Function Stack Size: 0x20 bytes */

long_long __thiscall
WCRefineKeywordAlertHistoryViewController::scoreMessageWrap_forRecord_
          (WCRefineKeywordAlertHistoryViewController *this,ID param_1,SEL param_2,ID param_3,
          ID param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  int iVar6;
  double in_d0;
  double dVar7;
  long_long local_158;
  long_long local_150;
  double local_140;
  ulong local_128;
  ulong local_110;
  ulong local_f8;
  bool local_b1;
  ulong local_b0;
  bool local_99;
  ulong local_98;
  bool local_81;
  ulong local_80;
  bool local_69;
  ulong local_68;
  long_long local_58;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  long_long local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_40 == 0) || (local_48 == 0)) {
    local_28 = 0x8000000000000000;
  }
  else {
    local_58 = 0;
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = (uVar4 & 1) == 0;
    if (local_69) {
      local_f8 = 0;
    }
    else {
      local_68 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_69 = !local_69;
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_81 = (uVar4 & 1) == 0;
    if (local_81) {
      local_110 = 0;
    }
    else {
      local_80 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_81 = !local_81;
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageType);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_99 = (uVar4 & 1) == 0;
    if (local_99) {
      local_128 = 0;
    }
    else {
      local_98 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageType);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_99 = !local_99;
    if (local_99) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b1 = (uVar4 & 1) == 0;
    if (local_b1) {
      local_140 = 0.0;
    }
    else {
      local_b0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_140 = in_d0;
    }
    local_b1 = !local_b1;
    if (local_b1) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (0 < (long)local_f8) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMesLocalID_0269d238);
      lVar2 = (uVar3 & 0xffffffff) - local_f8;
      lVar1 = -lVar2;
      if (0 < lVar2) {
        lVar1 = lVar2;
      }
      if (lVar1 == 0) {
        local_150 = 0x96;
      }
      else {
        local_158 = lVar1 * -4 + 0x28;
        if ((long)local_158 < 1) {
          local_158 = 0;
        }
        local_150 = local_158;
      }
      local_58 = local_150;
    }
    if ((0 < (long)local_110) &&
       (uVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_n64MesSvrID_0269d3e0),
       uVar3 == local_110)) {
      local_58 = local_58 + 0x96;
    }
    if ((0 < (long)local_128) &&
       (uVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiMessageType_0269d0a8),
       (long)(int)uVar3 == local_128)) {
      local_58 = local_58 + 0x14;
    }
    if (0.0 < local_140) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_uiCreateTime_0269d208);
      dVar7 = ABS((double)(uVar3 & 0xffffffff) - local_140);
      if (dVar7 <= 180.0) {
        iVar6 = 0x28;
        if (3.0 <= dVar7) {
          iVar6 = 0xf;
        }
        local_58 = local_58 + (long)iVar6;
      }
    }
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_historyRecord_matchesMessageWrap_026bee70,local_48,local_40);
    if ((IVar5 & 1) != 0) {
      local_58 = local_58 + 200;
    }
    local_28 = local_58;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

