// FUN_002303d0 @ 002303d0

void FUN_002303d0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_f0;
  bool local_71;
  ulong local_70;
  ulong local_68;
  undefined1 local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = param_2;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026dfb48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    uVar1 = DAT_026dfb48;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_28;
      FUN_0023001c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_28;
      local_48[0] = uVar2;
      _objc_getAssociatedObject(local_28,DAT_026dfb40);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_50 = uVar3;
      FUN_0023094c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48[0];
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      if ((uVar3 == 0) || (local_58 == 0)) {
        _objc_setAssociatedObject(local_28,DAT_026dfb40,0,1);
        _objc_setAssociatedObject(local_28,DAT_026dfb48,0,1);
        local_30 = 1;
      }
      else {
        uVar2 = local_48[0];
        FUN_00230c84();
        local_59 = (undefined1)uVar2;
        local_71 = (uVar2 & 1) == 0;
        if (local_71) {
          local_f0 = 0;
        }
        else {
          local_f0 = local_48[0];
          FUN_0022bbc4();
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_f0;
        }
        local_71 = !local_71;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_f0;
        if (local_71) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        if (local_68 == 0) {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
          if ((uVar2 != 0) &&
             (_objc_setAssociatedObject(local_28,DAT_026dfb40,0,1), (local_29 & 1) != 0)) {
            FUN_00230fb8(local_28,local_48[0]);
          }
          _objc_setAssociatedObject(local_28,DAT_026dfb48,0,1);
          local_30 = 0;
        }
        else {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_isEqualToString__0269ccc8,local_48[0]);
          if (((uVar2 & 1) == 0) &&
             (uVar2 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978),
             (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978,local_68);
          }
          _objc_setAssociatedObject(local_28,DAT_026dfb40,local_48[0],3);
          _objc_setAssociatedObject(local_28,DAT_026dfb48,0,1);
          local_30 = 1;
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(local_48,0);
    }
    else {
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

