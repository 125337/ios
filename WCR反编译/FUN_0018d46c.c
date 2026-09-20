// FUN_0018d46c @ 0018d46c

long FUN_0018d46c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte local_2d;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_18 = param_2;
  if (-1 < param_2) {
    local_2d = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_getHadSectionSocialBlackRowInHel_0269fcb0);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_getHadSectionSocialBlackRowInHel_0269fcb0);
      local_2d = (byte)uVar1;
    }
    if ((param_2 != 0) && ((local_2d & 1) == 0)) {
      local_18 = param_2 + 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

