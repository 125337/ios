// showTextEditorWithTitle:defaultText:maxLen:selector: @ 0186354c

/* Function Stack Size: 0x30 bytes */

void WCRefineBatchRemarkViewController::showTextEditorWithTitle_defaultText_maxLen_selector_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,SEL param_6)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  char *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  char *local_48;
  SEL local_40;
  unsigned_long_long local_38;
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
  pcVar1 = "WCUIAlertView";
  local_40 = param_6;
  local_38 = param_5;
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf_NS_MRYl_N_eYle_O_u5fy_;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&::cf___);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_fbcTeW_);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__IN_j_g);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_58,&cf__j_gN_NzzevcubeYl);
        }
      }
      else {
        _objc_storeStrong(&local_58,&::cf_b);
      }
    }
    else {
      _objc_storeStrong(&local_58,&cf_eQN_T_Ng_bveW_0_TOHQ_O_uS_MRYleYle_O_u5fy_);
    }
    pcVar1 = local_48;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_38)
    ;
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((lVar3 != 0) &&
       (pcVar1 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_60,PTR_s_respondsToSelector__026ca818,
                  PTR_s_setTextFieldDefaultText__0269fd98), ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

