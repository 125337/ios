// openSpecialEditorForUsername:fromViewController: @ 010d9a50

/* Function Stack Size: 0x20 bytes */

bool WCRefineNameplateHelper::openSpecialEditorForUsername_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  char *local_c8;
  undefined *local_b0;
  char *local_80;
  char *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateSpecialUserEnabled_026ae830);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setNameplateSpecialUserEnabled__026ae838,1);
    }
    puVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_nameplateEnabled_026ae7f8);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNameplateEnabled__026ae840,1);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_nameplateSpecialUserList_026ae848);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_b0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_orderedSetWithArray__026a4b80,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_40);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_40);
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNameplateSpecialUserList__026ae850);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification();
    puVar1 = PTR_WCRefineNameplateSpecialUserDetailViewController_026cecd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_11 = 0;
      local_44 = 1;
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      if (uVar4 == 0) {
        if (local_38 == 0) {
          local_11 = 0;
          local_44 = 1;
        }
        else {
          local_c8 = "MMUINavigationController";
          _objc_getClass();
          if (local_c8 == (char *)0x0) {
            local_c8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          }
          local_78 = local_c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_80 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_c8,1);
          local_11 = 1;
          local_44 = 1;
          _objc_storeStrong(&local_80,0);
        }
      }
      else {
        local_70 = PTR_s_PushViewController_animated__0269cd40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_PushViewController_animated__0269cd40);
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_pushViewController_animated__0269d590,local_60,1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_60,1);
        }
        local_11 = 1;
        local_44 = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

