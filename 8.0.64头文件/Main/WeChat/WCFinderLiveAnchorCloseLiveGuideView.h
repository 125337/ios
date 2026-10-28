@interface WCFinderLiveAnchorCloseLiveGuideView : MMPageSheetBaseView <ILinkEventExt>
{
    id /* block */ _closeLiveGuideBlock; // +0x8
    id /* block */ _learnMoreBlock; // +0x10
    FinderLiveSyncAnchorCloseLiveGuideInfoResp * _guideInfo; // +0x18
    UIView * _contentView; // +0x20
    RichTextView * _titleLabel; // +0x28
    MMUIButton * _continueButton; // +0x30
    MMUIButton * _closeLiveButton; // +0x38
}
- (void)updateWithGuideInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)continueButton;
- (id)closeLiveButton;
- (id)titleLabel;
- (void)closeLiveButtonClick;
- (void)continueButtonClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)closeLiveGuideBlock;
- (void)setCloseLiveGuideBlock:(id /* block */)arg1;
- (id /* block */)learnMoreBlock;
- (void)setLearnMoreBlock:(id /* block */)arg1;
- (id)guideInfo;
- (void)setGuideInfo:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setCloseLiveButton:(id)arg1;
- (void).cxx_destruct;
@end
