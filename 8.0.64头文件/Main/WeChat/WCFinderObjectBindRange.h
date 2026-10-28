@interface WCFinderObjectBindRange : NSObject
{
    id <WCFinderBindableObjectProtocol> _object; // +0x8
    unsigned long long _type; // +0x10
    NSString * _content; // +0x18
    _NSRange _range; // +0x20
}
+ (id)xmlStyleTagFormatForType:(unsigned long long)arg1;
+ (id)xmlStyleTagForType:(unsigned long long)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
