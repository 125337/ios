// FUN_00551580 @ 00551580

void FUN_00551580(double param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *local_38;
  double local_30;
  undefined4 local_28;
  undefined *local_18;
  
  FUN_00551df8();
  if ((param_2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    if ((puVar2 == (undefined *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_applicationState_0269d6d8),
       puVar2 == (undefined *)0x0)) {
      uVar1 = 0;
      FUN_00554fd4();
      if ((uVar1 & 1) == 0) {
        FUN_00555218();
        if ((uVar1 & 1) == 0) {
          FUN_00555480();
          if ((uVar1 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)();
            local_30 = param_1;
            if ((DAT_028cb420 <= 0.0) ||
               (param_1 = param_1 - DAT_028cb420, FUN_00551868(), (double)(long)puVar2 <= param_1))
            {
              FUN_00551994();
              _objc_retainAutoreleasedReturnValue();
              local_38 = puVar2;
              if (puVar2 == (undefined *)0x0) {
                local_28 = 1;
              }
              else {
                DAT_028cb420 = local_30;
                FUN_005512e0();
                puVar2 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_respondsToSelector__026ca818,
                           PTR_s_updateTimelineHead_026a49a0);
                if (((ulong)puVar2 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateTimelineHead_026a49a0);
                }
                local_28 = 0;
              }
              _objc_storeStrong(&local_38,0);
            }
            else {
              local_28 = 1;
            }
          }
          else {
            local_28 = 1;
          }
        }
        else {
          local_28 = 1;
        }
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

