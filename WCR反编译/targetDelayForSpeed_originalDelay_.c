// targetDelayForSpeed:originalDelay: @ 00f38488

/* Function Stack Size: 0x20 bytes */

double WCRefineEmoticonToolsHelper::targetDelayForSpeed_originalDelay_
                 (ID param_1,SEL param_2,double param_3,double param_4)

{
  long lVar1;
  double local_58;
  double local_8;
  
  if (1.0 <= param_3) {
    lVar1 = (long)param_3;
    if (lVar1 == 1) {
      local_8 = DAT_02323c68;
    }
    else if (lVar1 == 2) {
      local_8 = DAT_02323c88;
    }
    else if (lVar1 == 3) {
      local_8 = DAT_02323f00;
    }
    else if (lVar1 == 4) {
      local_8 = DAT_02323e38;
    }
    else {
      local_8 = DAT_02323d38;
    }
  }
  else {
    local_58 = param_3;
    if (param_3 < 0.10000000149011612) {
      local_58 = 0.10000000149011612;
    }
    local_8 = param_4 / local_58;
  }
  return local_8;
}

