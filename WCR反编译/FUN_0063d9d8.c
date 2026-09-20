// FUN_0063d9d8 @ 0063d9d8

void FUN_0063d9d8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_58;
  long local_50 [3];
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    local_38 = lVar2;
    if (bVar1) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      FUN_0063a398(lVar3);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_viewWithTag__026cabe0,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50[0] = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____deferred);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      FUN_0063c14c(local_28,local_50[0],*(undefined4 *)(param_1 + 0x30),puVar4);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(local_50,0);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

