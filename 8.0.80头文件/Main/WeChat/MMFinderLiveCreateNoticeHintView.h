@interface MMFinderLiveCreateNoticeHintView : UIView
{
    MMFinderLiveCreateNoticeReporter * _createNoticeReporter; // +0x8
    id <MMFinderLiveCreateNoticeHintViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    MMUIButton * _closeButton; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _subtitleLabel; // +0x30
    MMUIButton * _createButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithGuideInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onCreateButtonTapped;
- (void)onCloseButtonTapped;
- (void)dismiss;
- (id)createNoticeReporter;
- (void)setCreateNoticeReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)createButton;
- (void)setCreateButton:(id)arg1;
- (void).cxx_destruct;
@end
