@interface SendPatWrap : NSObject
{
    unsigned int _associateMessageLocalID; // +0x8
    NSString * _fromUserName; // +0x10
    NSString * _pattedUserName; // +0x18
    NSString * _chatUserName; // +0x20
    unsigned long long _scene; // +0x28
    PatWrap * _patWrap; // +0x30
    unsigned long long _status; // +0x38
    PatSuffixWrap * _cachedPatSuffixWrap; // +0x40
    SendPatReportObject * _reportObject; // +0x48
}
+ (id)chatUserNameFromMessageWrap:(id)arg1;
+ (id)sendPatWrapFromMessageWrap:(id)arg1;
+ (id)sendPatWrapKeyForPat:(id)arg1 fromChat:(id)arg2;
- (BOOL)isValid;
- (id)associateMessageWrap;
- (void)updatePatSuffix:(id)arg1 andServerId:(long long)arg2;
- (id)key;
- (id)messageWrapForRevokeOnly;
- (id)generateSystemMessage:(id)arg1;
- (id)description;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)pattedUserName;
- (void)setPattedUserName:(id)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)patWrap;
- (void)setPatWrap:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)cachedPatSuffixWrap;
- (void)setCachedPatSuffixWrap:(id)arg1;
- (unsigned int)associateMessageLocalID;
- (void)setAssociateMessageLocalID:(unsigned int)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (void).cxx_destruct;
@end
