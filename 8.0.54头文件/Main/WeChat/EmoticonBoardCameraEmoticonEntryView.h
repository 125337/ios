@interface EmoticonBoardCameraEmoticonEntryView : MMUIView
{
    BOOL shouldShowNewYearUI; // +0x8
    id <EmoticonBoardCameraEmoticonEntryViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UIButton * _actionButton; // +0x20
    UIImageView * _effectView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subtitleLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)addNewYearEffect;
- (void)refreshView;
- (void)onCameraEmoticonCreateButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)effectView;
- (void)setEffectView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

