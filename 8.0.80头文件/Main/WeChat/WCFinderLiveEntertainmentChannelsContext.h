@interface WCFinderLiveEntertainmentChannelsContext : NSObject <WCFinderLiveFeedGenericPageContextBase>
{
    BOOL enableSkeleton; // +0x8
    BOOL enableAvatarSkeleton; // +0x9
    BOOL _isViewAppearing; // +0xa
    BOOL _skipFeedsReport; // +0xb
    int _scene; // +0xc
    double skeletonAnimationDelay; // +0x10
    MMFinderLiveFeedExtraInfoFetchLogic * extraFetchLogic; // +0x18
    MMUIViewController * _vc; // +0x20
    NSString * _themeId; // +0x28
    NSData * _lastBuffer; // +0x30
    FinderLiveStreamGetAsyncLoadInfoConfig * _asyncLoadInfoConfig; // +0x38
    double _actionButtonDistanceToBottom; // +0x40
    WCFinderLiveEntertainmentChannelsViewModel * _vcVM; // +0x48
    FinderLiveEcGetLiveConfigResponse * _ecConfigResp; // +0x50
}
- (id)initWithThemeId:(id)arg1 scene:(int)arg2;
- (id)vc;
- (BOOL)enableSkeleton;
- (BOOL)enableAvatarSkeleton;
- (double)skeletonAnimationDelay;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (void)setVc:(id)arg1;
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
