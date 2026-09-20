// msgBannerRealtimePreviewView @ 01ba2adc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineMessageBannerBeautifyViewController::msgBannerRealtimePreviewView(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d2;
  double dVar7;
  undefined8 uVar8;
  double local_120;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  undefined *local_68 [5];
  double local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_40 = in_d2;
  if (in_d2 < 80.0) {
    local_40 = 80.0;
  }
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar8 = 0x4055000000000000;
  dVar7 = local_40;
  FUN_01b8eba0();
  local_88 = uVar5;
  local_80 = uVar6;
  local_78 = dVar7;
  local_70 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,dVar7,uVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_68[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setClipsToBounds__026ca8c8,0);
  pcVar4 = "QuickReplyMsgNotifyView";
  _objc_getClass();
  local_98 = (char *)0x0;
  local_90 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    pcVar1 = local_98;
    local_98 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar4 = local_98;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    local_120 = local_40 - 32.0;
    if (local_120 <= 80.0) {
      local_120 = 80.0;
    }
    uVar5 = 0x4030000000000000;
    uVar6 = 0x4028000000000000;
    uVar8 = 0x404c000000000000;
    FUN_01b8eba0();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar6,local_120,uVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,&cf_S_MR_OHr_gelR__e_jE_);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTextAlignment__026caa90,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setNumberOfLines__026ca9d8,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addSubview__026ca4c0,local_a0);
    puVar2 = local_68[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_98,PTR_s_setAlpha__026ca860);
    _WCRMsgBannerMarkAsPreview(local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addSubview__026ca4c0,local_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setRealtimePreviewBanner__026c0220,local_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_msgBannerFillOfficialNotifyView__026c0228,local_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_msgBannerDisableOfficialNotifyIn_026c0230,local_98);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_msgBannerApplyOfficialPreviewLay_026c0238,local_98,local_68[0]);
    puVar2 = local_68[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(local_68,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

