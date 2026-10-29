@interface OMJID : NSObject
{
    XID _backingID; // +0x8
}
+ (id)nullID;
+ (id)uniqueID;
- (id)initWithBackingID:(const void *)arg1;
- (BOOL)isNull;
- (const void *)backingID;
- (id)UUIDString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
