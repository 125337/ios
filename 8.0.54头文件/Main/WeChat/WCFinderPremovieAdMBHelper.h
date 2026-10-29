@interface WCFinderPremovieAdMBHelper : WCFinderPremovieAdBaseHelper <IMagicNativeFinderCardExt>
{
    BOOL _isReadyToShow; // +0x8
    UIView * _containerView; // +0x10
    NSString * _frameSetName; // +0x18
}
- (void)dealloc;
- (void)updateWithMultiMediaCell:(id)arg1;
- (id)genPremovieView:(id)arg1;
- (void)clearCache;
- (void)showPremovieAd;
- (void)closePremovieAd;
- (CGRect)adLabelFrameWithDict:(id)arg1;
- (void)onFinderMediaFirstFrame:(id)arg1;
- (void)onFinderMediaCloseAd:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaDisplayAdEnd:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaJumpAdDetail:(id)arg1 jumpId:(id)arg2;
- (void)onFinderMediaInsertAdFeedback:(id)arg1 jumpId:(id)arg2 rect:(id)arg3;
- (void)onFinderMediaUpdateAdFeedback:(id)arg1 jumpId:(id)arg2 rect:(id)arg3;
- (BOOL)isReadyToShow;
- (void)setIsReadyToShow:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (void).cxx_destruct;
@end

