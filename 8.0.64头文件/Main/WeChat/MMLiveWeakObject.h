@interface MMLiveWeakObject : NSObject
{
    unsigned int _timestamp; // +0x8
    NSObject * _object; // +0x10
}
- (id)initWithObject:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
