// panSelecting @ 0169a6d8

/* Function Stack Size: 0x10 bytes */

bool WCRWordSegPickerController::panSelecting(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_panSelecting) & 1;
}

