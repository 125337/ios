@interface MMFinderLiveLotteryMethodOperationViewNavBar : UIView
{
    id /* block */ _leftButtonActionCallback; // +0x8
    MMUIButton * _closeButton; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UIView * _sepelateLine; // +0x20
    unsigned long long _type; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)updateDataWithType;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutSeparateLine;
- (id)closeButton;
- (id)titleLabel;
- (id)sepelateLine;
- (void)leftButtonAction;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

