@interface ServiceNotifyMessageDisplayItem : NSObject
{
    NSString * _topic; // +0x8
    NSString * _content; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
