// FUN_0083c638 @ 0083c638

bool FUN_0083c638(ulong param_1)

{
  double local_28;
  bool local_11;
  
  if (((DAT_028cd233 & 1) == 0) || (_WCRFrostedBubbleEnabled(), (param_1 & 1) != 0)) {
    local_11 = false;
  }
  else {
    FUN_0083a3a8();
    if ((param_1 & 1) == 0) {
      local_28 = DAT_026f4850;
    }
    else {
      local_28 = DAT_026f4848;
    }
    local_11 = local_28 < DAT_02324348;
  }
  return local_11;
}

