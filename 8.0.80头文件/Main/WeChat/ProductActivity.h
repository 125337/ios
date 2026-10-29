@interface ProductActivity : NSObject
{
    unsigned int _activity_type; // +0x8
    NSString * _activity_tag; // +0x10
    NSString * _activity_content; // +0x18
}
- (unsigned int)activity_type;
- (void)setActivity_type:(unsigned int)arg1;
- (id)activity_tag;
- (void)setActivity_tag:(id)arg1;
- (id)activity_content;
- (void)setActivity_content:(id)arg1;
- (void).cxx_destruct;
@end
