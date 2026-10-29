@interface VoiceTransTipsViewV2 : UIView
{
    BOOL _hasSecondLine; // +0x8
    BOOL _showsLoadingDots; // +0x9
    UIImageView * _imageView; // +0x10
    VoiceTransPAGView * _pagContainerView; // +0x18
    UILabel * _firstLabel; // +0x20
    UILabel * _secondLabel; // +0x28
    UIView * _loadingContainerView; // +0x30
    UILabel * _loadingTextLabel; // +0x38
    NSArray * _loadingDotLabels; // +0x40
    unsigned long long _currentIcon; // +0x48
    unsigned long long _currentRequestedIcon; // +0x50
    NSString * _currentKey; // +0x58
    UIView * _statusTextTransitionOutgoingView; // +0x60
    unsigned long long _statusTextTransitionGeneration; // +0x68
    NSMutableDictionary * _pagFiles; // +0x70
    MMTimer * _listenLoopTimer; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (id)makeLabel;
- (id)firstLabel;
- (id)secondLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)statusLineTopY;
- (CGSize)secondLineDisplaySize;
- (double)secondLineMaxWidth;
- (double)containerFullWidth;
- (void)sizeToFitContent;
- (void)layoutForContentWidth:(double)arg1 centerX:(double)arg2;
- (void)updateWithIcon:(unsigned long long)arg1 firstLine:(id)arg2 secondLine:(id)arg3 stateKey:(long long)arg4;
- (void)setImmediatelyWithIcon:(unsigned long long)arg1 firstLine:(id)arg2 secondLine:(id)arg3 stateKey:(long long)arg4;
- (void)applyIcon:(unsigned long long)arg1 firstLine:(id)arg2 secondLine:(id)arg3 stateKey:(long long)arg4 animated:(BOOL)arg5;
- (void)reset;
- (id)makeStatusTextTransitionOutgoingView;
- (void)startStatusTextTransitionFromView:(id)arg1 toView:(id)arg2;
- (id)statusTextTransitionAnimationFromOpacity:(double)arg1 toOpacity:(double)arg2 fromScale:(double)arg3 toScale:(double)arg4;
- (void)finishStatusTextTransition;
- (void)updateLoadingDotsAnimationState;
- (void)startLoadingDotsAnimationIfNeeded;
- (void)stopLoadingDotsAnimation;
- (void)setHidden:(BOOL)arg1;
- (void)applyIconAppearance:(unsigned long long)arg1;
- (id)pagResourceNameForIcon:(unsigned long long)arg1;
- (void)loadPagNamed:(id)arg1;
- (id)loadPagFileNamed:(id)arg1;
- (void)startListenLoopTimer;
- (void)listenLoopTimerTick;
- (void)stopListenLoopTimer;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)pagContainerView;
- (void)setPagContainerView:(id)arg1;
- (void)setFirstLabel:(id)arg1;
- (void)setSecondLabel:(id)arg1;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingTextLabel;
- (void)setLoadingTextLabel:(id)arg1;
- (id)loadingDotLabels;
- (void)setLoadingDotLabels:(id)arg1;
- (unsigned long long)currentIcon;
- (void)setCurrentIcon:(unsigned long long)arg1;
- (unsigned long long)currentRequestedIcon;
- (void)setCurrentRequestedIcon:(unsigned long long)arg1;
- (id)currentKey;
- (void)setCurrentKey:(id)arg1;
- (BOOL)hasSecondLine;
- (void)setHasSecondLine:(BOOL)arg1;
- (BOOL)showsLoadingDots;
- (void)setShowsLoadingDots:(BOOL)arg1;
- (id)statusTextTransitionOutgoingView;
- (void)setStatusTextTransitionOutgoingView:(id)arg1;
- (unsigned long long)statusTextTransitionGeneration;
- (void)setStatusTextTransitionGeneration:(unsigned long long)arg1;
- (id)pagFiles;
- (void)setPagFiles:(id)arg1;
- (id)listenLoopTimer;
- (void)setListenLoopTimer:(id)arg1;
- (void).cxx_destruct;
@end
