// loadWeChatUserAvatar @ 01d30a3c

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::loadWeChatUserAvatar(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  int local_54;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "MMServiceCenter";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) goto LAB_01d30cc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_01d30c98:
    local_54 = 0;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) goto LAB_01d30c98;
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar2
              );
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if (pcVar3 == (char *)0x0) {
LAB_01d30c70:
      local_54 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      if (pcVar3 == (char *)0x0) {
LAB_01d30c4c:
        local_54 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar3;
        if ((pcVar3 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0),
           pcVar3 == (char *)0x0)) {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_50;
          local_50 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        if ((local_50 == (char *)0x0) ||
           (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0)
           , pcVar2 == (char *)0x0)) {
          uVar5 = 0;
          local_54 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadAvatarFromURL__026c44a8,local_50)
          ;
          uVar5 = 1;
          local_54 = 1;
        }
        _objc_storeStrong(uVar5,&local_50,0);
        if (local_54 == 0) goto LAB_01d30c4c;
      }
      _objc_storeStrong(&local_48,0);
      if (local_54 == 0) goto LAB_01d30c70;
    }
    _objc_storeStrong(&local_40,0);
    if (local_54 == 0) goto LAB_01d30c98;
  }
  _objc_storeStrong(&local_30,0);
  if (local_54 != 0) {
    return;
  }
LAB_01d30cc0:
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01d30d74;
  local_68 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = IVar1;
  _dispatch_async(puVar4,&local_80);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_60,0);
  return;
}

