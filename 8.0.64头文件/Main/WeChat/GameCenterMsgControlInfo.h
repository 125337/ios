@interface GameCenterMsgControlInfo : NSObject
{
    BOOL _notInMsgCenter; // +0x8
    int _controlFlag; // +0xc
    int _filterFlag; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _expiredTime; // +0x18
}
+ (id)parseFromXml:(XmlReaderNode_t *)arg1;
- (BOOL)shouldShowFindFriendEntry;
- (BOOL)shouldShowMsgCenterCellSource;
- (BOOL)canClickMsgCenterCellSource;
- (int)controlFlag;
- (void)setControlFlag:(int)arg1;
- (int)filterFlag;
- (void)setFilterFlag:(int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (BOOL)notInMsgCenter;
- (void)setNotInMsgCenter:(BOOL)arg1;
@end
