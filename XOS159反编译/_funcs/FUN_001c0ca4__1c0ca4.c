// FUN_001c0ca4 @0x1c0ca4


void FUN_001c0ca4(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  FUN_002a44a0(&cf_MM,param_2,&cf_MusicPlayerMgr);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = _NSClassFromString();

  _objc_release(uVar1);

  uVar1 = extraout_x1;

  if (lVar2 != 0 && DAT_003ea890 == 0) {

    FUN_001c26e0(lVar2,"onLevelMeterPeak:",FUN_001c2738,&DAT_003ea890);

    FUN_001c26e0(lVar2,"playWithMusicInfo:",FUN_001c2818,&DAT_003ea898);

    FUN_001c26e0(lVar2,"playWithMusicInfo:updateSessionId:",FUN_001c289c,&DAT_003ea8a0);

    FUN_001c26e0(lVar2,"_realPlayWithMusicInfo:musicDataUrl:cacheUrl:cacheId:",FUN_001c2928,

                 &DAT_003ea8a8);

    FUN_001c26e0(lVar2,"resumePlay",FUN_001c2a14,&DAT_003ea8b0);

    FUN_001c26e0(lVar2,"stopPlay",FUN_001c2a70,&DAT_003ea8b8);

    FUN_001c26e0(lVar2,"pausePlayManual:pauseDownload:",FUN_001c2acc,&DAT_003ea8c0);

    FUN_001c26e0(lVar2,"pausePlayManual:pauseDownload:reportScene:",FUN_001c2b54,&DAT_003ea8c8);

    uVar1 = extraout_x1_00;

  }

  FUN_002a44a0(&cf_Ting,uVar1,&cf_MusicPlayerManager);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = _NSClassFromString();

  _objc_release(uVar1);

  if ((lVar2 != 0) && (DAT_003ea8d0 == 0)) {

    FUN_001c26e0(lVar2,"makePlayerActive:",FUN_001c2bec,&DAT_003ea8d0);

    FUN_001c26e0(lVar2,"onPlayerChanged",FUN_001c2c70,&DAT_003ea8d8);

    FUN_001c26e0(lVar2,"playApp:onPlayTaskStatusChanged:tingItem:onEvent:withContext:",FUN_001c2cc4,

                 &DAT_003ea8e0);

    return;

  }

  return;

}




