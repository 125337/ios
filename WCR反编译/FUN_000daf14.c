// FUN_000daf14 @ 000daf14

byte FUN_000daf14(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_130;
  bool local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_38;
  FUN_000da7f8();
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    pcVar3 = &cf_MsgRecordDetailViewController;
    _NSClassFromString();
    pcVar4 = &cf_initWithMsgWrap_;
    local_50 = pcVar3;
    _NSSelectorFromString();
    local_58 = pcVar4;
    if ((local_50 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      pcVar3 = local_50;
      _objc_alloc();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,local_58,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_60;
      puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar3 & 1) == 0) {
        local_21 = 0;
        local_48 = 1;
      }
      else {
        local_68 = 0;
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getViewController_0269d328);
        if ((uVar2 & 1) != 0) {
          uVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getViewController_0269d328);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_68;
          local_68 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_68;
        puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar6 = local_30;
        if ((uVar2 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar6 & 1) != 0) {
            _objc_storeStrong(&local_68,local_30);
          }
        }
        uVar2 = local_68;
        puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_79 = (uVar2 & 1) == 0;
        if (local_79) {
          local_130 = 0;
        }
        else {
          local_130 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_130;
        }
        local_79 = !local_79;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_130;
        if (local_79) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        bVar1 = local_70 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_pushViewController_animated__0269d590,local_60,1);
        }
        local_48 = 1;
        local_21 = bVar1;
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

