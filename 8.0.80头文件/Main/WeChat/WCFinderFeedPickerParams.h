@interface WCFinderFeedPickerParams : NSObject
{
    BOOL _hideSearchIcon; // +0x8
    BOOL _hidePublishIcon; // +0x9
    BOOL _hideTopBar; // +0xa
    BOOL _isPlanePickerStyle; // +0xb
    BOOL _isOverrideCellHeight; // +0xc
    BOOL _isPreviewDisabled; // +0xd
    BOOL _needFixNavHeight; // +0xe
    BOOL _noEdgeInset; // +0xf
    BOOL _hideBottomExceptHeadView; // +0x10
    BOOL _disableScroll; // +0x11
    BOOL _showSelectionView; // +0x12
    int _enterScene; // +0x14
    NSString * _vcTitle; // +0x18
    double _heightRatio; // +0x20
    long long _minDurationLimit; // +0x28
    NSString * _minDurationToast; // +0x30
    NSString * _onlyAllowVideoFeedToast; // +0x38
    WCFinderFilePickLimiter * _limiter; // +0x40
    NSData * _enterExtBuf; // +0x48
    NSString * _sessionId; // +0x50
}
- (id)init;
- (BOOL)hideSearchIcon;
- (void)setHideSearchIcon:(BOOL)arg1;
- (BOOL)hidePublishIcon;
- (void)setHidePublishIcon:(BOOL)arg1;
- (BOOL)hideTopBar;
- (void)setHideTopBar:(BOOL)arg1;
- (BOOL)isPlanePickerStyle;
- (void)setIsPlanePickerStyle:(BOOL)arg1;
- (id)vcTitle;
- (void)setVcTitle:(id)arg1;
- (BOOL)isOverrideCellHeight;
- (void)setIsOverrideCellHeight:(BOOL)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)isPreviewDisabled;
- (void)setIsPreviewDisabled:(BOOL)arg1;
- (BOOL)needFixNavHeight;
- (void)setNeedFixNavHeight:(BOOL)arg1;
- (BOOL)noEdgeInset;
- (void)setNoEdgeInset:(BOOL)arg1;
- (BOOL)hideBottomExceptHeadView;
- (void)setHideBottomExceptHeadView:(BOOL)arg1;
- (BOOL)disableScroll;
- (void)setDisableScroll:(BOOL)arg1;
- (BOOL)showSelectionView;
- (void)setShowSelectionView:(BOOL)arg1;
- (long long)minDurationLimit;
- (void)setMinDurationLimit:(long long)arg1;
- (id)minDurationToast;
- (void)setMinDurationToast:(id)arg1;
- (id)onlyAllowVideoFeedToast;
- (void)setOnlyAllowVideoFeedToast:(id)arg1;
- (id)limiter;
- (void)setLimiter:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (id)enterExtBuf;
- (void)setEnterExtBuf:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
