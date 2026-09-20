// FUN_0003f3a0 @ 0003f3a0

void FUN_0003f3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *local_190;
  cfstringStruct *local_168;
  cfstringStruct *local_140;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  long local_b0;
  byte local_a8;
  byte local_a1;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  long local_60;
  byte local_51;
  long local_50;
  undefined4 local_48;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
    lVar1 = local_28;
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = lVar1;
      local_60 = lVar1;
      puVar2 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyStripVoicePrefixFromTe_0269d770,
                 &local_60);
      _objc_storeStrong(&local_50,local_60);
      local_51 = (byte)puVar2;
      puVar2 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAIStore_026ce048,PTR_s_eventReplyAIDirectiveFromText__0269d778,local_50
                );
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerName);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_81 = 0;
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_140 = &cf___;
      }
      else {
        local_140 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_140;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_140;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if (local_68 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendOutgoingText_toContactUsrNam_0269d780,
                   local_28,local_38,local_78);
        local_48 = 1;
      }
      else {
        pcVar3 = local_30;
        FUN_00040d14();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        pcVar4 = local_70;
        local_90 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        pcVar3 = local_90;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_168 = &cf__e;
        }
        else {
          local_168 = local_70;
        }
        local_a1 = 0;
        puVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          local_190 = &cf___;
        }
        else {
          local_190 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__INBl_
                    );
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_190;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_bR6e0Rv_cSN);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar2;
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        lVar1 = local_38;
        puVar5 = local_98;
        puVar2 = PTR_WCRefineAIClient_026ce080;
        local_d0 = PTR___NSConcreteStackBlock_02578660;
        local_c8 = 0xc2000000;
        local_c4 = 0;
        local_c0 = FUN_000420a0;
        local_b8 = &DAT_025793d0;
        local_a8 = local_51 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_generateTextWithInstruction_sour_0269d0d0,&cf_9hnc_Nl_NNub,puVar5,0,
                   &local_d0,in_x6,in_x7,local_168,pcVar3,local_190);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
        local_48 = 0;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

