@interface MMOption : NSObject
{
    BOOL _enabled; // +0x8
    NSString * _content; // +0x10
}
+ (id)OptionWithContent:(id)arg1 enabled:(BOOL)arg2;
- (id)initWithContent:(id)arg1 enabled:(BOOL)arg2;
- (id)description;
- (id)content;
- (BOOL)enabled;
- (void).cxx_destruct;
@end
