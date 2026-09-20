// adjustAvatarFrameChatPageSelfOffsetY @ 01822328

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineAvatarCornerBeautifyViewController::adjustAvatarFrameChatPageSelfOffsetY
          (WCRefineAvatarCornerBeautifyViewController *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_d0;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,IVar1,PTR_s_showOffsetInputWithTitle_message_026b6300,&cf__eWvMOy,
             &cf_<PTNOPyck<PTNOPy);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

