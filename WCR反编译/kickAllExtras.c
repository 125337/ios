// kickAllExtras @ 0189fa70

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomDuplicateJoinViewController::kickAllExtras(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 != 0) {
    _objc_initWeak(auStack_28,local_18);
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__cS_MROYuRYt);
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0189fcd0;
    local_48 = &DAT_0257be28;
    _objc_copyWeak(auStack_40,auStack_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_hQ_QYYO,puVar3,&cf_SOYu,
               &::cf___,&cf_Sm,&local_60,IVar2);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

