@interface WCFinderLiveEntertainmentChannelsContext : NSObject <WCFinderLiveFeedGenericPageContextBase>
{
    BOOL enableSkeleton; // +0x8
    BOOL enableAvatarSkeleton; // +0x9
    BOOL _isViewAppearing; // +0xa
    BOOL _skipFeedsReport; // +0xb
    int _scene; // +0xc
    double skeletonAnimationDelay; // +0x10
    NSString * _themeId; // +0x18
    NSData * _lastBuffer; // +0x20
    FinderLiveStreamGetAsyncLoadInfoConfig * _asyncLoadInfoConfig; // +0x28
    double _actionButtonDistanceToBottom; // +0x30
    WCFinderLiveEntertainmentChannelsViewModel * _vcVM; // +0x38
    FinderLiveEcGetLiveConfigResponse * _ecConfigResp; // +0x40
}
- (id)initWithThemeId:(id)arg1 scene:(int)arg2;
- (BOOL)enableSkeleton;
- (BOOL)enableAvatarSkeleton;
- (double)skeletonAnimationDelay;
- (BOOL)isViewAppearing;
- (void)setIsViewAppearing:(BOOL)arg1;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)asyncLoadInfoConfig;
- (void)setAsyncLoadInfoConfig:(id)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (double)actionButtonDistanceToBottom;
- (void)setActionButtonDistanceToBottom:(double)arg1;
- (id)vcVM;
- (void)setVcVM:(id)arg1;
- (id)ecConfigResp;
- (void)setEcConfigResp:(id)arg1;
- (void).cxx_destruct;
@end

