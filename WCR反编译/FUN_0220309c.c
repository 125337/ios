// FUN_0220309c @ 0220309c

long FUN_0220309c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  (*(code *)PTR____chkstk_darwin_02578668)(unaff_x20);
  lVar3 = (long)&local_b0 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar3);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar2 + 8))(lVar3,lVar1);
  lVar3 = param_1;
  _CGImageSourceCreateWithURL(param_1,0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_a0 = 0;
  }
  else {
    local_b0 = lVar3;
    local_98 = lVar3;
    _CGImageSourceCreateImageAtIndex(lVar3,0,0);
    local_a8 = lVar3;
    (*(code *)PTR__objc_release_02578630)(local_b0);
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_a0 = local_a8;
  }
  return local_a0;
}

