@interface WCCardTipItem : MMObject <PBCoding>
{
    unsigned int _tipType; // +0x8
    unsigned int _unreadCount; // +0xc
    unsigned int _layoutEndTime; // +0x10
    NSString * _layoutTip; // +0x18
    NSString * _shareUsername; // +0x20
}
+ (void)PBArrayAdd_tipType;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_shareUsername;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)tipType;
- (void)setTipType:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (id)layoutTip;
- (void)setLayoutTip:(id)arg1;
- (unsigned int)layoutEndTime;
- (void)setLayoutEndTime:(unsigned int)arg1;
- (id)shareUsername;
- (void)setShareUsername:(id)arg1;
- (void).cxx_destruct;
@end
