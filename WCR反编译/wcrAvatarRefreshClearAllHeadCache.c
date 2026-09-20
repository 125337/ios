// wcrAvatarRefreshClearAllHeadCache @ 01a6bc74

/* Function Stack Size: 0x10 bytes */

bool WCRefineGeneralFunctionViewController::wcrAvatarRefreshClearAllHeadCache
               (ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  bool local_59;
  ID local_50;
  ID local_48;
  char *local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrAvatarRefreshServiceCenter_026bd278);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     (param_1 & 1) == 0)) {
    local_11 = false;
    local_34 = 1;
  }
  else {
    pcVar2 = "MMHeadImageMgr";
    _objc_getClass();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_11 = false;
      local_34 = 1;
    }
    else {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar3;
      if (IVar3 == 0) {
        local_11 = false;
        local_34 = 1;
      }
      else {
        local_50 = 0;
        pcVar4 = &cf_headImgCacher;
        _NSSelectorFromString();
        IVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((IVar3 & 1) != 0) {
          IVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_50;
          local_50 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        if ((local_50 == 0) &&
           (IVar3 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128),
           (IVar3 & 1) != 0)) {
          IVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_valueForKey__0269d128,&cf__headImgCacher);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_50;
          local_50 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        if (local_50 == 0) {
          local_11 = false;
        }
        else {
          IVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_cleanupAllMemoryCache_026bd288);
          bVar1 = (IVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_cleanupAllMemoryCache_026bd288);
          }
          IVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_cleanAllHeadImage_026bd290);
          local_59 = (IVar3 & 1) != 0;
          if (local_59) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_cleanAllHeadImage_026bd290);
          }
          local_59 = local_59 || bVar1;
          local_11 = local_59;
        }
        local_34 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

