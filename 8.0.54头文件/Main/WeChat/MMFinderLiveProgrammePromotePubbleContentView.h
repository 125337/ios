@interface MMFinderLiveProgrammePromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    BOOL _isLastSubscribed; // +0x8
    UIImageView * _iconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _startTimeLabel; // +0x20
    UIView * _splitView; // +0x28
    MMUILabel * _detailLabel; // +0x30
    MMLiveIconButton * _actionButton; // +0x38
    FinderLiveProgrammePromoteInfo * _programInfo; // +0x40
    MMUIButton * _detailButton; // +0x48
    WCFinderBaseCgi * _subscribeCGI; // +0x50
}
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)onShowed;
- (void)onClosed;
- (void)onDismissed;
- (void)updateActionButtonStyle;
- (void)handleLastSubscribeState;
- (void)onSubscribeAction:(id)arg1;
- (void)onDetailButtonClick:(id)arg1;
- (void)changeSubscribeStatus;
- (void)layoutIconImgView;
- (void)layoutDetailButton;
- (void)layoutActionButton;
- (void)layoutTitleLabel;
- (void)layoutStartTimeLabel;
- (void)layoutSplitView;
- (void)layoutDetailLabel;
- (void)updateLabelsOriginY;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)startTimeLabel;
- (void)setStartTimeLabel:(id)arg1;
- (id)splitView;
- (void)setSplitView:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)programInfo;
- (void)setProgramInfo:(id)arg1;
- (BOOL)isLastSubscribed;
- (void)setIsLastSubscribed:(BOOL)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)subscribeCGI;
- (void)setSubscribeCGI:(id)arg1;
- (void).cxx_destruct;
@end

