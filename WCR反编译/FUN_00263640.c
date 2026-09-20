// FUN_00263640 @ 00263640

void FUN_00263640(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68 [2];
  ulong local_58;
  ulong local_50 [3];
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    pcVar1 = "WebviewJSEventHandler_saveImage";
    _objc_getClass();
    local_38 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       (uVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      local_2c = 1;
    }
    else {
      local_50[0] = 0;
      local_58 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_imgUrl);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar2 = local_50[0];
      local_50[0] = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_base64Data);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar2 = local_58;
      local_58 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_50[0];
      FUN_00263fb4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      FUN_00264194();
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      uVar2 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__emoticon_oaadd_tweak_path_urlLen__lubase64Len__luwebVC___);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonToolsHelper_026ce448,
                 PTR_s_addOAImageAsEmoticonWithUrl_base_026a1268,local_50[0],local_58,local_68[0]);
      _objc_storeStrong(local_68);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(local_50,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

