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
    UILabel * _deleteTipsLabel; // +0x48
    UIColor * _tipsLabelColor; // +0x50
    UIColor * _normalColor; // +0x58
    UIColor * _loadingColor; // +0x60
    double _lastProgress; // +0x68
    long long _beginPostTimeStamp; // +0x70
    long long _textChangeDuration; // +0x78
    NSString * _defaultTextTips; // +0x80
    NSString * _longTimeTextTips; // +0x88
    long long _childEnterScene; // +0x90
    NSString * _finderPostSessionId; // +0x98
    long long _sourceEnterScene; // +0xa0
    long long _commentScene; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1 tipsLabelColor:(id)arg2 progressNormalColor:(id)arg3 progressLoadingColor:(id)arg4 beginPostTimeStamp:(long long)arg5 textChangeDuration:(long long)arg6 defaultTextTips:(id)arg7 longTimeTextTips:(id)arg8;
- (void)checkTimerLogic;
- (id)getCurrentShowTips;
- (void)updateCurrentTipsLabelText;
- (void)setHadEncoding:(BOOL)arg1;
- (void)configureDeleteReportWithChildEnterScene:(long long)arg1 finderPostSessionId:(id)arg2 sourceEnterScene:(long long)arg3 commentScene:(long long)arg4;
- (void)bindTid:(id)arg1;
- (double)leftPadding;
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
- (long long)beginPostTimeStamp;
- (void)setBeginPostTimeStamp:(long long)arg1;
- (long long)textChangeDuration;
- (void)setTextChangeDuration:(long long)arg1;
- (id)defaultTextTips;
- (void)setDefaultTextTips:(id)arg1;
- (id)longTimeTextTips;
- (void)setLongTimeTextTips:(id)arg1;
- (long long)childEnterScene;
- (void)setChildEnterScene:(long long)arg1;
- (id)finderPostSessionId;
- (void)setFinderPostSessionId:(id)arg1;
- (long long)sourceEnterScene;
- (void)setSourceEnterScene:(long long)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (void).cxx_destruct;
@end
