// FUN_001c0a1c @0x1c0a1c


void FUN_001c0a1c(void)



{

  undefined *puVar1;

  dispatch_time_t dVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  char *local_110;

  code *pcStack_108;

  undefined8 *puStack_100;

  char *pcStack_f8;

  code *local_f0;

  undefined8 *puStack_e8;

  char *pcStack_e0;

  code *pcStack_d8;

  undefined8 *local_d0;

  char *pcStack_c8;

  code *pcStack_c0;

  undefined8 *puStack_b8;

  char *local_b0;

  code *pcStack_a8;

  undefined8 *puStack_a0;

  char *pcStack_98;

  code *local_90;

  undefined8 *puStack_88;

  char *pcStack_80;

  code *pcStack_78;

  undefined8 *local_70;

  char *pcStack_68;

  code *pcStack_60;

  undefined8 *puStack_58;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_001bfa24();

  puStack_88 = &DAT_003e9830;

  local_90 = FUN_001c1a08;

  pcStack_78 = FUN_001c1a5c;

  pcStack_80 = "AudioQueuePause";

  pcStack_68 = "AudioQueueReset";

  local_70 = &DAT_003e9838;

  puStack_58 = &DAT_003e9840;

  pcStack_60 = FUN_001c1aa0;

  pcStack_c8 = "AudioQueueEnqueueBufferWithParameters";

  local_d0 = &DAT_003e9818;

  puStack_b8 = &DAT_003e9820;

  pcStack_c0 = FUN_001c1814;

  pcStack_a8 = FUN_001c1890;

  local_b0 = "AudioQueueDispose";

  pcStack_98 = "AudioQueueStop";

  puStack_a0 = &DAT_003e9828;

  pcStack_108 = FUN_001c13b4;

  local_110 = "AudioQueueNewOutput";

  pcStack_f8 = "AudioQueueNewOutputWithDispatchQueue";

  puStack_100 = &DAT_003e9808;

  puStack_e8 = &DAT_003e9810;

  local_f0 = FUN_001c15bc;

  pcStack_d8 = FUN_001c17c8;

  pcStack_e0 = "AudioQueueEnqueueBuffer";

  FUN_001c3204(&local_110,8,FUN_001c1ae4);

  puVar1 = PTR___dispatch_main_q_00388740;

  _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038e830);

  dVar2 = _dispatch_time(0,1500000000);

  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_0038e850);

  _objc_release(puVar1);

  dVar2 = _dispatch_time(0,4000000000);

  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_0038e870);

  _objc_release(puVar1);

  dVar2 = _dispatch_time(0,10000000000);

  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_0038e890);

  _objc_release(puVar1);

  dVar2 = _dispatch_time(0,20000000000);

  _dispatch_after(dVar2,puVar1,&PTR___NSConcreteGlobalBlock_0038e8b0);

  _objc_release(puVar1);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar3,auVar4._8_8_,

               *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_003883b8,0,

               auVar4._0_8_,&PTR___NSConcreteGlobalBlock_0038e8d0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar3,auVar4._8_8_,

               *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_003883d0,0,

               auVar4._0_8_,&PTR___NSConcreteGlobalBlock_0038e8f0);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




