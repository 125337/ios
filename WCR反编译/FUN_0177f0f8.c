// FUN_0177f0f8 @ 0177f0f8

void FUN_0177f0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *local_70;
  char *local_48;
  char *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_70 = "MMUIButton";
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  _objc_getClass();
  if (local_70 == (char *)0x0) {
    local_70 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  }
  local_40 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_buttonWithType__026ca558);
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTag__026caa80,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTitle_forState__026caab8,local_20,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addTarget_action_forControlEvent_026ca4c8,
             *(undefined8 *)(param_1 + 0x20),PTR_s_buttonTapped__026b44d0,0x40);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addSubview__026ca4c0,local_48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_buttons_026b44c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  return;
}

