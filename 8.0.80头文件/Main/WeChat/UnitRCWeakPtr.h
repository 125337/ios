@interface UnitRCWeakPtr : NSObject
{
    id objcStrong; // +0x8
    id objcWeak; // +0x10
}
+ (id)initWith:(id)arg1;
- (id)lock;
- (id)value;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
@end
