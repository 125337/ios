@interface WCAdSliderCardOpeningAnimationView : MMUIView <PAGViewListener>
{
    BOOL _isDetail; // +0x8
    BOOL _hasPlayedFlag; // +0x9
    BOOL _isHideAnimating; // +0xa
    BOOL _finishedFlag; // +0xb
    id <WCAdSliderCardOpeningAnimationViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdSliderCardOpeningAnimationInfo * _openingAnimationInfo; // +0x20
    PAGView * _animationPagView; // +0x28
    WCAdURLImageView * _animationThumbView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 isDetail:(BOOL)arg3;
- (void)initView;
- (id)animationThumbView;
- (void)initPagView;
- (void)play;
- (void)hideWithAnimation;
- (BOOL)hasDisplayFinished;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)closeView;
- (void)onAnimationUpdate:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)openingAnimationInfo;
- (void)setOpeningAnimationInfo:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (id)animationPagView;
- (void)setAnimationPagView:(id)arg1;
- (void)setAnimationThumbView:(id)arg1;
- (BOOL)hasPlayedFlag;
- (void)setHasPlayedFlag:(BOOL)arg1;
- (BOOL)isHideAnimating;
- (void)setIsHideAnimating:(BOOL)arg1;
- (BOOL)finishedFlag;
- (void)setFinishedFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
