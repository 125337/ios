// FUN_01f83864 @ 01f83864

void FUN_01f83864(undefined8 param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined **local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_0258d080;
  _objc_retainBlock();
  local_20 = ppuVar1;
  if (local_18 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissWithAnimated__0269e420,1);
      dVar3 = _dispatch_time(0,280000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar3,puVar4,local_20);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      goto LAB_01f8395c;
    }
  }
  (*(code *)local_20[2])();
LAB_01f8395c:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

