// showMediaAtPath: @ 01cf875c

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgPreviewPane::showMediaAtPath_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetContent_026c3ae0);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    FUN_01cf8994();
    if ((uVar1 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadToken_026c3ac8);
      uVar1 = local_28;
      local_38 = IVar2;
      FUN_01cf8a98();
      IVar2 = local_18;
      if ((uVar1 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_28);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_showImage__026c3af8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_2c = 0;
      }
      else {
        pdVar3 = _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_28;
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_01cf8bcc;
        local_58 = &DAT_0257a740;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_18;
        local_50 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = IVar2;
        local_40 = local_38;
        _dispatch_async(pdVar3,&local_70);
        (*(code *)PTR__objc_release_02578630)(pdVar3);
        local_2c = 1;
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_50,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showHTMLAtPath__026c3af0,local_28);
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

