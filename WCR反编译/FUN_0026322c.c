// FUN_0026322c @ 0026322c

void FUN_0026322c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_40;
  ulong local_38;
  char *local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0),
     ((ulong)puVar2 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    pcVar3 = "WebviewJSEventHandler_saveImage";
    _objc_getClass();
    local_30 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       (uVar4 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar3),
       (uVar4 & 1) == 0)) {
      local_28 = 1;
    }
    else {
      local_38 = 0;
      local_40 = 0;
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_imgUrl);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar4 = local_38;
      local_38 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_base64Data);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar4 = local_40;
      local_40 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_38;
      FUN_00263fb4();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      local_38 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar2 = PTR_s_saveImageToAlbumWithUrl_OrBase64_026a1258;
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_saveImageToAlbumWithUrl_OrBase64_026a1258);
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineEmoticonToolsHelper_026ce448,
                   PTR_s_saveOAImageToLocalRepositoryWith_026a1260,local_38,local_40);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,puVar2,local_38,local_40,0,
                   PTR_s_WCRefine_addToLocalRepositoryWit_026a1188);
      }
      local_28 = (uint)!bVar1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

