@interface MoreViewControllerSectionUIInfo : MMObject
{
    unsigned int _messageNum; // +0x8
    unsigned int _leftRedDot; // +0xc
    unsigned int _rightRedDot; // +0x10
    NSString * _badgeText; // +0x18
}
- (id)init;
- (BOOL)needReport;
- (unsigned int)messageNum;
- (void)setMessageNum:(unsigned int)arg1;
- (unsigned int)leftRedDot;
- (void)setLeftRedDot:(unsigned int)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (unsigned int)rightRedDot;
- (void)setRightRedDot:(unsigned int)arg1;
- (void).cxx_destruct;
@end
