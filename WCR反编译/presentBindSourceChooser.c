// presentBindSourceChooser @ 01aac0d8

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::presentBindSourceChooser(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_120;
  undefined1 local_111;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [15];
  undefined1 local_e1;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [15];
  undefined1 local_b1;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58 [3];
  byte local_39;
  undefined1 auStack_38 [8];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_initWeak(auStack_38,param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasBoundSyncSource_026bdcf0);
  local_39 = (byte)IVar2;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  local_58[0] = puVar3;
  if ((local_39 & 1) != 0) {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01aac734;
    local_68 = &DAT_0257be28;
    _objc_copyWeak(auStack_60,auStack_38);
    local_81 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_zsSTekbXT,0,&local_80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_81 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_60);
  }
  puVar3 = local_58[0];
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  pcVar1 = &cf_9e__JSY;
  if ((local_39 & 1) == 0) {
    pcVar1 = &cf____JSY;
  }
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_01aac784;
  local_98 = &DAT_0257be28;
  _objc_copyWeak(auStack_90,auStack_38);
  local_b1 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,0,&local_b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_b1 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_58[0];
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  pcVar1 = &cf_9e_h__SY;
  if ((local_39 & 1) == 0) {
    pcVar1 = &cf___h__SY;
  }
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_01aac7d4;
  local_c8 = &DAT_0257be28;
  _objc_copyWeak(auStack_c0,auStack_38);
  local_e1 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,0,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_e1 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_58[0];
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  if ((local_39 & 1) != 0) {
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_01aac824;
    local_f8 = &DAT_0257be28;
    _objc_copyWeak(auStack_f0,auStack_38);
    local_111 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_dhQ__,1,&local_110);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_111 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_f0);
  }
  pcVar1 = &cf__tTekegn;
  if ((local_39 & 1) == 0) {
    pcVar1 = &cf_bTekegn;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = pcVar1;
  FUN_01aa2934(local_28,pcVar1,local_58[0],&cf_Sm);
  _objc_storeStrong(&local_120);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_90);
  _objc_storeStrong(local_58,0);
  _objc_destroyWeak(auStack_38);
  return;
}

