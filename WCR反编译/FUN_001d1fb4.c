// FUN_001d1fb4 @ 001d1fb4

bool FUN_001d1fb4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (param_1 != 0) {
    lVar2 = param_1;
    FUN_001d2138(param_1,"WCImageView");
    bVar1 = true;
    if (lVar2 == 0) {
      lVar2 = param_1;
      FUN_001d2138(param_1,"WCPuzzle");
      bVar1 = true;
      if (lVar2 == 0) {
        lVar2 = param_1;
        FUN_001d2138(param_1,"WCSNSNode");
        bVar1 = true;
        if (lVar2 == 0) {
          lVar2 = param_1;
          FUN_001d2138(param_1,"WCContentItem");
          bVar1 = true;
          if (lVar2 == 0) {
            lVar2 = param_1;
            FUN_001d2138(param_1,"WebImage");
            bVar1 = true;
            if (lVar2 == 0) {
              lVar2 = param_1;
              FUN_001d2138(param_1,"Puzzle");
              bVar1 = true;
              if (lVar2 == 0) {
                lVar2 = param_1;
                FUN_001d2138(param_1,"Media");
                bVar1 = true;
                if (lVar2 == 0) {
                  lVar2 = param_1;
                  FUN_001d2138(param_1,"Video");
                  bVar1 = true;
                  if (lVar2 == 0) {
                    lVar2 = param_1;
                    FUN_001d2138(param_1,"Sight");
                    bVar1 = true;
                    if (lVar2 == 0) {
                      FUN_001d2138(param_1,"Album");
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
  }
  return bVar1;
}

