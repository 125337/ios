@interface TextWithType : NSObject
{
    unsigned long long type; // +0x8
    NSString * text; // +0x10
}
- (id)initWithText:(id)arg1 withType:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
