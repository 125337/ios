// showAlertWithTitle:message:destructiveBtnTitle:handler:cancelBtnTitle:handler: @ 00fa2d18

/* Function Stack Size: 0x40 bytes */

ID WCRefineHelper::showAlertWithTitle_message_destructiveBtnTitle_handler_cancelBtnTitle_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7,
             ID param_8,ID param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_7);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_8);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_70 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_74 = 1;
  }
  else {
    uVar4 = local_58;
    _objc_retainBlock();
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar5 + 8) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar4 = local_68;
    _objc_retainBlock();
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar5 + 0x10);
    *(undefined8 *)(puVar5 + 0x10) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_80 = PTR_s_showAlertWithTitle_message_destr_026ace18;
    pcVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_respondsToSelector__026ca818,
               PTR_s_showAlertWithTitle_message_destr_026ace18);
    uVar2 = local_40;
    uVar6 = local_48;
    uVar4 = local_50;
    pcVar3 = local_70;
    puVar5 = local_80;
    if (((ulong)pcVar7 & 1) == 0) {
      local_88 = PTR_s_showAlertWithTitle_message_btnTi_026ace20;
      pcVar7 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_respondsToSelector__026ca818,
                 PTR_s_showAlertWithTitle_message_btnTi_026ace20);
      uVar2 = local_40;
      uVar6 = local_48;
      uVar4 = local_50;
      pcVar3 = local_70;
      puVar5 = local_88;
      if (((ulong)pcVar7 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithTitle_message__0269d260);
        if (((ulong)pcVar3 & 1) == 0) {
          local_28 = (char *)0x0;
          local_74 = 1;
        }
        else {
          pcVar3 = local_70;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_90 = pcVar3;
          if (pcVar3 == (char *)0x0) {
            local_28 = (char *)0x0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,
                       PTR_s_addBtnTitle_target_sel_btnStyle__026ace28);
            uVar4 = local_50;
            pcVar7 = local_90;
            puVar5 = PTR_s_addBtnTitle_target_sel_btnStyle__026ace28;
            if (((ulong)pcVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_respondsToSelector__026ca818,
                         PTR_s_addBtnTitle_target_sel__0269d278);
              uVar4 = local_50;
              pcVar3 = local_90;
              puVar5 = PTR_s_addBtnTitle_target_sel__0269d278;
              if (((ulong)pcVar7 & 1) != 0) {
                puVar10 = PTR_WCRefineHelper_026ce000;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,puVar5,uVar4,puVar10,PTR_s_action1__026acdf0);
                (*(code *)PTR__objc_release_02578630)(puVar10);
              }
            }
            else {
              puVar10 = PTR_WCRefineHelper_026ce000;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,puVar5,uVar4,puVar10,PTR_s_action1__026acdf0,1);
              (*(code *)PTR__objc_release_02578630)(puVar10);
            }
            pcVar7 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,
                       PTR_s_addCancelBtnTitle_target_sel__0269d268);
            uVar4 = local_60;
            pcVar3 = local_90;
            puVar5 = PTR_s_addCancelBtnTitle_target_sel__0269d268;
            if (((ulong)pcVar7 & 1) != 0) {
              puVar10 = PTR_WCRefineHelper_026ce000;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,puVar5,uVar4,puVar10,PTR_s_action2__026ace00);
              (*(code *)PTR__objc_release_02578630)(puVar10);
            }
            pcVar3 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
            if (((ulong)pcVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_show_0269d280);
            }
            pcVar3 = local_90;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar3;
          }
          local_74 = 1;
          _objc_storeStrong(&local_90,0);
        }
      }
      else {
        puVar8 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_60;
        puVar10 = PTR_s_action1__026acdf0;
        puVar9 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,puVar5,uVar2,uVar6,uVar4,puVar8,puVar10,uVar1,puVar9,
                   PTR_s_action2__026ace00,0);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        local_74 = 1;
      }
    }
    else {
      puVar8 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60;
      puVar10 = PTR_s_action1__026acdf0;
      puVar9 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,puVar5,uVar2,uVar6,uVar4,puVar8,puVar10,uVar1,puVar9,PTR_s_action2__026ace00
                 ,0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      local_74 = 1;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

