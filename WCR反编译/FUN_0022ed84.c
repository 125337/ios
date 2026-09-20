// FUN_0022ed84 @ 0022ed84

void FUN_0022ed84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_discardCachedHeadImg__026a0a20);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_discardCachedHeadImg__026a0a20,local_20);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_discardCachedHeadImgInMemory__026a0a28);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_discardCachedHeadImgInMemory__026a0a28,local_20);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_discardCachedHeadImgInFIC__026a0a30
              );
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_discardCachedHeadImgInFIC__026a0a30,local_20);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

