@interface XNetInferenceTensorDataType : NSObject
{
    int _underlying; // +0x8
}
+ (id)dataTypeWithUnderlying:(const int *)arg1;
+ (id)Int8;
+ (id)Int16;
+ (id)Int32;
+ (id)Int64;
+ (id)Float16;
+ (id)Float32;
+ (id)Float64;
+ (id)UInt8;
+ (id)UInt16;
+ (id)UInt32;
+ (id)UInt64;
- (id)initWithUnderlying:(const int *)arg1;
- (const int *)underlying;
- (long long)stride;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataType:(id)arg1;
@end

