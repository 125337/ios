@interface WCPayTransferMoneyAntiCheatViewData : NSObject
{
    BOOL _isShowNotice; // +0x8
    unsigned int _jumpType; // +0xc
    NSString * _antiCheatHint; // +0x10
    UIColor * _antiCheatHintColor; // +0x18
    UIColor * _antiCheatHintColorDark; // +0x20
    NSString * _lefticon; // +0x28
    NSString * _lefticonDark; // +0x30
    NSString * _righticon; // +0x38
    NSString * _righticonDark; // +0x40
    NSString * _url; // +0x48
    NSString * _userName; // +0x50
    NSString * _pagepath; // +0x58
}
- (BOOL)isShowNotice;
- (void)setIsShowNotice:(BOOL)arg1;
- (id)antiCheatHint;
- (void)setAntiCheatHint:(id)arg1;
- (id)antiCheatHintColor;
- (void)setAntiCheatHintColor:(id)arg1;
- (id)antiCheatHintColorDark;
- (void)setAntiCheatHintColorDark:(id)arg1;
- (id)lefticon;
- (void)setLefticon:(id)arg1;
- (id)lefticonDark;
- (void)setLefticonDark:(id)arg1;
- (id)righticon;
- (void)setRighticon:(id)arg1;
- (id)righticonDark;
- (void)setRighticonDark:(id)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)pagepath;
- (void)setPagepath:(id)arg1;
- (void).cxx_destruct;
@end
