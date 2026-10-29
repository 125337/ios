@interface WCPayFaceHBItem : NSObject <PBCoding>
{
    BOOL _isLucky; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _uniqueID; // +0x10
    NSString * _msg; // +0x18
    long long _svrID; // +0x20
    NSString * _userName; // +0x28
    NSString * _sendId; // +0x30
    NSString * _nativeurl; // +0x38
    unsigned long long _money; // +0x40
    NSString * _externMess; // +0x48
    NSString * _sendHeadImage; // +0x50
    NSString * _sendNickName; // +0x58
}
+ (void)PBArrayAdd_msg;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_svrID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)parse;
- (id)msg;
- (void)setMsg:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (long long)svrID;
- (void)setSvrID:(long long)arg1;
- (unsigned int)uniqueID;
- (void)setUniqueID:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)sendId;
- (void)setSendId:(id)arg1;
- (id)nativeurl;
- (void)setNativeurl:(id)arg1;
- (unsigned long long)money;
- (void)setMoney:(unsigned long long)arg1;
- (id)externMess;
- (void)setExternMess:(id)arg1;
- (BOOL)isLucky;
- (void)setIsLucky:(BOOL)arg1;
- (id)sendHeadImage;
- (void)setSendHeadImage:(id)arg1;
- (id)sendNickName;
- (void)setSendNickName:(id)arg1;
- (void).cxx_destruct;
@end

