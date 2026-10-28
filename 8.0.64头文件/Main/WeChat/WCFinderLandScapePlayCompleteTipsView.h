@interface WCFinderLandScapePlayCompleteTipsView : MMUIView <WCFinderLandScapePlayCompleteCoverInfoViewDelegate>
{
    int _scene; // +0x8
    id <WCFinderLandScapePlayCompleteTipsViewDelegate> _delegate; // +0x10
    MMUIButton * _replayBtn; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    WCFinderLandScapePlayCompleteCoverInfoView * _coverView; // +0x28
    RichTextView * _descLabel; // +0x30
    RichTextView * _recommentReasonLabel; // +0x38
    MMUIButton * _returnBtn; // +0x40
    MMTimer * _countdownTimer; // +0x48
    long long _curCountdownNum; // +0x50
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)setupViewLandScapeState;
- (void)updateWithDataItem:(id)arg1;
- (id)getRecommentReasonStr:(id)arg1;
- (void)startCountdown;
- (void)updateCountTimer;
- (void)stopCountdownAction;
- (void)landScapeStateWillChange:(BOOL)arg1;
- (void)reportShowAction;
- (void)onClickReturnBtn;
- (void)onClickReplayBtn;
- (void)onClickPlayNextBtn;
- (void)layoutSubviews;
- (double)recommentReasonBottomMargin;
- (double)coverRightMargin;
- (double)coverTopMargin;
- (double)replayBtnBottomMargin;
- (double)centerContentLRMargin;
- (double)descLabelFWidthWithCoverViewSize:(CGSize)arg1;
- (id)recommentReasonFont;
- (id)descLabelFont;
- (CGSize)replayBtnSize;
- (id)replayBtnFont;
- (double)replayBtnHorizonSpacing;
- (CGSize)coverViewSize;
- (CGSize)coverViewSizeThatFitHeight:(double)arg1;
- (void)onTapFinderLandScapePlayCompleteCoverInfoView;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)replayBtn;
- (void)setReplayBtn:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)recommentReasonLabel;
- (void)setRecommentReasonLabel:(id)arg1;
- (id)returnBtn;
- (void)setReturnBtn:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (long long)curCountdownNum;
- (void)setCurCountdownNum:(long long)arg1;
- (void).cxx_destruct;
@end
