// officialBackItemWithAction: @ 01b600e0

/* WARNING: Removing unreachable block (ram,0x01b601fc) */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonLibraryViewController::officialBackItemWithAction_
             (ID param_1,SEL param_2,SEL param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined *local_40;
  char *local_38;
  SEL local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar1 = "MMUICommonUtil";
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_40 = PTR_s_getBackBarButtonWithTarget_actio_026bf880;
  local_38 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getBackBarButtonWithTarget_actio_026bf880), ((ulong)pcVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
               &cf_chevron_backward);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_48 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = pcVar1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

