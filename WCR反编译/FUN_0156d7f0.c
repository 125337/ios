// FUN_0156d7f0 @ 0156d7f0

byte FUN_0156d7f0(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar1 = &cf_WCRefineSearchSettingsViewController;
  _NSClassFromString();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    local_20 = pcVar1;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      FUN_01556938(local_28);
      dVar3 = _dispatch_time(0,300000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_0157840c;
      local_40 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = pcVar1;
      _dispatch_after(dVar3,puVar2,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_11 = 1;
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

