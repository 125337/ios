@interface WCFinderLifeNearbySayHelloView : UIView
{
    id <WCFinderLifeNearbySayHelloViewDelegate> _delegate; // +0x8
    MMSayHelloButton * _sayHelloBtn; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubview;
- (void)layoutSubviews;
- (void)clickBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sayHelloBtn;
- (void)setSayHelloBtn:(id)arg1;
- (void).cxx_destruct;
@end

