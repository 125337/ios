// packImageNamed:basenames:cacheTag: @ 015cf7a8

/* Function Stack Size: 0x28 bytes */

ID WCRefineWechatThemeStore::packImageNamed_basenames_cacheTag_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_d8;
  undefined *local_c8;
  bool local_91;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_54 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewCache_026b0f58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_68;
    if (local_68 == (undefined *)0x0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_imagePathInPackNamed_basenames__026b0f60,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 0;
      local_c8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_c8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_representativeBubblePathInPackNa_026b0f68,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_c8;
      }
      local_79 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_c8;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_d8 = (undefined *)0x0;
      }
      else {
        local_d8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_70);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_d8;
      }
      local_91 = puVar2 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_d8;
      if (local_91) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (local_88 != (undefined *)0x0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewCache_026b0f58);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_54 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_54 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

