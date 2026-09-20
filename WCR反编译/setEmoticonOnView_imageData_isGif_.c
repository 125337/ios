// setEmoticonOnView:imageData:isGif: @ 00f51978

/* Function Stack Size: 0x24 bytes */

void WCRefineEmoticonUtil::setEmoticonOnView_imageData_isGif_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  char *local_68 [3];
  cfstringStruct *local_50;
  char *local_48;
  char *local_40;
  int local_38;
  byte local_31;
  long local_30;
  ulong local_28;
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
    goto LAB_00f51c1c;
  }
  pcVar1 = "CEmoticonWrap";
  _objc_getClass();
  local_40 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_38 = 1;
    goto LAB_00f51c1c;
  }
  _objc_alloc_init();
  pcVar2 = &cf_setM_imageData_;
  local_48 = pcVar1;
  _NSSelectorFromString();
  pcVar1 = local_48;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setValue_forKey__0269d300,local_30,&cf_m_imageData);
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_imageData);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0), pcVar1 == (char *)0x0))
    {
      local_38 = 1;
    }
    else {
      local_38 = 0;
    }
    _objc_storeStrong(local_68,0);
    if (local_38 == 0) goto LAB_00f51b6c;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_30);
LAB_00f51b6c:
    pcVar2 = &cf_setEmoticonWrap_PlayGif_;
    _NSSelectorFromString();
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2,local_48,local_31 & 1);
    }
    local_38 = 0;
  }
  _objc_storeStrong(&local_48,0);
LAB_00f51c1c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

