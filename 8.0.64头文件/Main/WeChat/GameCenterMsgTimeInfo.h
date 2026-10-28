@interface GameCenterMsgTimeInfo : NSObject
{
    unsigned int _createTime; // +0x8
    unsigned int _expireTime; // +0xc
}
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
@end
