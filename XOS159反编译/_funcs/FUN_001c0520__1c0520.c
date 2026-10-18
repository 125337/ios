// FUN_001c0520 @0x1c0520


void FUN_001c0520(float param_1)



{

  int iVar1;

  double dVar2;

  double dVar3;

  undefined *local_50;

  undefined8 local_48;

  code *local_40;

  undefined *puStack_38;

  undefined8 local_30;

  double local_28;

  

  iVar1 = FUN_001c0f98();

  if ((iVar1 != 0) && (dVar2 = (double)_CACurrentMediaTime(), 0.12 <= dVar2 - DAT_003e9800)) {

    dVar3 = (double)param_1 * 0.55 + 0.45;

    local_28 = 1.0;

    if (dVar3 <= 1.0) {

      local_28 = dVar3;

    }

    if (local_28 <= 0.45) {

      local_28 = 0.45;

    }

    local_50 = PTR___NSConcreteStackBlock_003886f0;

    local_48 = 0xc0000000;

    local_40 = FUN_001c1310;

    puStack_38 = &DAT_0038e810;

    local_30 = DAT_003e97b8;

    DAT_003e9800 = dVar2;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_50);

  }

  return;

}




