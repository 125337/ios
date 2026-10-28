@interface WXConversation : NSObject
{
    NSString * _conversationName; // +0x8
    NSNumber * _isMute; // +0x10
    NSNumber * _isTop; // +0x18
}
+ (id)makeWithConversationName:(id)arg1 isMute:(id)arg2 isTop:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)conversationName;
- (void)setConversationName:(id)arg1;
- (id)isMute;
- (void)setIsMute:(id)arg1;
- (id)isTop;
- (void)setIsTop:(id)arg1;
- (void).cxx_destruct;
@end
