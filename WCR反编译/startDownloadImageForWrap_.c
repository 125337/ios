// startDownloadImageForWrap: @ 00f3e0b4

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::startDownloadImageForWrap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar4 = local_18;
  pcVar3 = "CMessageMgr";
  _objc_getClass("CMessageMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_StartDownloadImage_HD_AutoDownlo_0269da78;
  local_30 = IVar4;
  if ((IVar4 != 0) && (local_28 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_respondsToSelector__026ca818,
               PTR_s_StartDownloadImage_HD_AutoDownlo_0269da78);
    puVar2 = PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80;
    if ((IVar4 & 1) == 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,
                 PTR_s_StartDownloadImage_HD_AutoDownlo_0269da80);
      if ((IVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar2,local_28,1,1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_28,1,1,0,0,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

