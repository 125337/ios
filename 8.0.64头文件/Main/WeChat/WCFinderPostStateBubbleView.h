@interface WCFinderPostStateBubbleView : MMUIView <WCFinderDataItemExt, WCFinderPostDataItemExt>
{
    BOOL _hadEncoding; // +0x8
    int _reportCommentScene; // +0xc
    unsigned long long _bubbleState; // +0x10
    id /* block */ _closeBlock; // +0x18
    UIView * _containerView; // +0x20
    NSString * _localTid; // +0x28
    NSString * _sucFeedId; // +0x30
    NSString * _sucNonceId; // +0x38
    double _containerWidth; // +0x40
    CAShapeLayer * _ovalShapeLayer; // +0x48
    CAShapeLayer * _bottomShapeLayer; // +0x50
    UIView * _progressView; // +0x58
    double _lastProgress; // +0x60
    UIImageView * _sucIconView; // +0x68
    UIImageView * _failIconView; // +0x70
    UILabel * _titleLabel; // +0x78
    UILabel * _descLabel; // +0x80
    UIImageView * _arrowImageView; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 containerWidth:(double)arg2;
- (void)bindLocalTid:(id)arg1;
- (void)unregisterExtension;
- (void)setupContainerView;
- (void)setupSucIconView;
- (void)setupFailIconView;
- (void)setupTipsLabel;
- (void)setupProgressCricle:(double)arg1 shapeLayerLineWidth:(double)arg2;
- (void)updateProgress:(double)arg1;
- (void)setBubbleState:(unsigned long long)arg1;
- (void)rebuildProgressCricle:(double)arg1 shapeLayerLineWidth:(double)arg2;
- (void)animateProgressSize:(double)arg1 duration:(double)arg2 shapeLayerLineWidth:(double)arg3;
- (void)animateShapeLayer:(id)arg1 newPathRect:(CGRect)arg2 newCornerRadius:(double)arg3 duration:(double)arg4 shapeLayerLineWidth:(double)arg5;
- (void)cancelCurrentAnimation;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (unsigned long long)bubbleState;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (int)reportCommentScene;
- (void)setReportCommentScene:(int)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)localTid;
- (void)setLocalTid:(id)arg1;
- (id)sucFeedId;
- (void)setSucFeedId:(id)arg1;
- (id)sucNonceId;
- (void)setSucNonceId:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)ovalShapeLayer;
- (void)setOvalShapeLayer:(id)arg1;
- (id)bottomShapeLayer;
- (void)setBottomShapeLayer:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (double)lastProgress;
- (void)setLastProgress:(double)arg1;
- (BOOL)hadEncoding;
- (void)setHadEncoding:(BOOL)arg1;
- (id)sucIconView;
- (void)setSucIconView:(id)arg1;
- (id)failIconView;
- (void)setFailIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
