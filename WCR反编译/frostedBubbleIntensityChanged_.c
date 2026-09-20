// frostedBubbleIntensityChanged: @ 01f2e87c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineUIBeautifyViewController::frostedBubbleIntensityChanged_
          (WCRefineUIBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float in_s0;
  double dVar4;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar4 = (double)(long)in_s0;
  local_30 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (DAT_02323d38 < ABS((double)SUB84(dVar4,0) - local_30)) {
    (*(code *)PTR__objc_msgSend_02578628)((float)local_30,local_28,PTR_s_setValue__026a51b0);
  }
  dVar4 = local_30;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTitle_forState__026caab8,puVar1,0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _WCRFrostedBubbleRefreshVisibleCells();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

