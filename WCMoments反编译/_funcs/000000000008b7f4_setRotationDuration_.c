// setRotationDuration: @0x8b7f4

/* Function Stack Size: 0x18 bytes */

void WCMYBIBScreenRotationHandler::setRotationDuration_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x50) = param_3;
  return;
}

