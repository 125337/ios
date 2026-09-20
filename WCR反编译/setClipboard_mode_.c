// setClipboard:mode: @ 0197886c

/* Function Stack Size: 0x20 bytes */

void WCRFileManagerState::setClipboard_mode_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_58;
  undefined *local_38;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
  local_58 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_38 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipboardPaths__026ba1d0,local_58);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipboardMode__026ba1d8,param_4);
  _objc_storeStrong(&local_28,0);
  return;
}

