// FUN_01571318 @ 01571318

byte FUN_01571318(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_startSetPrivacy_026b0680);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_modifyShareScope_026b0688);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_editShield_forScene__026a5bc0);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_editShield__026a5bc8);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          FUN_01533eb8(local_20,&cf_username);
          _objc_retainAutoreleasedReturnValue();
          local_38 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            uVar2 = local_28;
            FUN_01533eb8(local_28,&cf_nsUsrName);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_38;
            local_38 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            local_11 = 0;
            local_2c = 1;
          }
          else {
            pcVar3 = &cf_WCSetPermissionsViewController;
            _NSClassFromString();
            pcVar4 = &cf_initWithUserName_;
            local_40 = pcVar3;
            _NSSelectorFromString();
            local_48 = pcVar4;
            if ((local_40 == (cfstringStruct *)0x0) ||
               (pcVar3 = local_40,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_40,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
               ((ulong)pcVar3 & 1) == 0)) {
              local_11 = 0;
              local_2c = 1;
            }
            else {
              pcVar3 = local_40;
              _objc_alloc();
              pcVar4 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_50 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar3 = local_50;
              puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_11 = ((ulong)pcVar3 & 1) != 0;
              if ((bool)local_11) {
                FUN_01572904(local_28,local_50);
              }
              local_2c = 1;
              _objc_storeStrong(&local_50,0);
            }
          }
          _objc_storeStrong(&local_38,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editShield__026a5bc8,local_20);
          local_11 = 1;
          local_2c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_editShield_forScene__026a5bc0,local_20,0);
        local_11 = 1;
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_modifyShareScope_026b0688);
      local_11 = 1;
      local_2c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startSetPrivacy_026b0680);
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

