// FUN_016aaa88 @ 016aaa88

byte FUN_016aaa88(undefined8 param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  dispatch_time_t dVar8;
  double local_200;
  ulong local_1a8;
  char *local_158;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  char *local_d0;
  double local_c8;
  long local_c0;
  byte local_b2;
  byte local_b1;
  char *local_b0;
  undefined *local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  undefined1 local_72;
  bool local_71;
  char *local_70;
  char *local_68;
  char *local_60 [3];
  char *local_48;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if ((local_30 == 0) || (param_2 < 1)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    if (DAT_028e3e68 == (char *)0x0) {
      pcVar2 = "MMServiceCenter";
      _objc_getClass();
      DAT_028e3e68 = pcVar2;
    }
    pcVar2 = DAT_028e3e68;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    if (DAT_028e3e70 == (char *)0x0) {
      pcVar3 = "CContactMgr";
      _objc_getClass();
      DAT_028e3e70 = pcVar3;
    }
    pcVar3 = DAT_028e3e70;
    _objc_retainAutoreleaseReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_48 == (char *)0x0) {
      local_21 = 0;
      local_3c = 1;
    }
    else {
      local_158 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_71 = false;
      bVar1 = local_158 == (char *)0x0;
      local_60[0] = local_158;
      if (bVar1) {
        local_158 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_158;
      }
      local_71 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_158;
      if ((local_71 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      pcVar2 = local_68;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
         pcVar2 == (char *)0x0)) {
        local_21 = 0;
        local_3c = 1;
      }
      else {
        uVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        local_72 = (undefined1)uVar7;
        local_89 = 0;
        local_99 = 0;
        local_1a8 = local_30;
        if ((uVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = local_1a8;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = local_1a8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_1a8;
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        uVar6 = local_80;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
           uVar6 == 0)) {
          local_21 = 0;
          local_3c = 1;
        }
        else {
          local_a8 = PTR_s_getContactByName__0269d178;
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
          if (((ulong)pcVar2 & 1) == 0) {
            local_21 = 0;
            local_3c = 1;
          }
          else {
            pcVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,local_a8,local_80);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar2;
            if (pcVar2 == (char *)0x0) {
              local_21 = 0;
            }
            else {
              pcVar2 = "ForwardMessageLogicController";
              _objc_getClass();
              if (pcVar2 == (char *)0x0) {
                local_21 = 0;
              }
              else {
                uVar6 = local_30;
                FUN_016ab488();
                local_b1 = (byte)uVar6;
                local_b2 = 0;
                for (local_c0 = 0; local_c0 < local_38; local_c0 = local_c0 + 1) {
                  if ((local_b1 & 1) == 0) {
                    local_200 = 0.0;
                  }
                  else {
                    local_200 = (double)local_c0 * 0.6;
                  }
                  local_c8 = local_200;
                  if (0.0 < local_200) {
                    local_b2 = 1;
                    dVar8 = _dispatch_time(0,(long)(local_200 * 1000000000.0));
                    puVar5 = PTR___dispatch_main_q_02578680;
                    _objc_retainAutoreleaseReturnValue();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = local_30;
                    local_f8 = PTR___NSConcreteStackBlock_02578660;
                    local_f0 = 0xc2000000;
                    local_ec = 0;
                    local_e8 = FUN_016ac4ec;
                    local_e0 = &DAT_02578e60;
                    (*(code *)PTR__objc_retain_02578638)();
                    pcVar2 = local_b0;
                    local_d8 = uVar6;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_d0 = pcVar2;
                    _dispatch_after(dVar8,puVar5,&local_f8);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    _objc_storeStrong(&local_d0);
                    _objc_storeStrong(&local_d8,0);
                  }
                  else {
                    uVar6 = local_30;
                    FUN_016ac2ec(local_30,local_b0);
                    if ((uVar6 & 1) == 0) {
                      local_21 = local_b2 & 1;
                      goto LAB_016ab3bc;
                    }
                    local_b2 = 1;
                  }
                }
                local_21 = local_b2 & 1;
              }
            }
LAB_016ab3bc:
            local_3c = 1;
            _objc_storeStrong(&local_b0,0);
          }
        }
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

