// FUN_008a8e74 @ 008a8e74

undefined8
FUN_008a8e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  uint local_12c;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar2 = local_30;
  pcVar1 = DAT_028cde00;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar2,local_38,local_40,local_48,local_50);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_58;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
  }
  else {
    pcVar5 = "CMessageWrap";
    _objc_getClass();
    if (((pcVar5 == (char *)0x0) ||
        (pcVar6 = pcVar5,
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
        ((ulong)pcVar6 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isSenderFromMsgWrap__0269d558,local_40),
       local_28 = local_58, ((ulong)pcVar5 & 1) == 0)) {
      if (local_50 != 0) {
        pcVar5 = "CContact";
        _objc_getClass();
        if ((pcVar5 != (char *)0x0) &&
           (pcVar6 = pcVar5,
           (*(code *)PTR__objc_msgSend_02578628)
                     (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_IsChatRoomContact__026a9940),
           ((ulong)pcVar6 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_IsChatRoomContact__026a9940,local_50);
          uVar2 = local_30;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                     (uint)pcVar5 & 1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028cde78,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_12c = 0;
          if (((ulong)pcVar5 & 1) != 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_12c = (uint)puVar4 ^ 1;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          uVar2 = local_58;
          if ((local_12c & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar2;
            goto LAB_008a9498;
          }
        }
      }
      uVar7 = local_40;
      FUN_008aa9f0();
      if (((uVar7 & 1) == 0) || (uVar7 = local_40, FUN_008aab60(), (uVar7 & 1) == 0)) {
        uVar2 = local_58;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar2;
      }
      else {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar2 = local_58;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_008aaf70(local_30,local_40);
          uVar2 = local_58;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
LAB_008a9498:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

