@interface ChatBotShareHistoryPageReportContext : NSObject
{
    long long _targetType; // +0x8
    NSString * _chatName; // +0x10
    NSString * _snsPublishId; // +0x18
}
- (long long)targetType;
- (void)setTargetType:(long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)snsPublishId;
- (void)setSnsPublishId:(id)arg1;
- (void).cxx_destruct;
@end
