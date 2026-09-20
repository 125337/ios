// isTextEditableKind @ 0195c124

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::isTextEditableKind(ID param_1,SEL param_2)

{
  byte local_11;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_kind_026a27e8);
  if ((param_1 == 3) || (param_1 - 7 < 4)) {
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

