// FUN_006ddb0c @ 006ddb0c

void FUN_006ddb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_d0;
  char *local_88;
  undefined *local_80;
  undefined4 local_78;
  byte local_71;
  char *local_70;
  byte local_61;
  char *local_60;
  char *local_58 [3];
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_40 = pcVar1;
  FUN_006dd450();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_71 = 0;
  local_d0 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_d0 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d0;
  }
  local_71 = pcVar2 == (char *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_d0;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((local_40 == (char *)0x0) || (local_58[0] == (char *)0x0)) {
    FUN_006dcff0(local_28);
    local_78 = 1;
  }
  else {
    puVar3 = PTR_WCRSafariChooserTarget_026ce848;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRSafariChooserTarget_026ce848,PTR_s_new_0269d288);
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUrl__0269f250,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHandler__0269fb20,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setExtraInfo__026a6c08,local_38);
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,0);
    local_88 = pcVar1;
    _objc_setAssociatedObject(pcVar1,&DAT_028cc2c0,local_80,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf__OOmhVSb,local_80,
               PTR_s_openInWeChat_026a6c10);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_S,local_80,
               PTR_s_openInSafari_026a6c18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_showInView__0269d310,local_58[0]);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    local_78 = 0;
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

