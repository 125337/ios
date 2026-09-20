// showAddMenu @ 0199f3b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::showAddMenu(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined1 auStack_118 [15];
  undefined1 local_109;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [15];
  undefined1 local_a9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [15];
  undefined1 local_79;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined1 auStack_38 [8];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_0199fb38;
  local_60 = &DAT_0257be28;
  local_40 = puVar1;
  _objc_copyWeak(auStack_58,auStack_38);
  local_79 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_e_eN9Y,&local_78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  local_79 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_0199fb88;
  local_90 = &DAT_0257be28;
  _objc_copyWeak(auStack_88,auStack_38);
  local_a9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_e_e_geN,&local_a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  local_a9 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_0199fbd8;
  local_c0 = &DAT_0257be28;
  _objc_copyWeak(auStack_b8,auStack_38);
  local_d9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_NeN_eQ,&local_d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  local_d9 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_108 = PTR___NSConcreteStackBlock_02578660;
  local_100 = 0xc2000000;
  local_fc = 0;
  local_f8 = FUN_0199fc28;
  local_f0 = &DAT_0257be28;
  _objc_copyWeak(auStack_e8,auStack_38);
  local_109 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_NvQ_eQ,&local_108);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
  local_109 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  if (puVar3 != (undefined *)0x0) {
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_0199fc78;
    local_120 = &DAT_0257be28;
    _objc_copyWeak(auStack_118,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf__40RdkY,&local_138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_118);
  }
  FUN_0199377c(local_28,0,local_40,&cf_Sm);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_40,0);
  _objc_destroyWeak(auStack_38);
  return;
}

