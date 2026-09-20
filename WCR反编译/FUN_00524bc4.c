// FUN_00524bc4 @ 00524bc4

void FUN_00524bc4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_100;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  int local_5c;
  undefined4 local_58;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_30;
  (*DAT_028cb148)(local_30,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  FUN_0052b2cc();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_deleteFlag_026a4b20),
     (uVar2 & 1) == 0)) {
    uVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_58 = 1;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_deleteFlag_026a4b20);
    uVar2 = local_48;
    uVar1 = DAT_026f4330;
    local_5c = (int)uVar3;
    if (local_5c == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      local_58 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_48;
      FUN_0052b368();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if ((uVar2 == 0) &&
         (uVar2 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_username_026a2238),
         (uVar2 & 1) != 0)) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar2 & 1) == 0) {
          local_100 = 0;
        }
        else {
          local_100 = local_70;
        }
        _objc_storeStrong(&local_68,local_100);
        _objc_storeStrong(&local_70,0);
      }
      uVar2 = local_48;
      FUN_00529d10();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        uVar3 = local_40;
        FUN_0052b50c();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_78;
        local_78 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_68;
      FUN_0052b6cc();
      if (((uVar2 & 1) != 0) &&
         (uVar2 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
         uVar2 != 0)) {
        puVar4 = PTR_WCRefineMomentsMonitor_026ce718;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      uVar2 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      local_58 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

