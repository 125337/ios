@interface MMFinderLiveTopicEducationViewController : MMPageSheetBaseViewController
{
    id /* block */ _onConfirm; // +0x70
    id /* block */ _onCreateNotice; // +0x78
    NSString * _micTopic; // +0x80
    NSString * _recommendReason; // +0x88
    UIView * _contentContainer; // +0x90
    UILabel * _titleLabel; // +0x98
    MMFinderLiveTopicEducationNotifyPlaceholderView * _placeholderView; // +0xa0
    UIButton * _confirmButton; // +0xa8
    UIButton * _reserveNoticeButton; // +0xb0
}
- (id)initWithMicTopic:(id)arg1 recommendReason:(id)arg2;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupContentView;
- (double)pageSheetContentHeight;
- (void)onConfirmButtonClicked;
- (void)onReserveButtonClicked;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id /* block */)onCreateNotice;
- (void)setOnCreateNotice:(id /* block */)arg1;
- (id)micTopic;
- (void)setMicTopic:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)placeholderView;
- (void)setPlaceholderView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)reserveNoticeButton;
- (void)setReserveNoticeButton:(id)arg1;
- (void).cxx_destruct;
@end
