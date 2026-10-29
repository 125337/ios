@interface MoreViewControllerRedDotStruct : MMObject <NSCopying>
{
    unsigned int _messageNum; // +0x8
    unsigned int _leftRedDot; // +0xc
    unsigned int _rightRedDot; // +0x10
    NSString * _badgeText; // +0x18
    NSString * _uuid; // +0x20
    NSMutableDictionary * _params; // +0x28
}
- (id)initWithUIInfo:(id)arg1;
- (BOOL)needReport;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)messageNum;
- (void)setMessageNum:(unsigned int)arg1;
- (unsigned int)leftRedDot;
- (void)setLeftRedDot:(unsigned int)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (unsigned int)rightRedDot;
- (void)setRightRedDot:(unsigned int)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
