@interface ReaderMessageTemplateMsgFolderCellView : BaseMessageCellView <ReaderMessageTemplateMsgFolderCellViewDelegate>
{
    ReaderMessageTemplateMsgHighlightButton * _hotSpotButton; // +0x28
    MMUILabel * _collapsedCount; // +0x30
    CAGradientLayer * _btnGradientLayer; // +0x38
    CAGradientLayer * _countGradientLayer; // +0x40
    UIView * _seperatorLineView; // +0x48
    MMUILabel * _collapsedTitle; // +0x50
    CAGradientLayer * _titleGradientLayer; // +0x58
    BaseMessageCellView * _cellView; // +0x60
}
- (void)setViewModel:(id)arg1;
- (void)onAppear;
- (void)setupContentView;
- (void)setDelegate:(id)arg1;
- (void)layoutContentView;
- (void)updateCountLabel;
- (void)updateTitleLabel;
- (BOOL)canBeReused;
- (void)setNoClip;
- (void)updateStatus;
- (void)handleHotSpotButtonClicked;
- (BOOL)canCellShowOperationMenu;
- (void)onReaderTemplateMsgFoldCellView:(id)arg1 actionType:(long long)arg2;
- (void)reportTemplateMsgFold:(long long)arg1;
- (id)convertFoldMsgTitleListToStr:(id)arg1;
- (BOOL)hasRepeatTitle;
- (id)hotSpotButton;
- (void)setHotSpotButton:(id)arg1;
- (id)collapsedCount;
- (void)setCollapsedCount:(id)arg1;
- (id)btnGradientLayer;
- (void)setBtnGradientLayer:(id)arg1;
- (id)countGradientLayer;
- (void)setCountGradientLayer:(id)arg1;
- (id)seperatorLineView;
- (void)setSeperatorLineView:(id)arg1;
- (id)collapsedTitle;
- (void)setCollapsedTitle:(id)arg1;
- (id)titleGradientLayer;
- (void)setTitleGradientLayer:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void).cxx_destruct;
@end
