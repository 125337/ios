@interface ContactProfileRecommendInputItemInfo : NSObject
{
    unsigned int _message_id; // +0x8
    NSString * _role; // +0x10
    NSString * _content; // +0x18
}
- (id)role;
- (void)setRole:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)message_id;
- (void)setMessage_id:(unsigned int)arg1;
- (void).cxx_destruct;
@end
