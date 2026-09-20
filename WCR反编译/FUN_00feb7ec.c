// FUN_00feb7ec @ 00feb7ec

void FUN_00feb7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  segment_command *psVar1;
  cfstringStruct *local_80;
  segment_command *local_48;
  segment_command *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = param_5;
  FUN_00feda00();
  psVar1 = (segment_command *)PTR_WCRInputBoxTextUndoEntry_026cec58;
  _objc_alloc_init();
  local_40 = psVar1;
  (*(code *)PTR__objc_msgSend_02578628)(psVar1,PTR_s_setGrow__026ad5a0,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTool__026ad5a8,local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setInner__026ad5b0,local_28);
  if (local_30 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBeforeText__026ad5b8,local_80);
  psVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCursor__026ad5c0,local_38);
  FUN_00fed98c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = psVar1;
  (*(code *)PTR__objc_msgSend_02578628)(psVar1,PTR_s_addObject__0269d180,local_40);
  while( true ) {
    psVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (psVar1 < &segment_command_00000020 || &psVar1[-1].fileoff == (qword *)0x0) break;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,0);
  }
  _objc_storeStrong(&psVar1[-1].fileoff,&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

