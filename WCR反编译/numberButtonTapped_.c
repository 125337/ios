// numberButtonTapped: @ 00009d2c

/* Function Stack Size: 0x18 bytes */

void EncryptionLock::numberButtonTapped_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  dispatch_time_t dVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  ID local_58;
  ID local_50 [3];
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_playTapticFeedback_0269cc90);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enteredCode_0269cc98);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 < 6) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enteredCode_0269cc98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_appendString__0269ccb0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_50[0];
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enteredCode_0269cc98);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_viewWithTag__026cabe0,IVar4);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enteredCode_0269cc98);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar2 == 6) {
      dVar6 = _dispatch_time(0,100000000);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_0000a3c0;
      local_68 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = IVar1;
      _dispatch_after(dVar6,puVar3,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

