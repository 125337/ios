@interface WCPayMaskViewMatrix : NSObject
{
    char * data; // +0x8
    struct _max; // +0x10
}
- (id)initWithMaxX:(unsigned long long)arg1 MaxY:(unsigned long long)arg2;
- (id)initWithMax:(struct)arg1;
- (char)valueForCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)setValue:(char)arg1 forCoordinates:(unsigned long long)arg2 y:(unsigned long long)arg3;
- (char)getValueWithCoordinates:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)fillWithValue:(char)arg1;
- (void)dealloc;
- (struct)max;
- (void)setMax:(struct)arg1;
@end
