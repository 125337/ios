@interface WCCardOfflineCodeInfoData : MMObject <WCTTableCoding>
{
    unsigned int status; // +0x8
    NSString * cardId; // +0x10
    NSString * qrCodeId; // +0x18
    NSData * code; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cardId;
+ (const void *)qrCodeId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_qrCodeId;
+ (const void *)code;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_code;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_status;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)qrCodeId;
- (void)setQrCodeId:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
