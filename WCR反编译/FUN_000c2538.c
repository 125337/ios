// FUN_000c2538 @ 000c2538

void FUN_000c2538(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  undefined4 local_44;
  undefined1 local_3d;
  byte local_29;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
             PTR_s_shouldSuppressChatAvatarProfileC_0269e710);
  uVar1 = (uint)puVar2;
  local_29 = (byte)puVar2;
  FUN_000c4674();
  local_3d = (undefined1)uVar1;
  if ((local_29 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      (*DAT_028c81c8)(local_18,local_20,local_28);
      local_44 = 1;
    }
    else {
      lVar3 = local_18;
      FUN_000c4754();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar3;
      if (lVar3 == 0) {
        (*DAT_028c81c8)(local_18,local_20,local_28);
        local_44 = 1;
      }
      else {
        uVar4 = local_28;
        FUN_000c419c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if ((uVar4 == 0) ||
           (uVar4 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__chatroom),
           (uVar4 & 1) != 0)) {
          (*DAT_028c81c8)(local_18,local_20,local_28);
          local_44 = 1;
        }
        else {
          FUN_000c3d7c();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          FUN_000c3ecc();
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (local_60 != 0) {
            _objc_storeStrong(&local_28,local_60);
          }
          lVar3 = local_18;
          FUN_000c47f0(local_18,local_50);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = local_50;
          local_68 = lVar3;
          FUN_000c4a98();
          _objc_retainAutoreleasedReturnValue();
          local_70 = lVar6;
          FUN_000c367c();
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                     PTR_s_presentProfileCardForContact_sou_0269e720,local_28,0,local_70,local_58,
                     local_68);
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_68,0);
          _objc_storeStrong(&local_60,0);
          local_44 = 0;
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    (*DAT_028c81c8)(local_18,local_20,local_28);
    local_44 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

