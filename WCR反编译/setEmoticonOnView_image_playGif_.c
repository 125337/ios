// setEmoticonOnView:image:playGif: @ 00f52014

/* Function Stack Size: 0x24 bytes */

void WCRefineEmoticonUtil::setEmoticonOnView_image_playGif_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_40;
  uint local_38;
  byte local_31;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  if ((local_28 == 0) || (local_30 == 0)) {
    local_38 = 1;
  }
  else {
    lVar2 = local_30;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    if (lVar2 == 0) {
      lVar3 = local_30;
      _UIImageJPEGRepresentation(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_40 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    bVar1 = local_40 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setEmoticonOnView_imageData_isGi_0269e0b0,local_28,local_40,
                 local_31 & 1);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

