// FUN_01ebeb78 @ 01ebeb78

void FUN_01ebeb78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  switch(local_18) {
  case 0x3e9:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardHeight__026c6d90);
    break;
  case 0x3ea:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardWidth__026c6d98);
    break;
  case 0x3eb:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardCornerRadius__026c7b18);
    break;
  case 0x3ec:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardStrokeWidth__026c7b20);
    break;
  case 0x3ed:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardWebContentScale__026c6da0);
    break;
  case 0x3ee:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardWebOverallScale__026c6da8);
    break;
  case 0x3ef:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardLocalFontSize__026c7b60);
    break;
  case 0x3f0:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardContentItemSpacing__026c7b38);
    break;
  case 0x3f1:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardContentInset__026c7b30);
    break;
  case 0x3f2:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardBulletTextSpacing__026c7b70);
    break;
  case 0x3f3:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardBulletSize__026c7b78);
    break;
  case 0x3f4:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardSideMargin__026c7b28);
    break;
  case 0x3f5:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardTopSpacing__026c7b40);
    break;
  case 0x3f6:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardBottomSpacing__026c7b48);
    break;
  case 0x3f7:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardTitleFontSize__026c7b68);
    break;
  case 0x3f8:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardScale__026c7d80);
    break;
  case 0x3f9:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardOffsetX__026c7d88);
    break;
  case 0x3fa:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardOffsetY__026c7d90);
    break;
  case 0x3fb:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardContentHorizontalInse_026c7d98);
    break;
  case 0x3fc:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardContentVerticalInset__026c7da0);
    break;
  case 0x3fd:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardContentScale__026c7da8);
    break;
  case 0x3fe:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardContentOffsetX__026c7db0)
    ;
    break;
  case 0x3ff:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,PTR_s_setToDoCardContentOffsetY__026c7db8)
    ;
    break;
  case 0x400:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardWebContentOffsetX__026c6db0);
    break;
  case 0x401:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,puVar1,PTR_s_setToDoCardWebContentOffsetY__026c6db8);
  }
  _WCRefineToDoPersistHTMLLayoutForWork();
  _objc_storeStrong(&local_28,0);
  return;
}

