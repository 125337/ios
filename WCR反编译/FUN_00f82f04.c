// FUN_00f82f04 @ 00f82f04

byte FUN_00f82f04(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 1;
    local_34 = 1;
  }
  else {
    local_18 = &DAT_028e2eb0;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583758);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    if ((DAT_028e2e88 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028e2e88),
       (uVar1 & 1) == 0)) {
      if ((DAT_028e2e90 == 0) ||
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028e2e90),
         (uVar1 & 1) == 0)) {
        if ((DAT_028e2e98 == 0) ||
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_isKindOfClass__0269cd68,DAT_028e2e98), (uVar1 & 1) == 0)) {
          if ((DAT_028e2ea8 == 0) ||
             (uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_isKindOfClass__0269cd68,DAT_028e2ea8), (uVar1 & 1) == 0)) {
            if ((DAT_028e2ea0 == 0) ||
               (uVar1 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_isKindOfClass__0269cd68,DAT_028e2ea0), (uVar1 & 1) == 0)) {
              uVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              local_40 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_Video);
              if ((((uVar1 & 1) == 0) &&
                  (uVar1 = local_40,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_containsString__0269d0b0,&cf_WCPay), (uVar1 & 1) == 0))
                 && (uVar1 = local_40,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_40,PTR_s_containsString__0269d0b0,&cf_AppImage),
                    (uVar1 & 1) == 0)) {
                local_21 = 0;
              }
              else {
                local_21 = 1;
              }
              local_34 = 1;
              _objc_storeStrong(&local_40,0);
            }
            else {
              local_21 = 1;
              local_34 = 1;
            }
          }
          else {
            local_21 = 1;
            local_34 = 1;
          }
        }
        else {
          local_21 = 1;
          local_34 = 1;
        }
      }
      else {
        local_21 = 1;
        local_34 = 1;
      }
    }
    else {
      local_21 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

