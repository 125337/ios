// FUN_002be168 @ 002be168

byte FUN_002be168(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c9809);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      lVar1 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028c9820);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        lVar1 = local_20;
        _objc_getAssociatedObject(local_20,&DAT_028c9804);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar1 == 0) {
          lVar1 = local_20;
          _objc_getAssociatedObject(local_20,&DAT_028c9805);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar1 == 0) {
            lVar1 = local_20;
            _objc_getAssociatedObject(local_20,&DAT_028c9807);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (lVar1 == 0) {
              lVar1 = local_20;
              _objc_getAssociatedObject(local_20,&DAT_028c9802);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (lVar1 == 0) {
                lVar1 = local_20;
                FUN_002acd8c(local_20,0x24f754);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (lVar1 == 0) {
                  lVar1 = local_20;
                  FUN_002acd8c(local_20,0x24f750);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (lVar1 == 0) {
                    lVar1 = local_20;
                    FUN_0029ded4(local_20,0x24f749);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_release_02578630)();
                    if (lVar1 == 0) {
                      lVar1 = local_20;
                      FUN_0029ded4(local_20,0x24f74a);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_release_02578630)();
                      if (lVar1 == 0) {
                        lVar1 = local_20;
                        FUN_0029ded4(local_20,0x24f74b);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_release_02578630)();
                        if (lVar1 == 0) {
                          local_11 = 0;
                        }
                        else {
                          local_11 = 1;
                        }
                      }
                      else {
                        local_11 = 1;
                      }
                    }
                    else {
                      local_11 = 1;
                    }
                  }
                  else {
                    local_11 = 1;
                  }
                }
                else {
                  local_11 = 1;
                }
              }
              else {
                local_11 = 1;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

