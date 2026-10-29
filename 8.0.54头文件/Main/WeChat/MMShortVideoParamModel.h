@interface MMShortVideoParamModel : NSObject
{
    BOOL _immediately; // +0x8
    BOOL _isMuted; // +0x9
    BOOL _frontCamera; // +0xa
    BOOL _hasMutation; // +0xb
    WCFinderPostSessionModel * _finderPostModel; // +0x10
    ABAReportPrams * _videoScoreParams; // +0x18
    FinderVideoTemplateInfo * _tempalteInfo; // +0x20
    NSDictionary * _userInfo; // +0x28
}
- (id)init;
- (BOOL)immediately;
- (void)setImmediately:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)frontCamera;
- (void)setFrontCamera:(BOOL)arg1;
- (BOOL)hasMutation;
- (void)setHasMutation:(BOOL)arg1;
- (id)finderPostModel;
- (void)setFinderPostModel:(id)arg1;
- (id)videoScoreParams;
- (void)setVideoScoreParams:(id)arg1;
- (id)tempalteInfo;
- (void)setTempalteInfo:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

