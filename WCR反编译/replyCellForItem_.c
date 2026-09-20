// replyCellForItem: @ 01d1dd60

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyPanel::replyCellForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineQuickReplyStore_026cec50;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickReplyStore_026cec50,PTR_s_previewForItem__026ad388,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineQuickReplyStore_026cec50;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickReplyStore_026cec50,PTR_s_typeTitleForItem__026c40e8,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCTableViewCellManager";
  local_38 = puVar2;
  _objc_getClass();
  pcVar4 = "WCTableViewNormalCellManager";
  local_40 = pcVar3;
  _objc_getClass();
  local_50 = (char *)0x0;
  local_48 = pcVar4;
  if ((pcVar4 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,
                 PTR_s_normalCellForSel_target_title_de_026b3248), ((ulong)pcVar4 & 1) == 0)) {
    if ((local_40 != (char *)0x0) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,
                  PTR_s_normalCellForSel_target_title_de_026c4128), ((ulong)pcVar3 & 1) != 0)) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_normalCellForSel_target_title_de_026c4128,
                 PTR_s_handleReplyTap__026c4120,local_18,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_50;
      local_50 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  else {
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_normalCellForSel_target_title_de_026b3248,
               PTR_s_handleReplyTap__026c4120,local_18,local_30,local_38,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_50 == (char *)0x0) {
    pcVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_handleReplyTap__026c4120,local_18,local_30,local_38,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  _objc_setAssociatedObject(local_50,DAT_028c6928,local_28,1);
  pcVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

