@interface MMFinderLiveCompleteNoticeView : UIView
{
    FinderLiveNoticeInfo * _notice; // +0x8
    MMFinderLiveCreateNoticeReporter * _noticeCreationReporter; // +0x10
    id <MMFinderLiveCompleteNoticeViewDelegate> _delegate; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descriptionLabel; // +0x28
    MMUIButton * _createNoticeButton; // +0x30
    UIImageView * _rightChevronView; // +0x38
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)setNotice:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onNewAnchorTaskGuideWithTaskId:(id)arg1 targetItem:(id)arg2;
- (void)onTapped;
- (void)onQuickNoticeButtonTapped;
- (void)updateNotice;
- (id)notice;
- (id)noticeCreationReporter;
- (void)setNoticeCreationReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)createNoticeButton;
- (void)setCreateNoticeButton:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
