// FUN_001d1e50 @ 001d1e50

bool FUN_001d1e50(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (param_1 != 0) {
    lVar2 = param_1;
    FUN_001d2138(param_1,"Badge");
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = param_1;
      FUN_001d2138(param_1,"Head");
      bVar1 = true;
      if (lVar2 == 0) {
        lVar2 = param_1;
        FUN_001d2138(param_1,"Avatar");
        bVar1 = true;
        if (lVar2 == 0) {
          lVar2 = param_1;
          FUN_001d2138(param_1,"Icon");
          bVar1 = true;
          if (lVar2 == 0) {
            lVar2 = param_1;
            FUN_001d2138(param_1,"Button");
            bVar1 = true;
            if (lVar2 == 0) {
              lVar2 = param_1;
              FUN_001d2138(param_1,"Indicator");
              bVar1 = true;
              if (lVar2 == 0) {
                lVar2 = param_1;
                FUN_001d2138(param_1,"Comment");
                bVar1 = true;
                if (lVar2 == 0) {
                  lVar2 = param_1;
                  FUN_001d2138(param_1,"Like");
                  bVar1 = true;
                  if (lVar2 == 0) {
                    FUN_001d2138(param_1,"Arrow");
                    bVar1 = param_1 != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar1;
}

