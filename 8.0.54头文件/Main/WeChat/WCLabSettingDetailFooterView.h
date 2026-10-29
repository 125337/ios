@interface WCLabSettingDetailFooterView : UIView
{
    UIButton * _exposeButton; // +0x8
    id <WCLabSettingDetailFooterViewDelegate> _delegate; // +0x10
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onClickExposeButton:(id)arg1;
- (void)initExposeButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

