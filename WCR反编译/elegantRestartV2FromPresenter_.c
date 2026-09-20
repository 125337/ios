// elegantRestartV2FromPresenter: @ 014adf48

/* Function Stack Size: 0x18 bytes */

void WCRefineRestar::elegantRestartV2FromPresenter_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_elegantRestart_026a3598);
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismiss_026a5668);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_elegantRestart_026a3598);
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector__026ca7b8,PTR_s_dismiss_026a5668);
        dVar4 = _dispatch_time(0,500000000);
        puVar2 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc0000000;
        local_7c = 0;
        local_78 = FUN_014ae294;
        local_70 = &DAT_02578c00;
        local_68 = local_18;
        _dispatch_after(dVar4,puVar2,&local_88);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar1;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc0000000;
      local_54 = 0;
      local_50 = FUN_014ae19c;
      local_48 = &DAT_02578c00;
      local_40 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_60);
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

