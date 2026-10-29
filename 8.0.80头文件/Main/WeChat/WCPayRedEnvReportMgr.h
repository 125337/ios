@interface WCPayRedEnvReportMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _previewStartTime; // +0x8
    unsigned int _redEnvStoryStartTime; // +0xc
    unsigned int _redEnvStoryEnterType; // +0x10
    unsigned int _redEnvStoryExitType; // +0x14
    unsigned int _redEnvStoryScrollCount; // +0x18
    unsigned int _redEnvStoryImageScrollCount; // +0x1c
    unsigned int _redEnvStoryVideoPlayTotalCount; // +0x20
    unsigned int _redEnvStoryMPBtnClickCount; // +0x24
    unsigned int _redEnvelopesClickReportSourceWay; // +0x28
    unsigned int _redEnvelopesClickReportTargetType; // +0x2c
    unsigned int _redEnvelopesClickReportHbMode; // +0x30
    NSString * _previewSessionId; // +0x38
    NSString * _redSkinEntrySessionId; // +0x40
    NSMutableSet * _redSkinReportOnceOnlyKeySet; // +0x48
    NSMutableDictionary * _redEnvBubbleSessionKeyDict; // +0x50
    NSMutableSet * _redEnvBubbleReportOnceOnlyKeySet; // +0x58
    NSString * _redEnvStorySessionId; // +0x60
    NSString * _redEnvelopesClickReportSessionId; // +0x68
    double _autoCarouselStartTimestamp; // +0x70
}
- (void)genRedEnvEntrySessionId;
- (void)redEnvelopesEntryClickReport:(unsigned int)arg1 sourceWay:(unsigned int)arg2;
- (void)redEnvelopesMakeRedEnvPageReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)redEnvelopesGroupHBModeReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)redEnvelopesDetailPageReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)reportRedEnvelopesMessageReport:(id)arg1 action:(unsigned int)arg2;
- (void)redEnvelopesMessageReport:(id)arg1 isSender:(BOOL)arg2 userName:(id)arg3 coverId:(id)arg4 isOpen:(BOOL)arg5 isValid:(BOOL)arg6 action:(unsigned int)arg7;
- (void)clearRedEnvelopesClickReportSessionId;
- (id)init;
- (id)genReportSessionIdWithPreFixString:(id)arg1;
- (void)genPreViewSessionIdAndStartTime;
- (void)reportRedEnvPreViewWithActionType:(unsigned int)arg1 authorID:(id)arg2;
- (void)genRedSkinEntrySessionId;
- (id)getRedSkinEntrySessinoId;
- (void)reportRedSkinWishingRecommendedWithActionType:(unsigned int)arg1 wishingText:(id)arg2 skinCount:(unsigned int)arg3 prevSkinId:(id)arg4 recommendSkinIds:(id)arg5 requestId:(unsigned long long)arg6 recommendType:(unsigned int)arg7;
- (void)reportRedSkinWishingRecommendedWithActionType:(unsigned int)arg1 wishingText:(id)arg2 skinCount:(unsigned int)arg3 prevSkinId:(id)arg4 recommendSkinIds:(id)arg5 requestId:(unsigned long long)arg6 recommendType:(unsigned int)arg7 emoticonMd5:(id)arg8;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 skinId:(id)arg3 redDotText:(id)arg4 redDotVersion:(id)arg5 reportOnce:(BOOL)arg6;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 reportOnce:(BOOL)arg3;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 reportOnce:(BOOL)arg3 text:(id)arg4;
- (id)genRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (id)getRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (void)clearRedEnvBubbleReportOnceOnlyKeySet;
- (BOOL)isRedEnvBubbleExposeKeyhadReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (void)addRedEnvBubbleExposeKeyHasReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (void)reportRedEnvExposeSeriesWithControlData:(id)arg1 exposeType:(unsigned int)arg2 hasLogo:(unsigned int)arg3 reportOnce:(BOOL)arg4;
- (void)reportRedEnvExposeSeriesWithControlData:(id)arg1 exposeType:(unsigned int)arg2 hasLogo:(unsigned int)arg3 reportOnce:(BOOL)arg4 jumpLink:(id)arg5;
- (void)genRedEnvStorySessionIdAndStartTime;
- (void)setRedEnvStoryEnterType:(unsigned int)arg1;
- (void)setRedEnvStoryExitType:(unsigned int)arg1;
- (unsigned int)getRedEnvStoryExitType;
- (void)addRedEnvStoryScrollCount;
- (void)addRedEnvStoryScrollImageCount;
- (void)addRedEnvStoryViewVideoTotalCount;
- (void)addRedEnvStoryMPBtnClickCount;
- (void)reportRedEnvStoryExitWithControlData:(id)arg1;
- (void)genRedEnvStoryViewPic:(id)arg1 picUrl:(id)arg2 sessionId:(id)arg3 c2cOpenID:(id)arg4;
- (void)genRedEnvStoryViewVideo:(id)arg1 videoUrl:(id)arg2 replayCount:(unsigned int)arg3 playTime:(unsigned int)arg4 sessionId:(id)arg5 autoPlayFlag:(unsigned int)arg6 c2cOpenID:(id)arg7;
- (void)genRedEnvSelectRedSkinDidScroll;
- (void)genRedEnvSelectRedSkinDidConfirm:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvSelectRedSkinDidCancel:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvStoryAutoCarouselStartTime;
- (void)reportRedEnvStoryAutoCarouselStaytime:(id)arg1;
- (void)reportRedEnvStoryMakeSameCover:(id)arg1 actionType:(unsigned int)arg2 coverPath:(id)arg3;
- (id)previewSessionId;
- (void)setPreviewSessionId:(id)arg1;
- (unsigned int)previewStartTime;
- (void)setPreviewStartTime:(unsigned int)arg1;
- (id)redSkinEntrySessionId;
- (void)setRedSkinEntrySessionId:(id)arg1;
- (id)redSkinReportOnceOnlyKeySet;
- (void)setRedSkinReportOnceOnlyKeySet:(id)arg1;
- (id)redEnvBubbleSessionKeyDict;
- (void)setRedEnvBubbleSessionKeyDict:(id)arg1;
- (id)redEnvBubbleReportOnceOnlyKeySet;
- (void)setRedEnvBubbleReportOnceOnlyKeySet:(id)arg1;
- (id)redEnvStorySessionId;
- (void)setRedEnvStorySessionId:(id)arg1;
- (unsigned int)redEnvStoryStartTime;
- (void)setRedEnvStoryStartTime:(unsigned int)arg1;
- (unsigned int)redEnvStoryEnterType;
- (unsigned int)redEnvStoryExitType;
- (unsigned int)redEnvStoryScrollCount;
- (void)setRedEnvStoryScrollCount:(unsigned int)arg1;
- (unsigned int)redEnvStoryImageScrollCount;
- (void)setRedEnvStoryImageScrollCount:(unsigned int)arg1;
- (unsigned int)redEnvStoryVideoPlayTotalCount;
- (void)setRedEnvStoryVideoPlayTotalCount:(unsigned int)arg1;
- (unsigned int)redEnvStoryMPBtnClickCount;
- (void)setRedEnvStoryMPBtnClickCount:(unsigned int)arg1;
- (id)redEnvelopesClickReportSessionId;
- (void)setRedEnvelopesClickReportSessionId:(id)arg1;
- (unsigned int)redEnvelopesClickReportSourceWay;
- (void)setRedEnvelopesClickReportSourceWay:(unsigned int)arg1;
- (unsigned int)redEnvelopesClickReportTargetType;
- (void)setRedEnvelopesClickReportTargetType:(unsigned int)arg1;
- (unsigned int)redEnvelopesClickReportHbMode;
- (void)setRedEnvelopesClickReportHbMode:(unsigned int)arg1;
- (double)autoCarouselStartTimestamp;
- (void)setAutoCarouselStartTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
