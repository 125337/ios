@interface RevokeWrap : NSObject <NSCopying>
{
    BOOL _isRead; // +0x8
    BOOL _canReEdit; // +0x9
    unsigned int _createTime; // +0xc
    unsigned int _localId; // +0x10
    unsigned int _reEditServerTime; // +0x14
    NSString * _fromUserName; // +0x18
    NSString * _toUserName; // +0x20
    long long _serverId; // +0x28
    NSString * _stringContent; // +0x30
    NSString * _reEditStringContent; // +0x38
    long long _reEditReferMsgSvrId; // +0x40
    NSString * _reEditAtUserList; // +0x48
    NSString * _scene; // +0x50
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToRevokeWrap:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)getDisplayContent;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (long long)serverId;
- (void)setServerId:(long long)arg1;
- (BOOL)isRead;
- (void)setIsRead:(BOOL)arg1;
- (BOOL)canReEdit;
- (void)setCanReEdit:(BOOL)arg1;
- (id)stringContent;
- (void)setStringContent:(id)arg1;
- (id)reEditStringContent;
- (void)setReEditStringContent:(id)arg1;
- (long long)reEditReferMsgSvrId;
- (void)setReEditReferMsgSvrId:(long long)arg1;
- (id)reEditAtUserList;
- (void)setReEditAtUserList:(id)arg1;
- (unsigned int)reEditServerTime;
- (void)setReEditServerTime:(unsigned int)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (void).cxx_destruct;
@end
