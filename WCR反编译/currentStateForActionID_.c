// currentStateForActionID: @ 01ceaf8c

/* Function Stack Size: 0x18 bytes */

bool WCRefineProfileCardFunctionPageViewController::currentStateForActionID_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ID local_48;
  byte local_3d;
  undefined4 local_3c;
  ID local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_actionStateOverrides_026c3a48);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar1 & 1) == 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMessageBlock
                  );
        if ((uVar4 & 1) == 0) {
          local_11 = 0;
          local_3c = 1;
        }
        else {
          IVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contact_026a0d10);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = IVar1;
          FUN_01ceb580();
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar2;
          FUN_01ceb408();
          _objc_retainAutoreleasedReturnValue();
          local_48 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_release_02578630)(IVar1);
          IVar1 = local_48;
          puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroupContact_026c3a30);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_isEnabledForUserName_groupContex_026b06b8,IVar1,0,IVar2);
          local_11 = (byte)puVar3 & 1;
          local_3c = 1;
          _objc_storeStrong(&local_48,0);
        }
      }
      else {
        IVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contact_026a0d10);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        FUN_01ceb32c();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        local_3d = (byte)IVar2;
        local_11 = (local_3d ^ 1) & 1;
        local_3c = 1;
      }
    }
    else {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contact_026a0d10);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      FUN_01ceb32c();
      local_11 = (byte)IVar2 & 1;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_3c = 1;
    }
  }
  else {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    local_11 = (byte)IVar1 & 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

