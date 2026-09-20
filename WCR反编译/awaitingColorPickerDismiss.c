// awaitingColorPickerDismiss @ 018cef64

/* Function Stack Size: 0x10 bytes */

bool WCRefineChatToolbarViewController::awaitingColorPickerDismiss(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_awaitingColorPickerDismiss) & 1;
}

