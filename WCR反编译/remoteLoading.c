// remoteLoading @ 017d4b40

/* Function Stack Size: 0x10 bytes */

bool WCRAIModelPickerViewController::remoteLoading(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_remoteLoading) & 1;
}

