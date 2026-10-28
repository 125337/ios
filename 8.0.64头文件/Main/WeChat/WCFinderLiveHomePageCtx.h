@interface WCFinderLiveHomePageCtx : NSObject <WCFinderLiveFeedGenericPageContextBase>
{
    BOOL enableAvatarSkeleton; // +0x8
    BOOL _isViewAppearing; // +0x9
    BOOL _canScrollParent; // +0xa
    BOOL _canScrollChild; // +0xb
    BOOL _isTabStreamStyle; // +0xc
    BOOL _childScrollsToTop; // +0xd
    BOOL _hasFetchedLocation; // +0xe
    BOOL _enableSkeleton; // +0xf
    MMFinderLiveFeedExtraInfoFetchLogic * extraFetchLogic; // +0x10
    MMUIViewController * _vc; // +0x18
    NSData * _lastBuffer; // +0x20
    FinderLiveSquareStyleInfo * _globalStyleInfo; // +0x28
    WCFinderLiveHomePageInitialParams * _params; // +0x30
    unsigned long long _autoPlayFlag; // +0x38
    FinderLiveEcGetLiveConfigResponse * _ecConfigResp; // +0x40
    id /* block */ _containerContextBlock; // +0x48
    double _skeletonAnimationDelay; // +0x50
}
- (id)init;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (BOOL)autoPlayFirstRow;
- (BOOL)enableAvatarSkeleton;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (BOOL)isViewAppearing;
- (void)setIsViewAppearing:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)globalStyleInfo;
- (void)setGlobalStyleInfo:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)autoPlayFlag;
- (void)setAutoPlayFlag:(unsigned long long)arg1;
- (id)ecConfigResp;
- (void)setEcConfigResp:(id)arg1;
- (BOOL)canScrollParent;
- (void)setCanScrollParent:(BOOL)arg1;
- (BOOL)canScrollChild;
- (void)setCanScrollChild:(BOOL)arg1;
- (BOOL)isTabStreamStyle;
- (void)setIsTabStreamStyle:(BOOL)arg1;
- (BOOL)childScrollsToTop;
- (void)setChildScrollsToTop:(BOOL)arg1;
- (BOOL)hasFetchedLocation;
- (void)setHasFetchedLocation:(BOOL)arg1;
- (id /* block */)containerContextBlock;
- (void)setContainerContextBlock:(id /* block */)arg1;
- (BOOL)enableSkeleton;
- (void)setEnableSkeleton:(BOOL)arg1;
- (double)skeletonAnimationDelay;
- (void)setSkeletonAnimationDelay:(double)arg1;
- (void).cxx_destruct;
@end
