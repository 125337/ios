// FUN_0036baa4 @ 0036baa4

void FUN_0036baa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    pcVar3 = "NewMainFrameCell";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       (uVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar3),
       (uVar2 & 1) != 0)) {
      pcVar4 = &cf_setContextMenuEnabled_;
      _NSSelectorFromString();
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4,1);
      }
      pcVar4 = &cf_setIndexPath_;
      _NSSelectorFromString();
      if ((local_20 != 0) &&
         (uVar2 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4),
         (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4,local_20);
      }
      pcVar4 = &cf_updateMenuView_;
      _NSSelectorFromString();
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) == 0) {
        pcVar4 = &cf_updateMenuView;
        _NSSelectorFromString();
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4,1);
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

