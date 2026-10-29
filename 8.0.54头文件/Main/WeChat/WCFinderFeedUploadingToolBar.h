@interface WCFinderFeedUploadingToolBar : UIView <WCFinderDataItemExt>
{
    BOOL _hadEncoding; // +0x8
    id <WCFinderFeedUploadingToolBarDelegate> _delegate; // +0x10
    UIView * _progressView; // +0x18
    UIButton * _cancelButton; // +0x20
    UILabel * _tipsLabel; // +0x28
    NSString * _tid; // +0x30
    CAShapeLayer * _ovalShapeLayer; // +0x38
    UILabel * _descLabel; // +0x40
    NSNumber * _iconsHeight; // +0x48
    UILabel * _deleteTipsLabel; // +0x50
    UIColor * _tipsLabelColor; // +0x58
    UIColor * _normalColor; // +0x60
    UIColor * _loadingColor; // +0x68
    double _lastProgress; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 iconHeight:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 iconsHeight:(id)arg2 tipsLabelColor:(id)arg3 progressNormalColor:(id)arg4 progressLoadingColor:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 iconsHeight:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHadEncoding:(BOOL)arg1;
- (void)bindTid:(id)arg1;
- (void)setUpUI;
- (double)progressWidth;
- (void)setupProgressCricle;
- (void)updateProgress:(double)arg1;
- (void)clickCancelAction;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)ovalShapeLayer;
- (void)setOvalShapeLayer:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)iconsHeight;
- (void)setIconsHeight:(id)arg1;
- (BOOL)hadEncoding;
- (id)deleteTipsLabel;
- (void)setDeleteTipsLabel:(id)arg1;
- (id)tipsLabelColor;
- (void)setTipsLabelColor:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)loadingColor;
- (void)setLoadingColor:(id)arg1;
- (double)lastProgress;
- (void)setLastProgress:(double)arg1;
- (void).cxx_destruct;
@end

