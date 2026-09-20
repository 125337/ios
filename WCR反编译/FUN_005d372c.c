// FUN_005d372c @ 005d372c

void FUN_005d372c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cb789);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = &cf_WCTimeLineCellView;
    _NSClassFromString();
    local_40 = pcVar1;
    _objc_alloc();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_initWithUrlLabelDelegate__026a5bb8);
    pcVar2 = local_48;
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),pcVar2,
                 PTR_s_initWithFrame__026ca6e8);
      pcVar1 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_initWithUrlLabelDelegate__026a5bb8,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_28 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_setAssociatedObject(local_20,&DAT_028cb789,local_28,1);
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

