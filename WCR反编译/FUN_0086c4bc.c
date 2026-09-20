// FUN_0086c4bc @ 0086c4bc

void FUN_0086c4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *local_70;
  cfstringStruct *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if ((DAT_028cd859 & 1) == 0) {
    (*DAT_028cd6a0)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    pcVar1 = "MMLanguageMgr";
    _objc_getClass();
    local_50 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      (*DAT_028cd6a0)(local_28,local_30,local_38);
      local_48 = 1;
    }
    else {
      local_58 = (char *)0x0;
      pcVar1 = "MMServiceCenter";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_getService_;
      local_60 = pcVar1;
      _NSSelectorFromString();
      pcVar1 = local_60;
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_performSelector_withObject__026ca7c0,local_68,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          pcVar2 = &cf_getStringForCurLanguage_;
          _NSSelectorFromString();
          pcVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar2);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_performSelector_withObject__026ca7c0,pcVar2,
                       &cf_PreviewAction_Mute);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_58;
            local_58 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_60,0);
      if ((local_58 == (char *)0x0) ||
         (uVar4 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_58),
         (uVar4 & 1) == 0)) {
        (*DAT_028cd6a0)(local_28,local_30,local_38);
        local_48 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_28,
                   PTR_s_setFrame__026ca960);
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

