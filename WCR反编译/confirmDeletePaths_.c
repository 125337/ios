// confirmDeletePaths: @ 01996fd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::confirmDeletePaths_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_d8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [15];
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  long local_58;
  byte local_49;
  long local_48;
  undefined *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  local_d8 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_49 = 0;
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  if (lVar2 == 1) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd0_);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_d8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd_Nv);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_d8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_initWeak(auStack_88,local_28);
  puVar1 = local_40;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_019973b4;
  local_a0 = &DAT_0257cd48;
  lVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = lVar2;
  _objc_copyWeak(auStack_90,auStack_88);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rdnx,puVar1,&cf_Rd,&local_b8
             ,&cf_Sm,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  _objc_destroyWeak(auStack_90);
  _objc_storeStrong(&local_98);
  _objc_destroyWeak(auStack_88);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

