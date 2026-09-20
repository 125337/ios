// loadPageAvatarImageForSpecialKey: @ 018470fc

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::loadPageAvatarImageForSpecialKey_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  uint local_48;
  undefined1 local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_31 = 0;
  local_41 = 0;
  bVar4 = true;
  uVar1 = lVar5 != 0;
  if ((bool)uVar1) {
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_avatarImageCache_026b67a0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar4 = IVar6 != 0;
    local_41 = uVar1;
    local_40 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar4) {
    local_48 = 1;
  }
  else {
    puVar7 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,
               PTR_s_syncPreviewAvatarImageForSpecial_026ab1f0,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      _objc_initWeak(auStack_58,local_18);
      lVar5 = local_28;
      puVar2 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_0184741c;
      local_70 = &DAT_025899a8;
      _objc_copyWeak(auStack_60,auStack_58);
      lVar3 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_loadPreviewAvatarForSpecialKey_c_026b6640,lVar5,&local_88);
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      IVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_avatarImageCache_026b67a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    local_48 = (uint)(puVar7 != (undefined *)0x0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

