// FUN_0056caac @ 0056caac

void FUN_0056caac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,local_48 != 0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,uStack_38,local_30,uStack_28,puVar1,PTR_s_setFrame__026ca960);
  if (local_48 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTitle_forState__026caab8,local_48,0);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_setTitleColor_forState__026caac0,local_50,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_58,PTR_s_fire__026a48e8,
             0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_58);
  puVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

