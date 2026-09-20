// FUN_016ba8f0 @ 016ba8f0

undefined1  [16] FUN_016ba8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e3eeb);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 == 0) {
    uStack_18 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_20 = *(undefined8 *)PTR__CGPointZero_025782e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_CGPointValue_0269e330);
    local_20 = param_1;
    uStack_18 = param_2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

