// wcRefineOpenPlugin:targetTitle:sectionTitle: @ 014ca6a4

/* Function Stack Size: 0x28 bytes */

void WCRefineSearchManager::wcRefineOpenPlugin_targetTitle_sectionTitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long local_70;
  ID local_68;
  long local_60;
  int local_58;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  if ((local_38 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_58 = 1;
  }
  else {
    lVar2 = local_38;
    _NSClassFromString();
    IVar3 = local_28;
    local_60 = lVar2;
    if (lVar2 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_cN);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_showAlertWithTitle_message__026af680,&cf_cN_g_);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_58 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcRefineSearchInstantiatePluginC_026af608,lVar2,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar3;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_showAlertWithTitle_message__026af680,&::cf_format_s_,&::cf_elSb);
        local_58 = 1;
      }
      else {
        lVar2 = local_28 + 0x48;
        _objc_loadWeakRetained();
        lVar4 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_70 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        if (local_70 != 0) {
          FUN_014cabb8(local_70,local_68,1);
          lVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if (lVar2 != 0) {
            _objc_initWeak(lVar2,auStack_78,local_28);
            dVar5 = _dispatch_time(0,250000000);
            puVar6 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_c0 = PTR___NSConcreteStackBlock_02578660;
            local_b8 = 0xc2000000;
            local_b4 = 0;
            local_b0 = FUN_014caccc;
            local_a8 = &DAT_02585f70;
            _objc_copyWeak(auStack_80,auStack_78);
            IVar3 = local_68;
            (*(code *)PTR__objc_retain_02578638)();
            lVar4 = local_38;
            local_a0 = IVar3;
            (*(code *)PTR__objc_retain_02578638)();
            lVar2 = local_40;
            local_98 = lVar4;
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_48;
            local_90 = lVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_88 = uVar1;
            _dispatch_after(dVar5,puVar6,&local_c0);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_storeStrong(&local_88);
            _objc_storeStrong(&local_90,0);
            _objc_storeStrong(&local_98,0);
            _objc_storeStrong(&local_a0,0);
            _objc_destroyWeak(auStack_80);
            _objc_destroyWeak(auStack_78);
          }
        }
        _objc_storeStrong(&local_70,0);
        local_58 = 0;
      }
      _objc_storeStrong(&local_68,0);
      if (local_58 == 0) {
        local_58 = 0;
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

