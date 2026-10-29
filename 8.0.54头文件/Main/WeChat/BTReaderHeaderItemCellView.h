@interface BTReaderHeaderItemCellView : BTBaseItemCellView <ILinkEventExt, WCActionSheetDelegate, BrandFinderLiveMgrExt>
{
    BOOL _forceSetHighlight; // +0x8
    BTReaderMsgSectionData * _sectionData; // +0x10
    MMHeadImageView * _headerView; // +0x18
    RichTextView * _nameLabel; // +0x20
    UIImageView * _starView; // +0x28
    MMUIButton * _moreBtn; // +0x30
    MMUILabel * _timeLabel; // +0x38
    BrandLiveStatusButton * _liveButton; // +0x40
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (id)contact;
- (void)setViewModel:(id)arg1;
- (id)genMenuItems;
- (void)updateCellOnPageAppear;
- (void)initSubviews;
- (void)initGestureRecognizer;
- (void)initContentView;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initNameLabel;
- (void)initLiveView;
- (void)updateNameLabel;
- (void)updateStarView;
- (void)initMoreBtn;
- (void)initTimeLabel;
- (void)updateTimeLabel;
- (void)updateLiveView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceSetHighlight:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onClickLiveStatus;
- (void)onClickMoreBtn:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
- (id)accessibilityLabel;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)starView;
- (void)setStarView:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)liveButton;
- (void)setLiveButton:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (BOOL)forceSetHighlight;
- (void)setForceSetHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end

