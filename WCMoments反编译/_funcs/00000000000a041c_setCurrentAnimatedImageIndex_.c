// setCurrentAnimatedImageIndex: @0xa041c

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::setCurrentAnimatedImageIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  unsigned_long_long local_38;
  long local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  if (((*(long *)(param_1 + (long)_curAnimatedImage) != 0) &&
      (local_28 = param_3, local_20 = param_2, local_18 = param_1,
      uVar3 = _objc_msgSend_animatedImageFrameCount
                        (*(undefined8 *)(param_1 + (long)_curAnimatedImage),local_70),
      param_3 < uVar3)) && (*(unsigned_long_long *)(local_18 + (long)_curIndex) != local_28)) {
    local_60 = PTR___NSConcreteStackBlock_001104f0;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = ___55__WCMYYAnimatedImageView_setCurrentAnimatedImageIndex___block_invoke;
    local_48 = &___block_descriptor_48_e8_32s_e5_v8__0l;
    local_40 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_38 = local_28;
    local_30 = _objc_retainBlock(&local_60);
    iVar2 = _pthread_main_np();
    puVar1 = PTR___dispatch_main_q_00110528;
    if (iVar2 == 0) {
      _objc_retainAutoreleaseReturnValue();
      uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);
      _dispatch_async(uVar4,local_30);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    else {
      (**(code **)(local_30 + 0x10))();
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

