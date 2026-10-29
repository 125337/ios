@interface WCCardPkgMsgJumpButton : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _buttonTitle; // +0x18
    NSString * _jumpUrlStr; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)jumpUrlStr;
- (void)setJumpUrlStr:(id)arg1;
- (void).cxx_destruct;
@end

