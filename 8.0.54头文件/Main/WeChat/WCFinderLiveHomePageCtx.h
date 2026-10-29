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
    NSData * _lastBuffer; // +0x10
    FinderLiveSquareStyleInfo * _globalStyleInfo; // +0x18
    WCFinderLiveHomePageInitialParams * _params; // +0x20
    unsigned long long _autoPlayFlag; // +0x28
    FinderLiveEcGetLiveConfigResponse * _ecConfigResp; // +0x30
    id /* block */ _containerContextBlock; // +0x38
    double _skeletonAnimationDelay; // +0x40
}
- (id)init;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (BOOL)autoPlayFirstRow;
- (BOOL)enableAvatarSkeleton;
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

