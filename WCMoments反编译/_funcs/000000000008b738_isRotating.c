// isRotating @0x8b738

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBScreenRotationHandler::isRotating(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x38) & 1;
}

