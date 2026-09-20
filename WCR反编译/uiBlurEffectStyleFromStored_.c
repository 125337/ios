// uiBlurEffectStyleFromStored: @ 016150d8

/* WARNING: Removing unreachable block (ram,0x016151ac) */
/* WARNING: Removing unreachable block (ram,0x016151dc) */
/* WARNING: Removing unreachable block (ram,0x016151bc) */
/* WARNING: Removing unreachable block (ram,0x016151e4) */
/* WARNING: Removing unreachable block (ram,0x016151cc) */
/* Function Stack Size: 0x18 bytes */

long_long WCRSuperFloatProfileStore::uiBlurEffectStyleFromStored_
                    (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_8;
  
  if (param_3 == 1) {
    local_8 = 7;
  }
  else if (param_3 == 2) {
    local_8 = 9;
  }
  else if (param_3 == 3) {
    local_8 = 10;
  }
  else if (param_3 == 4) {
    local_8 = 6;
  }
  else if (param_3 == 5) {
    local_8 = 0x12;
  }
  else if (param_3 == 6) {
    local_8 = 0xd;
  }
  else {
    local_8 = 8;
  }
  return local_8;
}

