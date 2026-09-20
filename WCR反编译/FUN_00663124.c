// FUN_00663124 @ 00663124

void FUN_00663124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  FUN_0065fd84(local_30,PTR_s_m_nsUserName_026a6340,"m_nsUserName");
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_40;
  if (lVar1 == 0) {
    lVar1 = local_30;
    FUN_0065fd84(local_30,PTR_s_sessionId_026a6348,"sessionId");
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40;
    local_40 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    lVar2 = local_40;
    if (lVar1 == 0) {
      lVar1 = local_30;
      FUN_0065fd84(local_30,PTR_s_userName_0269f7b8,"m_userName");
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_40 = lVar1;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      lVar2 = local_40;
      if (lVar1 == 0) {
        lVar1 = local_30;
        FUN_0065fd84(local_30,PTR_s_brandUserName_026a6350,"_brandUserName");
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_40;
        local_40 = lVar1;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        lVar2 = local_40;
        if (lVar1 == 0) {
          lVar1 = local_38;
          FUN_0065fd84(local_38,PTR_s_m_nsRealUsrName_026a6358,"m_nsRealUsrName");
          _objc_retainAutoreleasedReturnValue();
          lVar2 = local_40;
          local_40 = lVar1;
          (*(code *)PTR__objc_release_02578630)(lVar2);
          lVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          lVar2 = local_40;
          if (lVar1 == 0) {
            lVar1 = local_38;
            FUN_0065fd84(local_38,PTR_s_userName_0269f7b8,"m_userName");
            _objc_retainAutoreleasedReturnValue();
            lVar2 = local_40;
            local_40 = lVar1;
            (*(code *)PTR__objc_release_02578630)(lVar2);
            lVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
            lVar2 = local_40;
            if (lVar1 == 0) {
              lVar1 = local_38;
              FUN_0065fd84(local_38,PTR_s_m_userName_026a6360,"m_userName");
              _objc_retainAutoreleasedReturnValue();
              lVar2 = local_40;
              local_40 = lVar1;
              (*(code *)PTR__objc_release_02578630)(lVar2);
              lVar2 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
              local_28 = local_40;
              if (lVar2 == 0) {
                local_28 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = lVar2;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = lVar2;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = lVar2;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = lVar2;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar2;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

