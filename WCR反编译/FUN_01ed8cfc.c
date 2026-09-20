// FUN_01ed8cfc @ 01ed8cfc

undefined8 FUN_01ed8cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  switch(local_20) {
  case 0x3e9:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardHeight_026a8948);
    local_18 = param_1;
    break;
  case 0x3ea:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardWidth_026a8950);
    local_18 = param_1;
    break;
  case 0x3eb:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardCornerRadius_026c6ef8);
    local_18 = param_1;
    break;
  case 0x3ec:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardStrokeWidth_026c6f00);
    local_18 = param_1;
    break;
  case 0x3ed:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardWebContentScale_026c6d70);
    local_18 = param_1;
    break;
  case 0x3ee:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardWebOverallScale_026c6d78);
    local_18 = param_1;
    break;
  case 0x3ef:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardLocalFontSize_026c6e00);
    local_18 = param_1;
    break;
  case 0x3f0:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentItemSpacing_026c6e10);
    local_18 = param_1;
    break;
  case 0x3f1:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentInset_026c78b8);
    local_18 = param_1;
    break;
  case 0x3f2:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardBulletTextSpacing_026c71d0);
    local_18 = param_1;
    break;
  case 0x3f3:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardBulletSize_026c6e08);
    local_18 = param_1;
    break;
  case 0x3f4:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardSideMargin_026a8968);
    local_18 = param_1;
    break;
  case 0x3f5:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardTopSpacing_026a8958);
    local_18 = param_1;
    break;
  case 0x3f6:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardBottomSpacing_026a8960);
    local_18 = param_1;
    break;
  case 0x3f7:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardTitleFontSize_026c6df0);
    local_18 = param_1;
    break;
  case 0x3f8:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardScale_026a8970);
    local_18 = param_1;
    break;
  case 0x3f9:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardOffsetX_026a8978);
    local_18 = param_1;
    break;
  case 0x3fa:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardOffsetY_026c6e28);
    local_18 = param_1;
    break;
  case 0x3fb:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentHorizontalInset_026c6f28);
    local_18 = param_1;
    break;
  case 0x3fc:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentVerticalInset_026c6de0);
    local_18 = param_1;
    break;
  case 0x3fd:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentScale_026c6ec8);
    local_18 = param_1;
    break;
  case 0x3fe:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentOffsetX_026c6f38);
    local_18 = param_1;
    break;
  case 0x3ff:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardContentOffsetY_026c6f40);
    local_18 = param_1;
    break;
  case 0x400:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardWebContentOffsetX_026c6d80);
    local_18 = param_1;
    break;
  case 0x401:
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardWebContentOffsetY_026c6d88);
    local_18 = param_1;
    break;
  default:
    local_18 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

