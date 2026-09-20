// FUN_01b3956c @ 01b3956c

void FUN_01b3956c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  undefined *local_118;
  cfstringStruct *local_108;
  undefined *local_98;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  long local_60;
  int local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar3 = param_1 + 0x20;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = lVar3;
  if (lVar3 == 0) {
    local_54 = 1;
  }
  else {
    lVar3 = local_30;
    FUN_01b391b0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_30;
    puVar5 = PTR_WCRefineHelper_026ce000;
    if (lVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQsQ_);
      local_54 = 1;
    }
    else {
      local_60 = 0;
      local_68 = (cfstringStruct *)0x0;
      lVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_keywords_026bef60);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_keywordAlertAppendManagedKeyword_026bed40,lVar3,lVar4,100,0x78,
                 &local_60,&local_78);
      _objc_storeStrong(&local_68,local_78);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      puVar2 = PTR_WCRefineHelper_026ce000;
      local_70 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        pcVar6 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_108 = &cf_lgeXS_X__W;
          if (local_60 == 0) {
            local_108 = &cf_eQsQ_;
          }
        }
        else {
          local_108 = local_68;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_108);
        local_54 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_persistKeywords_026bef90);
        uVar7 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
        }
        lVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        bVar1 = local_60 == 0;
        local_118 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR);
          _objc_retainAutoreleasedReturnValue();
          local_98 = local_118;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR);
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_118;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_118;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_80);
        _objc_storeStrong(&local_80,0);
        local_54 = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
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

