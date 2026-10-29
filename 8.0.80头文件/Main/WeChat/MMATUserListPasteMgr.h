@interface MMATUserListPasteMgr : NSObject
{
    NSString * _atUserListKey; // +0x8
    NSString * _atUserList; // +0x10
}
+ (id)Instance;
- (void)applyCopyAtUserListWithChatUsername:(id)arg1 copyText:(id)arg2;
- (void)recordCopyWithChatUsername:(id)arg1 AtUserList:(id)arg2 copyText:(id)arg3;
- (id)getCopyAtUserListKeyForCopyText:(id)arg1 chatName:(id)arg2;
- (id)atUserListKey;
- (void)setAtUserListKey:(id)arg1;
- (id)atUserList;
- (void)setAtUserList:(id)arg1;
- (void).cxx_destruct;
@end
