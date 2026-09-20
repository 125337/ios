// FUN_0027ed60 @ 0027ed60

void FUN_0027ed60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  ulong local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar1 = param_1 + 0x58;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = uVar1;
  if ((uVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finished_026a15b0), (uVar1 & 1) != 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_48 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 1;
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_0027f480(lVar5,*(undefined8 *)(param_1 + 0x28));
    local_50 = lVar5;
    if (((-1 < lVar5) &&
        (FUN_0027164c(lVar5), local_50 != *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18)
        )) && ((local_50 % 5 == 0 ||
               (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) == 1)))) {
      *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = local_50;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_00273fec(lVar5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) < 0x78) {
        dVar3 = _dispatch_time(0,500000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_0027f7f4;
        local_80 = &DAT_0257b2e8;
        local_78 = *(undefined8 *)(param_1 + 0x40);
        _dispatch_after(dVar3,puVar4,&local_98);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_48 = 0;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x20);
        FUN_00273fec(lVar5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),2);
        _objc_retainAutoreleasedReturnValue();
        local_60 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 == 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          uVar2 = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
            lVar5 = *(long *)(param_1 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            uVar1 = local_38;
            if (lVar5 == 0) {
              uVar2 = 0xfffffffffffffff9;
              FUN_00272848(0xfffffffffffffff9,&cf_N_eN_gcS0RZSOc);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finishWithPath_error__026a15f8,0);
              (*(code *)PTR__objc_release_02578630)(uVar2);
              local_48 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cancel_0269d1e8);
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFinished__026a15b8,1);
              if (DAT_028c95a0 == local_38) {
                _objc_storeStrong(0,&DAT_028c95a0,0);
              }
              uVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_completion_0269fb98);
              _objc_retainAutoreleasedReturnValue();
              local_70 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCompletion__0269fdc8,0);
              FUN_0027ebd0(*(undefined8 *)(param_1 + 0x38),&cf_mp4,local_70);
              local_48 = 1;
              _objc_storeStrong(&local_70,0);
            }
          }
          else {
            lVar5 = *(long *)(param_1 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            local_68 = &cf__eN_e_;
            if (lVar5 == 0) {
              local_68 = &cf__eN_eN_gcS0RZSOc;
            }
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_38;
            uVar2 = 0xfffffffffffffff9;
            FUN_00272848(0xfffffffffffffff9,local_68);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finishWithPath_error__026a15f8,0);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_48 = 1;
            _objc_storeStrong(&local_68,0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_finishWithPath_error__026a15f8,local_60,0);
          lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          uVar2 = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_48 = 1;
        }
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_finishWithPath_error__026a15f8,local_58,0);
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_48 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

