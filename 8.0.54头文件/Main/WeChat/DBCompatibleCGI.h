@interface DBCompatibleCGI : NSObject <WCTTableCoding>
{
    unsigned int _uiCgi; // +0x8
    unsigned int _cgiType; // +0xc
    NSString * _pbUniqueID; // +0x10
    NSData * _pbRequestData; // +0x18
    NSData * _pbResponseData; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pbUniqueID;
+ (const void *)__wcdb_synthesize_177:(void *)arg1;
+ (id)swift_pbUniqueID;
+ (const void *)pbRequestData;
+ (const void *)__wcdb_synthesize_178:(void *)arg1;
+ (id)swift_pbRequestData;
+ (const void *)pbResponseData;
+ (const void *)__wcdb_synthesize_179:(void *)arg1;
+ (id)swift_pbResponseData;
+ (const void *)uiCgi;
+ (const void *)__wcdb_synthesize_180:(void *)arg1;
+ (id)swift_uiCgi;
+ (const void *)cgiType;
+ (const void *)__wcdb_synthesize_181:(void *)arg1;
+ (id)swift_cgiType;
+ (void)__wcdb_column_constraint_182:(void *)arg1;
+ (void)__wcdb_column_constraint_183:(void *)arg1;
- (id)pbUniqueID;
- (void)setPbUniqueID:(id)arg1;
- (id)pbRequestData;
- (void)setPbRequestData:(id)arg1;
- (id)pbResponseData;
- (void)setPbResponseData:(id)arg1;
- (unsigned int)uiCgi;
- (void)setUiCgi:(unsigned int)arg1;
- (unsigned int)cgiType;
- (void)setCgiType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

