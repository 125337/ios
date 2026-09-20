// FUN_00263ae8 @ 00263ae8

void FUN_00263ae8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_58;
  ulong local_50 [3];
  char *local_38;
  uint local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    pcVar4 = "WebviewJSEventHandler_saveImage";
    _objc_getClass();
    local_38 = pcVar4;
    if ((pcVar4 == (char *)0x0) ||
       (uVar5 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar4),
       (uVar5 & 1) == 0)) {
      local_2c = 1;
    }
    else {
      local_50[0] = 0;
      local_58 = 0;
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_imgUrl);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar5 = local_50[0];
      local_50[0] = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_base64Data);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar5 = local_58;
      local_58 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_50[0];
      FUN_00263fb4();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_50[0];
      local_50[0] = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar7 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
      uVar8 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      _NSLog(&cf__wcr__emoticon_oasendurlLen__lubase64Len__lu);
      puVar2 = PTR_s_saveImageToAlbumWithUrl_OrBase64_026a1258;
      uVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_saveImageToAlbumWithUrl_OrBase64_026a1258);
      uVar6 = local_50[0];
      uVar5 = local_58;
      puVar3 = PTR_WCRefineEmoticonToolsHelper_026ce448;
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        uVar7 = local_28;
        FUN_00264194();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_sendOAImageAsEmoticonWithUrl_bas_026a1280,uVar6,uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,puVar2,local_50[0],local_58,0,
                   PTR_s_WCRefine_sendAsEmoticonWithImage_026a1178,in_x6,in_x7,uVar7,uVar8);
      }
      local_2c = (uint)!bVar1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

