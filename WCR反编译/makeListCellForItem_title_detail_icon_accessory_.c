// makeListCellForItem:title:detail:icon:accessory: @ 01f78cd0

/* Function Stack Size: 0x38 bytes */

ID WCRefineVoicePackManagerViewController::makeListCellForItem_title_detail_icon_accessory_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7)

{
  char *pcVar1;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  pcVar1 = "WCTableViewNormalCellManager";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    if (local_38 == (cfstringStruct *)0x0) {
      local_a8 = &::cf___;
    }
    else {
      local_a8 = local_38;
    }
    if (local_40 == (cfstringStruct *)0x0) {
      local_c0 = &::cf___;
    }
    else {
      local_c0 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_normalCellForSel_target_title_de_026b3248,
               PTR_s_handleListCellTap__026c99e8,local_20,local_a8,local_c0,local_48,param_7);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

