@interface WCFinderHighlightTopicCreateViewController : MMPageSheetBaseViewController <MMUITextFieldDelegate>
{
    id <WCFinderSpecialTopicCreateViewControllerDelegate> _delegate; // +0x68
    NSString * _originalHighlightTopicName; // +0x70
    UIView * _containerView; // +0x78
    MMUITextField * _textFiled; // +0x80
    UILabel * _tipsLabel; // +0x88
    UILabel * _wordCountLimitLabel; // +0x90
}
- (id)initWithHighlightTopicName:(id)arg1;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupSubViews;
- (void)viewWillLayoutSubviews;
- (BOOL)canPostEvent;
- (void)onClickRightBtn:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originalHighlightTopicName;
- (void)setOriginalHighlightTopicName:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)textFiled;
- (void)setTextFiled:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)wordCountLimitLabel;
- (void)setWordCountLimitLabel:(id)arg1;
- (void).cxx_destruct;
@end

