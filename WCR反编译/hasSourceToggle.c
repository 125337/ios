// hasSourceToggle @ 0195c1b0

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::hasSourceToggle(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
  local_24 = 1;
  if (IVar1 != 7) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
    local_24 = (uint)(param_1 == 3);
  }
  return local_24;
}

