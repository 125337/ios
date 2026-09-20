// FUN_01b1c964 @ 01b1c964

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b1c964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_168;
  cfstringStruct *local_150;
  undefined *local_128;
  cfstringStruct *local_f0;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  long local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  int local_54;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = (undefined *)(param_1 + 0x20);
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_54 = 1;
  }
  else {
    local_f0 = local_30;
    if (local_30 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f0;
    FUN_01b0f0fc();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(local_f0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQsQ_);
      local_54 = 1;
    }
    else {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_engine_026be8d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_71 = 0;
      local_128 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_128 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_128;
      }
      local_71 = puVar5 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_128;
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_80 = 0;
      local_88 = (cfstringStruct *)0x0;
      local_98 = 0;
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertAppendManagedKeyword_026bed40,
                 local_60,local_68,100,0x78,&local_80,&local_98);
      _objc_storeStrong(&local_88,local_98);
      puVar2 = PTR_WCRefineHelper_026ce000;
      local_90 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        pcVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_150 = &cf_lgeXS_X__WbeHe;
          if (local_80 == 0) {
            local_150 = &cf_eQsQ_;
          }
        }
        else {
          local_150 = local_88;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_150);
        local_54 = 1;
      }
      else {
        puVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
        }
        bVar1 = local_80 == 0;
        local_168 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_168;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_168;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_168;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_a0);
        _objc_storeStrong(&local_a0,0);
        local_54 = 0;
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

