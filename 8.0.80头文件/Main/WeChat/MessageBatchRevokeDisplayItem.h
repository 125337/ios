@interface MessageBatchRevokeDisplayItem : MMObject
{
    BOOL _isFolding; // +0x8
    BOOL _isAllRead; // +0x9
    NSString * _chatUserName; // +0x10
    OrderedDictionary * _messages; // +0x18
    NSString * _identifier; // +0x20
}
+ (id)msgIdOfWrap:(id)arg1 chatName:(id)arg2;
- (id)initWithChatName:(id)arg1;
- (BOOL)shouldFold:(id)arg1 chatName:(id)arg2;
- (BOOL)shouldShowExpandBtn:(id)arg1;
- (BOOL)shouldShowTime:(id)arg1;
- (BOOL)isFoldEnabled;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (id)messages;
- (void)setMessages:(id)arg1;
- (BOOL)isFolding;
- (void)setIsFolding:(BOOL)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)isAllRead;
- (void)setIsAllRead:(BOOL)arg1;
- (void).cxx_destruct;
@end
