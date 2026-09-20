// developerSupportPlanEnabled @ 02095f14

/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineConfig::developerSupportPlanEnabled(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  double in_d0;
  double dVar8;
  cfstringStruct *local_98;
  ID local_50;
  ID local_48;
  int local_40;
  undefined1 local_3a;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_30;
    puVar3 = local_38;
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
  local_39 = (byte)puVar3;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sponsorTotalAmountMasked_026a7e58);
    dVar8 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sponsorUserQualificationYuan_026ad048);
    local_3a = dVar8 <= in_d0;
    if ((bool)local_3a) {
      local_11 = 0;
      local_40 = 1;
      goto LAB_020963cc;
    }
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_developerSupportPlanDisabledVers_026ca338);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_20;
    local_48 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pluginVer_026ad038);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
    if (IVar5 == 0) {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_98 = &::cf___;
      }
      _objc_storeStrong(&local_50,local_98);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    IVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (((IVar4 == 0) ||
        (IVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
        IVar4 == 0)) ||
       (IVar4 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_50),
       puVar3 = local_30, (IVar4 & 1) != 0)) {
      local_40 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      SVar1 = local_28;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar2);
      (*(code *)PTR__objc_release_02578630)(SVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    if (local_40 != 0) goto LAB_020963cc;
  }
  local_11 = local_39 & 1;
  local_40 = 1;
LAB_020963cc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

