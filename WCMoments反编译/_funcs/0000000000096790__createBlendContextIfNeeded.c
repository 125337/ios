// _createBlendContextIfNeeded @0x96790

/* Function Stack Size: 0x10 bytes */

bool WCMYYImageDecoder::_createBlendContextIfNeeded(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0x7fffffffffffffff;
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    uVar1 = _WCMYYCGColorSpaceGetDeviceRGB();
    uVar1 = _CGBitmapContextCreate(0,uVar2,uVar3,8,0,uVar1,&DAT_00002002);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
  }
  return (uint)(*(long *)(param_1 + 0x88) != 0);
}

