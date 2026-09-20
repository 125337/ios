// FUN_001d24ac @ 001d24ac

byte FUN_001d24ac(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58 [3];
  double local_40;
  int local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    _CACurrentMediaTime();
    uVar2 = local_30;
    local_40 = param_1;
    _objc_getAssociatedObject(local_30,&DAT_028c9032);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_58[0] = uVar2;
    _objc_getAssociatedObject(local_30,&DAT_028c9033);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58[0];
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = local_60,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540),
        (uVar2 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_doubleValue_026ca608),
       param_1 < local_40)) {
      uVar2 = local_30;
      local_61 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar2;
      local_78 = 0;
      do {
        if (local_70 == 0 || 0x17 < local_78) break;
        uVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_s_rangeOfString__0269d838;
        local_80 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rangeOfString__0269d838,&cf_WCComment);
        bVar1 = true;
        local_90 = uVar2;
        local_88 = puVar4;
        if (uVar2 == 0x7fffffffffffffff) {
          uVar2 = local_80;
          puVar4 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_rangeOfString__0269d838,&cf_CommentDetail);
          bVar1 = true;
          local_a0 = uVar2;
          local_98 = puVar4;
          if (uVar2 == 0x7fffffffffffffff) {
            uVar2 = local_80;
            puVar4 = PTR_s_rangeOfString__0269d838;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_rangeOfString__0269d838,&cf_CommentCell);
            bVar1 = true;
            local_b0 = uVar2;
            local_a8 = puVar4;
            if (uVar2 == 0x7fffffffffffffff) {
              uVar2 = local_80;
              puVar4 = PTR_s_rangeOfString__0269d838;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_80,PTR_s_rangeOfString__0269d838,&cf_CommentView);
              bVar1 = true;
              local_c0 = uVar2;
              local_b8 = puVar4;
              if (uVar2 == 0x7fffffffffffffff) {
                uVar2 = local_80;
                puVar4 = PTR_s_rangeOfString__0269d838;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_rangeOfString__0269d838,&cf_CommentsView);
                bVar1 = true;
                local_d0 = uVar2;
                local_c8 = puVar4;
                if (uVar2 == 0x7fffffffffffffff) {
                  uVar2 = local_80;
                  puVar4 = PTR_s_rangeOfString__0269d838;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_80,PTR_s_rangeOfString__0269d838,&cf_CommentImage);
                  bVar1 = uVar2 != 0x7fffffffffffffff;
                  local_e0 = uVar2;
                  local_d8 = puVar4;
                }
              }
            }
          }
        }
        if (bVar1) {
          local_61 = 1;
          local_34 = 3;
        }
        else {
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_70;
          local_70 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_78 = local_78 + 1;
          local_34 = 0;
        }
        _objc_storeStrong(&local_80,0);
      } while (local_34 == 0);
      uVar2 = local_30;
      if ((local_61 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = uVar2;
        local_78 = 0;
        do {
          if (local_e8 == 0 || 0x13 < local_78) break;
          uVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_f0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rangeOfString__0269d838,&cf_WCComment);
          bVar1 = true;
          if (uVar2 == 0x7fffffffffffffff) {
            uVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_rangeOfString__0269d838,&cf_CommentDetail);
            bVar1 = uVar2 != 0x7fffffffffffffff;
          }
          if (bVar1) {
            local_61 = 1;
            local_34 = 5;
          }
          else {
            uVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_nextResponder_0269d0d8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_e8;
            local_e8 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_78 = local_78 + 1;
            local_34 = 0;
          }
          _objc_storeStrong(&local_f0,0);
        } while (local_34 == 0);
        _objc_storeStrong(&local_e8,0);
      }
      uVar2 = local_30;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_61 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c9033,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_30;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40 + 0.25,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c9032,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_21 = local_61 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_boolValue_026ca540);
      local_21 = (byte)uVar2 & 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

