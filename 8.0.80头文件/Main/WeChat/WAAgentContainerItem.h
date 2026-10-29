@interface WAAgentContainerItem : NSObject <UIScrollViewDelegate, MagicSclFrameSetViewDelegate>
{
    BOOL _embeddedMode; // +0x8
    BOOL _isDragging; // +0x9
    BOOL _isHidingIndicator; // +0xa
    BOOL _isNotifyingHeightChange; // +0xb
    unsigned int _containerId; // +0xc
    unsigned int _frameId; // +0x10
    MagicSclFrameSetView * _frameSetView; // +0x18
    UIScrollView * _scrollView; // +0x20
    MMUIActivityIndicatorView * _loadingIndicator; // +0x28
    UIScrollView * _outerScrollView; // +0x30
    WAAgentContainerStackView * _stackView; // +0x38
    UIView * _customScrollIndicator; // +0x40
    NSTimer * _indicatorHideTimer; // +0x48
    double _lastNotifiedHeight; // +0x50
    CGPoint _lastContentOffset; // +0x58
}
+ (id)itemWithContainerId:(unsigned int)arg1;
- (id)description;
- (void)setupCustomScrollIndicator;
- (void)updateCustomScrollIndicatorWithPassToOuter:(BOOL)arg1;
- (void)showScrollIndicator;
- (void)hideScrollIndicatorAnimated:(BOOL)arg1;
- (void)scheduleIndicatorHideTimer;
- (void)invalidateIndicatorHideTimer;
- (void)showLoading;
- (void)flashIndicator;
- (void)hideLoadingAnimated;
- (void)setFrameSetView:(id)arg1;
- (void)updateLayoutWithSize:(CGSize)arg1;
- (void)setOuterScrollView:(id)arg1;
- (void)notifyFrameSetViewHeightChange;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)isFullyVisibleInOuterScrollView;
- (void)calculateHiddenAmountWithOuterScrollView:(id)arg1 hiddenTop:(double *)arg2 hiddenBottom:(double *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (unsigned int)frameId;
- (void)setFrameId:(unsigned int)arg1;
- (id)frameSetView;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (BOOL)embeddedMode;
- (void)setEmbeddedMode:(BOOL)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)outerScrollView;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (CGPoint)lastContentOffset;
- (void)setLastContentOffset:(CGPoint)arg1;
- (id)customScrollIndicator;
- (void)setCustomScrollIndicator:(id)arg1;
- (id)indicatorHideTimer;
- (void)setIndicatorHideTimer:(id)arg1;
- (BOOL)isHidingIndicator;
- (void)setIsHidingIndicator:(BOOL)arg1;
- (BOOL)isNotifyingHeightChange;
- (void)setIsNotifyingHeightChange:(BOOL)arg1;
- (double)lastNotifiedHeight;
- (void)setLastNotifiedHeight:(double)arg1;
- (void).cxx_destruct;
@end
