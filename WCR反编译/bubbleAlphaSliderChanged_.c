// bubbleAlphaSliderChanged: @ 01f2fe30

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineUIBeautifyViewController::bubbleAlphaSliderChanged_
          (WCRefineUIBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  float in_s0;
  double dVar4;
  long local_40;
  undefined8 local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  local_30 = (double)(long)in_s0;
  (*(code *)PTR__objc_msgSend_02578628)((float)local_30,local_28,PTR_s_setValue__026a51b0);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (lVar1 == 0xe00d0) {
    dVar4 = local_30 / 100.0;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    dVar4 = local_30 / 100.0;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_38 = 0xe00d2;
  if (lVar1 != 0xe00d0) {
    local_38 = 0xe00d1;
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTitle_forState__026caab8,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

