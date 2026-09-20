// FUN_0024414c @ 0024414c

void FUN_0024414c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [15];
  byte local_59;
  ulong local_58;
  undefined *local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar2 = param_1 + 0x20;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_40 = PTR_s_editImageActionSheetClickedButto_026a0d60;
  local_59 = 0;
  bVar1 = uVar2 != 0;
  local_38 = uVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_40);
  _NSLog(&cf__wcr__edit_image_send_menueventActionfireddelegate___selector__d);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_40);
  if ((uVar2 & 1) != 0) {
    FUN_00244460(local_38,&cf_eventAction);
    uVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_028c9370,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00244e6c;
    local_70 = &DAT_02578da0;
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    _dispatch_async(puVar3,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

