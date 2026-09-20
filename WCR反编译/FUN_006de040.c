// FUN_006de040 @ 006de040

void FUN_006de040(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_28 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_40 = 1;
  }
  else {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_pbRequest_026a6c28);
    if ((uVar4 & 1) == 0) {
      local_40 = 1;
    }
    else {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_pbRequest_026a6c28);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar4;
      FUN_006de7dc(uVar4,local_30);
      if ((uVar4 & 1) == 0) {
        local_40 = 1;
      }
      else {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_pbResponse_026a6c30);
        if ((uVar4 & 1) == 0) {
          local_40 = 1;
        }
        else {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_pbResponse_026a6c30);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = "GetA8KeyResp";
          local_50 = uVar4;
          _objc_getClass();
          local_58 = pcVar5;
          if (((local_50 == 0) || (pcVar5 == (char *)0x0)) ||
             (uVar4 = local_50,
             (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,pcVar5),
             (uVar4 & 1) == 0)) {
            local_40 = 1;
          }
          else {
            uVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_fullUrl_026a6c38);
            if ((uVar4 & 1) == 0) {
              local_40 = 1;
            }
            else {
              uVar4 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fullUrl_026a6c38);
              _objc_retainAutoreleasedReturnValue();
              local_60 = uVar4;
              FUN_006dea9c();
              if ((uVar4 & 1) == 0) {
                local_40 = 1;
              }
              else {
                uVar4 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_reqUrl_026a6c40);
                if ((uVar4 & 1) == 0) {
                  local_40 = 1;
                }
                else {
                  uVar4 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_reqUrl_026a6c40);
                  _objc_retainAutoreleasedReturnValue();
                  local_70 = 0;
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_68 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_68;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_string_0269cc38);
                    if ((uVar4 & 1) != 0) {
                      uVar6 = local_68;
                      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_string_0269cc38);
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = local_70;
                      local_70 = uVar6;
                      (*(code *)PTR__objc_release_02578630)(uVar4);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_70,local_68);
                  }
                  uVar4 = local_70;
                  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if (((uVar4 & 1) == 0) ||
                     (uVar4 = local_70,
                     (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
                     uVar4 == 0)) {
                    local_40 = 1;
                  }
                  else {
                    uVar4 = local_50;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_50,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setFullUrl__026a6c48);
                    if ((uVar4 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_50,PTR_s_setFullUrl__026a6c48,local_70);
                    }
                    uVar4 = local_50;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_50,PTR_s_respondsToSelector__026ca818,
                               PTR_s_baseResponse_026a6c50);
                    if ((uVar4 & 1) != 0) {
                      uVar4 = local_50;
                      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_baseResponse_026a6c50);
                      _objc_retainAutoreleasedReturnValue();
                      local_78 = uVar4;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setRet__026a6c58);
                      if ((uVar4 & 1) != 0) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setRet__026a6c58,0);
                      }
                      _objc_storeStrong(&local_78,0);
                    }
                    local_40 = 0;
                  }
                  _objc_storeStrong(&local_70);
                  _objc_storeStrong(&local_68,0);
                }
              }
              _objc_storeStrong(&local_60,0);
            }
          }
          _objc_storeStrong(&local_50,0);
        }
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

