@interface PatWrap : NSObject <NSCopying>
{
    BOOL _isRead; // +0x8
    BOOL _showChangeSuffixRemind; // +0x9
    NSString * _templete; // +0x10
    NSString * _fromUserName; // +0x18
    NSString * _pattedUserName; // +0x20
    unsigned long long _createTime; // +0x28
    long long _serverId; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)templateFromTemplate:(id)arg1 fromUserName:(id)arg2 pattedUserName:(id)arg3;
+ (id)generateContentWithTemplate:(id)arg1 chatContact:(id)arg2 showLink:(BOOL)arg3 showTextStateIcon:(BOOL)arg4 showHighlightPat:(BOOL)arg5 showChangeSuffixRemind:(BOOL)arg6;
+ (id)getContactFromUserName:(id)arg1;
- (id)getDisplayContentWithChatUserName:(id)arg1 configuration:(id)arg2;
- (id)getAttributedDisplayContentWithChatUserName:(id)arg1 configuration:(id)arg2;
- (BOOL)isEmphasize;
- (BOOL)canRevoke;
- (BOOL)isSender;
- (id)clientMessageId;
- (id)contentId;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToPatWrap:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)templete;
- (void)setTemplete:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)pattedUserName;
- (void)setPattedUserName:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (long long)serverId;
- (void)setServerId:(long long)arg1;
- (BOOL)isRead;
- (void)setIsRead:(BOOL)arg1;
- (BOOL)showChangeSuffixRemind;
- (void)setShowChangeSuffixRemind:(BOOL)arg1;
- (void).cxx_destruct;
@end

