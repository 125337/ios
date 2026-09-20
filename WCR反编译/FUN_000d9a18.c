// FUN_000d9a18 @ 000d9a18

byte FUN_000d9a18(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_68;
  byte local_61;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar3 = local_38;
  pcVar2 = &cf_m_nsUsrName;
  _NSSelectorFromString();
  FUN_000d8fe0(lVar3,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  pcVar2 = &cf_getViewController;
  local_40 = lVar3;
  _NSSelectorFromString();
  FUN_000d8e7c(uVar4,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_58[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  bVar1 = true;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    bVar1 = true;
    local_60 = uVar4;
    if (uVar4 != 0) {
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      bVar1 = lVar3 == 0;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    local_21 = 0;
    local_68 = 1;
  }
  else {
    pcVar2 = &cf_ChatRoomMemMsgListViewController;
    _NSClassFromString();
    pcVar6 = &cf_initWithChat_memContact_;
    local_70 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_70;
    local_78 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_instancesRespondToSelector__0269da90,pcVar6);
    if (((ulong)pcVar2 & 1) == 0) {
      local_21 = 0;
      local_68 = 1;
    }
    else {
      pcVar2 = local_70;
      _objc_alloc();
      pcVar6 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_78,local_40,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_80;
      puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar2 & 1) == 0) {
        local_21 = 0;
        local_68 = 1;
      }
      else {
        pcVar6 = local_80;
        FUN_000d8d08(local_80,"m_logic");
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_isMsgMatch_;
        local_88 = pcVar6;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_respondsToSelector__026ca818,pcVar2);
        local_21 = ((ulong)pcVar6 & 1) != 0;
        if ((bool)local_21) {
          _objc_setAssociatedObject(local_80,&DAT_028c8370,local_40,3);
          _objc_setAssociatedObject(local_88,&DAT_028c8370,local_40,3);
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTitle__0269cef0,&cf_J_YU_d__X__);
          uVar4 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        local_68 = 1;
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

