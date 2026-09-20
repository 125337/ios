// loadBubbleImageNamed: @ 00ebc508

/* WARNING: Removing unreachable block (ram,0x00ebc8b0) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineBubbleCut::loadBubbleImageNamed_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_78;
  char *local_70;
  char *local_68 [3];
  char *local_50;
  byte local_41;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    DAT_028e29d0 = DAT_028e29d0 + 1;
    local_40 = (char *)0x0;
    local_41 = 0;
    pcVar3 = "MMThemeManager";
    _objc_getClass();
    local_68[0] = (char *)0x0;
    local_50 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      pcVar3 = "MMServiceCenter";
      _objc_getClass();
      local_70 = pcVar3;
      if ((pcVar3 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar3;
        if ((pcVar3 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar3 & 1) != 0)) {
          pcVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getService__0269d170,local_50);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_68[0];
          local_68[0] = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_78,0);
      }
      if ((local_68[0] == (char *)0x0) &&
         (pcVar3 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_shared_0269cad0),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_68[0];
        local_68[0] = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if ((local_68[0] != (char *)0x0) &&
       (pcVar3 = local_68[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68[0],PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar4 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_imageNamed__0269fd20,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (local_40 == (char *)0x0) {
      pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    _objc_storeStrong(local_68,0);
    pcVar3 = local_40;
    local_34 = 0;
    DAT_028e29d0 = DAT_028e29d0 + -1;
    if ((local_41 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xebc8a0);
      (*pcVar1)();
    }
    local_34 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

