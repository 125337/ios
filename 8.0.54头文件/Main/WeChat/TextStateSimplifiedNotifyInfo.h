@interface TextStateSimplifiedNotifyInfo : NSObject
{
    BOOL _isContact; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _username; // +0x10
    NSString * _headImageUrl; // +0x18
}
- (id)initWithNotifyInfo:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (BOOL)isContact;
- (void)setIsContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

