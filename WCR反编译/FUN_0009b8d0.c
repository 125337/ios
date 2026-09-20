// FUN_0009b8d0 @ 0009b8d0

void FUN_0009b8d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = "MMHeadImageView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0009bb30,&DAT_028c7fc8);
    _MSHookMessageEx(pcVar3,PTR_s_setFrame__026ca960,FUN_0009bc64,&DAT_028c7fd0);
    _MSHookMessageEx(pcVar3,PTR_s_setBounds__026ca8a0,FUN_0009bdc8,&DAT_028c7fd8);
    pcVar3 = "MMUILongPressImageView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0009bf2c,&DAT_028c7fe0);
    _MSHookMessageEx(pcVar3,PTR_s_setImage__026ca978,FUN_0009bf70,&DAT_028c7fe8);
    pcVar3 = "WCRefineContactsPackAvatarImageView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0009c008,&DAT_028c7ff0);
    _MSHookMessageEx(pcVar3,PTR_s_setImage__026ca978,FUN_0009c044,&DAT_028c7ff8);
    pcVar3 = "FakeHeadImageView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0009c0d0,&DAT_028c8000);
    pcVar3 = "FakeMainFrameItemView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_updateHeadView_0269dea8,FUN_0009c10c,&DAT_028c8008);
    pcVar3 = "WCFinderHeadImageView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0009c14c,&DAT_028c8010);
  }
  return;
}

