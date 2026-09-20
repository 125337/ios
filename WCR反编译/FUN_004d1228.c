// FUN_004d1228 @ 004d1228

void FUN_004d1228(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  local_30 = param_4;
  FUN_004d211c();
  if ((((uVar2 & 1) != 0) && (local_28 != 0)) &&
     (uVar4 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleAtIndex__026a1248),
     (uVar4 & 1) != 0)) {
    local_48[0] = 0;
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_buttonTitleAtIndex__026a1248,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48[0];
    local_48[0] = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_48[0];
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_48[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isEqualToString__0269ccc8,&cf_XSlS),
       (uVar4 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      FUN_004d2aec(local_18,0);
      DAT_028cace9 = 1;
      DAT_028cacea = 0;
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s__checkAndSendMsgToFriend_026a4158
                );
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s__checkAndSendMsgToFriend_026a4158);
      }
      bVar1 = true;
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) goto LAB_004d1510;
  }
  (*DAT_028cacb8)(local_18,local_20,local_28,local_30);
LAB_004d1510:
  _objc_storeStrong(&local_28,0);
  return;
}

