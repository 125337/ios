@interface CBTAsstBoardFileCellView : CBTAsstBoardBaseCellView <CBTAsstBoardFileViewModelDelegate, AppFileCircleProgressViewDelegate>
{
    UIView * _cardView; // +0x8
    AppFileMessageCellView * _fileMessageCellView; // +0x10
    double _appliedContainerWidth; // +0x18
    UITapGestureRecognizer * _contentTapGesture; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)ensureCardViewMounted;
- (id)fileViewModel;
- (id)fileContentView;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)applyLocalUploadStateAppearance;
- (id)localUploadIconWithType:(unsigned long long)arg1;
- (void)setupContainerView;
- (double)preferredContainerWidth;
- (void)remakeContainerConstraints;
- (void)updateContainerWidthIfNeeded;
- (void)layoutCardView;
- (void)layoutFileContentView;
- (void)buildFileContentView;
- (double)measuredCellHeight;
- (void)updateCellHeightIfNeeded;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)menuAnchorView;
- (void)onFileContentTapped:(id)arg1;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)didMoveToWindow;
- (void)refreshFileContentFromLatestState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)fileViewModelDidUpdateTransferState:(id)arg1;
- (void)fileViewModel:(id)arg1 didUpdateProgress:(int)arg2;
- (void)fileViewModelDidCompleteTransfer:(id)arg1;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (BOOL)isBubbleRightAligned;
- (BOOL)isUserASRContent;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)fileMessageCellView;
- (void)setFileMessageCellView:(id)arg1;
- (double)appliedContainerWidth;
- (void)setAppliedContainerWidth:(double)arg1;
- (id)contentTapGesture;
- (void)setContentTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
