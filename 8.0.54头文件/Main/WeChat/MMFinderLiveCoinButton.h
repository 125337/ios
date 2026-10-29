@interface MMFinderLiveCoinButton : MMUIView
{
    unsigned int _wecoinCount; // +0x8
    id /* block */ _coinButtonClickCallback; // +0x10
    UIImageView * _wecoinIconView; // +0x18
    MMUILabel * _wecoinCountLabel; // +0x20
    MMUILabel * _textLabel; // +0x28
    MMUIButton * _containerButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWecoinCount:(unsigned int)arg1 buttonText:(id)arg2;
- (void)onCoinButtonClicked:(id)arg1;
- (id /* block */)coinButtonClickCallback;
- (void)setCoinButtonClickCallback:(id /* block */)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)wecoinCountLabel;
- (void)setWecoinCountLabel:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)containerButton;
- (void)setContainerButton:(id)arg1;
- (unsigned int)wecoinCount;
- (void)setWecoinCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

