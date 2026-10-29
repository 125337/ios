@interface WCAdFinderInfo : NSObject <NSCoding>
{
    NSString * _exportId; // +0x8
    NSString * _objectNonceId; // +0x10
    NSString * _finderUsername; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

