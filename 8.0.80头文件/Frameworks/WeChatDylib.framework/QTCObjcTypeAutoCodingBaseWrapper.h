@interface QTCObjcTypeAutoCodingBaseWrapper : NSObject <QTCObjcTypeAutoCoding>
+ (id)qtc_supportedObjcType;
+ (id)qtc_generateClassPropertyNames;
- (id)qtc_encodeWithValue:(id)arg1;
- (id)qtc_decode;
- (id)qtc_getPropertyNames;
- (void)qtc_decodeWithCoder:(id)arg1;
- (void)qtc_encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
@end
