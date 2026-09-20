// valueButtonTapped: @ 01edb3a0

/* Function Stack Size: 0x18 bytes */

void WCRToDoAdjustmentViewController::valueButtonTapped_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  char *local_58;
  uint local_4c;
  char *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar2 = local_18;
  local_30 = lVar3 + -91000;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar2,&DAT_028e4858,puVar4,1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_aSGrpe<P;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &cf_eQpeW_0;
  switch(local_30) {
  case 0x3e9:
    _objc_storeStrong(&local_38,&cf_aSGr_);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3ea:
    _objc_storeStrong(&local_38,&cf_aSGr__);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3eb:
    _objc_storeStrong(&local_38,&cf_W_Y_);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  default:
    break;
  case 0x3ed:
    _objc_storeStrong(&local_38,&cf_Q_uQ___>e);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3ee:
    _objc_storeStrong(&local_38,&cf_Q_uteSO__>e);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3f4:
    _objc_storeStrong(&local_38,&cf_n_);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3f5:
    _objc_storeStrong(&local_38,&cf_Ne);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x3f6:
    _objc_storeStrong(&local_38,&cf_Ne);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x3f8:
    _objc_storeStrong(&local_38,&cf_teSO__>e);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3f9:
    _objc_storeStrong(&local_38,&cf_4ls_MOy);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x3fa:
    _objc_storeStrong(&local_38,&cf_WvMOy);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x3fb:
    _objc_storeStrong(&local_38,&cf__SQ);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3fc:
    _objc_storeStrong(&local_38,&cf_NNQ);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3fd:
    _objc_storeStrong(&local_38,&cf_Q___>e<P);
    _objc_storeStrong(&local_40,&::cf_0);
    break;
  case 0x3fe:
    _objc_storeStrong(&local_38,&cf_Q_);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x3ff:
    _objc_storeStrong(&local_38,&cf_Q_);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x400:
    _objc_storeStrong(&local_38,&cf_Q_u4ls_MOy);
    _objc_storeStrong(&local_40,&cf__);
    break;
  case 0x401:
    _objc_storeStrong(&local_38,&cf_Q_uWvMOy);
    _objc_storeStrong(&local_40,&cf__);
  }
  pcVar5 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar5 != (char *)0x0;
  local_48 = pcVar5;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showTextFieldWithMaxLen__0269e5e0,0xc);
    lVar3 = local_30;
    pcVar5 = local_58;
    FUN_01ed8cfc(local_30);
    FUN_01ebef60();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmMetricValue__026c7d78);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
  }
  local_4c = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

