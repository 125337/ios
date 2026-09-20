// FUN_000c22a8 @ 000c22a8

void FUN_000c22a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_58;
  uint local_4c;
  long local_48;
  byte local_3d;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
             PTR_s_shouldSuppressChatAvatarProfileC_0269e710);
  local_29 = (byte)puVar1;
  local_3d = local_29;
  FUN_000c2988();
  lVar2 = local_18;
  FUN_000c2bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_000c2a24();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if ((local_29 & 1) == 0) {
    if ((local_3d & 1) == 0) {
      (*DAT_028c81c0)(local_18,local_20,local_28);
      local_4c = 1;
    }
    else {
      lVar2 = local_18;
      FUN_000c3134();
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar2;
      if (lVar2 != 0) {
        FUN_000c367c();
        FUN_000c36d0(local_18,local_58);
      }
      else {
        (*DAT_028c81c0)(local_18,local_20,local_28);
      }
      local_4c = (uint)(lVar2 == 0);
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    (*DAT_028c81c0)(local_18,local_20,local_28);
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

