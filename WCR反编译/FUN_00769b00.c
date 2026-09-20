// FUN_00769b00 @ 00769b00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00769b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double local_1e8;
  byte local_154;
  cfstringStruct *local_118;
  ulong local_a8;
  double local_a0;
  byte local_92;
  byte local_91;
  ulong local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  byte local_62;
  undefined1 local_61;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  (*DAT_028cc8e0)(local_28,local_30,local_38,local_40);
  if (local_40 == (cfstringStruct *)0x0) {
    local_50 = 1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_oWCPayInfoItem_0269d6f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_oWCPayInfoItem_0269d6f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_118 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_118;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      dVar8 = 1.7976931348623157e+308;
      local_60 = 0x7fefffffffffffff;
      uVar5 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pluginSponsorFlowID);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      FUN_0076f5d0();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_61 = (undefined1)uVar6;
      local_71 = 0;
      local_81 = 0;
      local_91 = 0;
      uVar5 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fromPluginSponsorPage);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = (byte)uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_154 = 0;
      if ((uVar5 & 1) != 0) {
        uVar5 = DAT_028cc8b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_verifiedTargetPayee);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_154 = 0;
        if ((uVar5 & 1) != 0) {
          uVar5 = DAT_028cc8b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rewardActionType);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_80 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
          local_154 = 0;
          if ((uVar5 & 1) != 0) {
            uVar5 = DAT_028cc8b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rewardActionType);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            local_90 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_154 = (byte)uVar5;
          }
        }
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      local_92 = bVar2;
      (*(code *)PTR__objc_release_02578630)();
      local_62 = local_154 & 1;
      FUN_00770374();
      uVar5 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = DAT_028cc8b0;
      local_a0 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_wxid);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar5;
      FUN_0077276c();
      puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
      dVar9 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if (dVar8 <= 0.0) {
        local_1e8 = 1.7976931348623157e+308;
      }
      else {
        local_1e8 = ABS(dVar9 - dVar8);
      }
      if ((((DAT_028cc8b0 == 0) || (local_a0 <= 0.0)) || ((local_62 & 1) == 0)) ||
         (60.0 <= local_1e8)) {
        if (((local_92 & 1) == 0) || (local_a0 <= 0.0)) {
          bVar1 = false;
          if (DAT_028cc8b0 != 0) {
            uVar5 = DAT_028cc8b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar5 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          if (!bVar1) {
            uVar5 = DAT_028cc8b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_hasRewardAction);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
        }
      }
      else {
        FUN_0076f89c(local_a0,local_a8,&cf_A);
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_58,0);
    }
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

