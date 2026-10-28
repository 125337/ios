@interface KvReportItem17149 : KvReportBaseItem
{
    int _NetType_21; // +0x8
    unsigned int _MsgId_23; // +0xc
    unsigned int _Idx_24; // +0x10
    unsigned int _SessionId_25; // +0x14
    unsigned int _EnterId_26; // +0x18
    unsigned int _Duration_28; // +0x1c
    unsigned int _EventType_29; // +0x20
    unsigned int _EventTime_30; // +0x24
    unsigned int _RealPlayTime_31; // +0x28
    unsigned int _EndPlayTime_32; // +0x2c
    unsigned int _StayTimeInPage_33; // +0x30
    unsigned int _Scene_34; // +0x34
    unsigned int _Subscene_35; // +0x38
    unsigned int _IsFans_37; // +0x3c
    unsigned int _BufferingTime_38; // +0x40
    unsigned int _Resolution_39; // +0x44
    unsigned int _Width_40; // +0x48
    unsigned int _OrStatus_41; // +0x4c
    unsigned int _HitBizuin_42; // +0x50
    unsigned int _PlayerType_44; // +0x54
    unsigned int _DefinitionAfter_46; // +0x58
    unsigned int _DefinitionBefore_47; // +0x5c
    unsigned int _FullScreen_48; // +0x60
    unsigned int _ActionPlayTime_50; // +0x64
    unsigned int _MoreVideosSeq_52; // +0x68
    unsigned int _GetPlayUrlErrType_54; // +0x6c
    unsigned int _VideoRecommendType_55; // +0x70
    unsigned int _VideoExtraCount_56; // +0x74
    unsigned int _RemindTrafficSize_57; // +0x78
    unsigned int _TrafficReminderType_58; // +0x7c
    unsigned int _ItemShowType_59; // +0x80
    unsigned int _LandingPageType_61; // +0x84
    unsigned int _VideoProxyState_63; // +0x88
    unsigned int _firstRenderTime_64; // +0x8c
    NSString * _BizUserName_22; // +0x90
    NSString * _VideoId_27; // +0x98
    NSString * _PlayErrType_36; // +0xa0
    NSString * _HitVid_43; // +0xa8
    NSString * _DefinitionOptions_45; // +0xb0
    NSString * _MoreVideosInfo_49; // +0xb8
    NSString * _DefinitionOptionsStr_51; // +0xc0
    NSString * _SessionIdStr_53; // +0xc8
    NSString * _ChannelSessionId_60; // +0xd0
    NSString * _VideoSessionId_62; // +0xd8
    NSString * _SpeedBefore_65; // +0xe0
    NSString * _SpeedAfter_66; // +0xe8
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (int)NetType_21;
- (void)setNetType_21:(int)arg1;
- (id)BizUserName_22;
- (void)setBizUserName_22:(id)arg1;
- (unsigned int)MsgId_23;
- (void)setMsgId_23:(unsigned int)arg1;
- (unsigned int)Idx_24;
- (void)setIdx_24:(unsigned int)arg1;
- (unsigned int)SessionId_25;
- (void)setSessionId_25:(unsigned int)arg1;
- (unsigned int)EnterId_26;
- (void)setEnterId_26:(unsigned int)arg1;
- (id)VideoId_27;
- (void)setVideoId_27:(id)arg1;
- (unsigned int)Duration_28;
- (void)setDuration_28:(unsigned int)arg1;
- (unsigned int)EventType_29;
- (void)setEventType_29:(unsigned int)arg1;
- (unsigned int)EventTime_30;
- (void)setEventTime_30:(unsigned int)arg1;
- (unsigned int)RealPlayTime_31;
- (void)setRealPlayTime_31:(unsigned int)arg1;
- (unsigned int)EndPlayTime_32;
- (void)setEndPlayTime_32:(unsigned int)arg1;
- (unsigned int)StayTimeInPage_33;
- (void)setStayTimeInPage_33:(unsigned int)arg1;
- (unsigned int)Scene_34;
- (void)setScene_34:(unsigned int)arg1;
- (unsigned int)Subscene_35;
- (void)setSubscene_35:(unsigned int)arg1;
- (id)PlayErrType_36;
- (void)setPlayErrType_36:(id)arg1;
- (unsigned int)IsFans_37;
- (void)setIsFans_37:(unsigned int)arg1;
- (unsigned int)BufferingTime_38;
- (void)setBufferingTime_38:(unsigned int)arg1;
- (unsigned int)Resolution_39;
- (void)setResolution_39:(unsigned int)arg1;
- (unsigned int)Width_40;
- (void)setWidth_40:(unsigned int)arg1;
- (unsigned int)OrStatus_41;
- (void)setOrStatus_41:(unsigned int)arg1;
- (unsigned int)HitBizuin_42;
- (void)setHitBizuin_42:(unsigned int)arg1;
- (id)HitVid_43;
- (void)setHitVid_43:(id)arg1;
- (unsigned int)PlayerType_44;
- (void)setPlayerType_44:(unsigned int)arg1;
- (id)DefinitionOptions_45;
- (void)setDefinitionOptions_45:(id)arg1;
- (unsigned int)DefinitionAfter_46;
- (void)setDefinitionAfter_46:(unsigned int)arg1;
- (unsigned int)DefinitionBefore_47;
- (void)setDefinitionBefore_47:(unsigned int)arg1;
- (unsigned int)FullScreen_48;
- (void)setFullScreen_48:(unsigned int)arg1;
- (id)MoreVideosInfo_49;
- (void)setMoreVideosInfo_49:(id)arg1;
- (unsigned int)ActionPlayTime_50;
- (void)setActionPlayTime_50:(unsigned int)arg1;
- (id)DefinitionOptionsStr_51;
- (void)setDefinitionOptionsStr_51:(id)arg1;
- (unsigned int)MoreVideosSeq_52;
- (void)setMoreVideosSeq_52:(unsigned int)arg1;
- (id)SessionIdStr_53;
- (void)setSessionIdStr_53:(id)arg1;
- (unsigned int)GetPlayUrlErrType_54;
- (void)setGetPlayUrlErrType_54:(unsigned int)arg1;
- (unsigned int)VideoRecommendType_55;
- (void)setVideoRecommendType_55:(unsigned int)arg1;
- (unsigned int)VideoExtraCount_56;
- (void)setVideoExtraCount_56:(unsigned int)arg1;
- (unsigned int)RemindTrafficSize_57;
- (void)setRemindTrafficSize_57:(unsigned int)arg1;
- (unsigned int)TrafficReminderType_58;
- (void)setTrafficReminderType_58:(unsigned int)arg1;
- (unsigned int)ItemShowType_59;
- (void)setItemShowType_59:(unsigned int)arg1;
- (id)ChannelSessionId_60;
- (void)setChannelSessionId_60:(id)arg1;
- (unsigned int)LandingPageType_61;
- (void)setLandingPageType_61:(unsigned int)arg1;
- (id)VideoSessionId_62;
- (void)setVideoSessionId_62:(id)arg1;
- (unsigned int)VideoProxyState_63;
- (void)setVideoProxyState_63:(unsigned int)arg1;
- (unsigned int)firstRenderTime_64;
- (void)setFirstRenderTime_64:(unsigned int)arg1;
- (id)SpeedBefore_65;
- (void)setSpeedBefore_65:(id)arg1;
- (id)SpeedAfter_66;
- (void)setSpeedAfter_66:(id)arg1;
- (void).cxx_destruct;
@end
