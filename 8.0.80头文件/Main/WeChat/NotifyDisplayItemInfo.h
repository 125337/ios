@interface NotifyDisplayItemInfo : NSObject
{
    NSString * _topic; // +0x8
    NSString * _content; // +0x10
    unsigned long long _maxLine; // +0x18
}
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)maxLine;
- (void)setMaxLine:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
