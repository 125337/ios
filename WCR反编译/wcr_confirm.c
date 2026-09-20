// wcr_confirm @ 0050b87c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineMomentsBatchDateRangeViewController::wcr_confirm
          (WCRefineMomentsBatchDateRangeViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  double in_d0;
  long local_160;
  long local_150;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ID local_a0;
  long local_98;
  long local_90;
  int local_88;
  undefined4 local_84;
  long local_80;
  long local_78;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 *local_58 [3];
  undefined1 *local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startPicker_0269cfa8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_startOfDayForDate__0269cfb0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = local_38;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_endPicker_0269cfb8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_startOfDayForDate__0269cfb0);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = puVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,1,local_58[0],0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_40;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_compare__0269cd10,local_58[0]);
  if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    local_64 = 1;
  }
  else {
    local_6c = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_timeIntervalSince1970_0269cfc8);
    local_78 = (long)in_d0;
    local_150 = local_78;
    if (local_78 <= local_6c) {
      local_150 = (long)local_6c;
    }
    local_80 = local_150;
    local_68 = (undefined4)local_150;
    local_88 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_timeIntervalSince1970_0269cfc8);
    local_90 = (long)in_d0 + -1;
    local_160 = local_90;
    if (local_90 <= local_88) {
      local_160 = (long)local_88;
    }
    local_98 = local_160;
    local_84 = (undefined4)local_160;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onConfirm_0269cfd0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_0050be34;
    local_b8 = &DAT_0257b3d8;
    local_a0 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_68;
    local_a4 = local_84;
    local_b0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_d0);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a0,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

