@interface UnitRCWeakObj : NSObject
{
    id objcStrong; // +0x8
    id objcWeak; // +0x10
}
+ (id)initWithObj:(id)arg1;
- (id)lock;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
@end

