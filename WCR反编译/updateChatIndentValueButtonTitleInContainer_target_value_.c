// updateChatIndentValueButtonTitleInContainer:target:value: @ 01b4797c

/* Function Stack Size: 0x28 bytes */

void WCRefineLayoutFunctionViewController::updateChatIndentValueButtonTitleInContainer_target_value_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  long_long local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  local_38 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,param_4 + 1000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = uVar1;
  FUN_01b46f10();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

