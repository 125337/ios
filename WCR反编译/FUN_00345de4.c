// FUN_00345de4 @ 00345de4

void FUN_00345de4(void)

{
  protocol_t *local_20;
  
  local_20 = &objc::protocol_t::UIDocumentPickerDelegate;
  do {
    local_20 = (protocol_t *)&local_20[-1].optionalInstanceMethods;
    FUN_0033c554();
  } while (local_20 != (protocol_t *)&DAT_026dfe28);
  return;
}

