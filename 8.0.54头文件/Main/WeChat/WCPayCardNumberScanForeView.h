@interface WCPayCardNumberScanForeView : UIView
{
    UIButton * infoBtn; // +0x8
    UILabel * nameLabel; // +0x10
    UILabel * tipsLabel; // +0x18
    NSString * _username; // +0x20
    id _target; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 target:(id)arg2 username:(id)arg3;
- (void)dealloc;
- (void)commonInit;
- (void)adjustToNewSize;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

