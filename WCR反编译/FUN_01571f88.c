// FUN_01571f88 @ 01571f88

byte FUN_01571f88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  undefined1 auStack_80 [8];
  undefined **local_78;
  undefined **local_70 [3];
  long local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_01577578();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    local_48 = PTR_s_showAlertWithTitle_message_cance_026a5b88;
    local_40 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showAlertWithTitle_message_cance_026a5b88), ((ulong)pcVar2 & 1) == 0)) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      _objc_initWeak(auStack_50,local_28);
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      ppuVar3 = &PTR___NSConcreteGlobalBlock_02586880;
      local_58 = lVar1;
      _objc_retainBlock();
      lVar1 = local_58;
      ppuVar4 = &local_a8;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_015775f4;
      local_90 = &DAT_02579c60;
      local_70[0] = ppuVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar1;
      _objc_copyWeak(auStack_80,auStack_50);
      _objc_retainBlock();
      local_78 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,local_48,&cf___,&cf_nx_RdaggSWT,&cf_Sm,local_70[0],&cf_nx,ppuVar4);
      local_11 = 1;
      local_34 = 1;
      _objc_storeStrong(&local_78);
      _objc_destroyWeak(auStack_80);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(local_70,0);
      _objc_storeStrong(&local_58,0);
      _objc_destroyWeak(auStack_50);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

