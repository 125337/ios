@interface WloginTlv_0x132 : WloginTlv
{
    NSData * accessToken; // +0x10
    unsigned int dwExpireTime; // +0x18
    NSData * openId; // +0x20
}
- (void)dealloc;
- (int)decode:(char * *)arg1 andBuffLen:(int *)arg2;
- (id)accessToken;
- (void)setAccessToken:(id)arg1;
- (unsigned int)dwExpireTime;
- (void)setDwExpireTime:(unsigned int)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
@end
