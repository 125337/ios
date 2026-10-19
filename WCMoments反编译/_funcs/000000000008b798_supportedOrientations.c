// supportedOrientations @0x8b798

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBIBScreenRotationHandler::supportedOrientations(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x48);
}

