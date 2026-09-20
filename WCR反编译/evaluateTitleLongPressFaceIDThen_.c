// evaluateTitleLongPressFaceIDThen: @ 01114350

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::evaluateTitleLongPressFaceIDThen_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLongPressAuthenticating_026aef70);
  if ((IVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___LAContext_026cdfa8;
    _objc_alloc_init();
    local_50 = 0;
    local_58 = 0;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_58);
    _objc_storeStrong(&local_50,local_58);
    if (((ulong)puVar2 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLongPressRequirePassword_026aefa8);
      if ((IVar3 & 1) == 0) {
        if (local_38 != 0) {
          (**(code **)(local_38 + 0x10))();
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPendingTitleLongPressSuccess__026aef88,local_38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_presentTitleLongPressPasswordAle_026aefa0);
      }
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setTitleLongPressAuthenticating__026aef80,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setPendingTitleLongPressSuccess__026aef88,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_suppressForegroundExitAutoHideFo_026aefb0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setLocalizedFallbackTitle__026aec38,&cf_eQ_x);
      puVar2 = local_48;
      local_88 = 0;
      local_78 = 0x32000000;
      local_74 = 0x30;
      local_70 = FUN_011146f4;
      local_68 = FUN_01114748;
      local_80 = &local_88;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_48;
      local_60 = puVar2;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_01114774;
      local_a0 = &DAT_02585620;
      IVar3 = local_28;
      local_90 = &local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_evaluatePolicy_localizedReason_r_0269cc28,1,&cf_>f_yby__YS,&local_b8);
      _objc_storeStrong(&local_98);
      __Block_object_dispose(&local_88,8);
      _objc_storeStrong(&local_60,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setPendingTitleLongPressSuccess__026aef88,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentTitleLongPressPasswordAle_026aefa0);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

