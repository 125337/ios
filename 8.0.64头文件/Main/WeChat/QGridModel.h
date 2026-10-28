@interface QGridModel : NSObject
{
    int _x; // +0x8
    int _y; // +0xc
    unsigned int _scale; // +0x10
    NSString * _gridID; // +0x18
}
+ (int)gridUnitAtScale:(int)arg1;
- (id)initWithScael:(unsigned int)arg1 x:(int)arg2 y:(int)arg3;
- (id)createChildren;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)x;
- (int)y;
- (unsigned int)scale;
- (id)gridID;
- (void).cxx_destruct;
@end
