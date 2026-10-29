@interface NSData (Dart) <WCTColumnCoding, WCTValueProtocol>
+ (id)qb_dataWithName:(id)arg1 inAttributes:(id)arg2;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)QMapDataWithBase64String:(id)arg1;
+ (id)wwkapi_nilobj;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2;
- (id)MD5;
- (id)dataByHealingUTF8Stream;
- (id)rsaEncryptWithPublicPemKey:(id)arg1;
- (id)SHA1;
- (id)SHA256;
- (id)archivedWCTValue;
- (id)dataValue;
- (id)stringValue;
- (id)numberValue;
- (id)gzippedWithCompressionLevel:(int)arg1 error:(id *)arg2;
- (id)gunzippedWithError:(id *)arg1;
- (id)MBJSONValue;
- (id)MBJSONDictionary;
- (id)QMapInflateValue;
- (id)QMapDeflateValue;
- (id)QMapMd5String;
- (id)qmap_sha1String;
- (id)QMapDataConversion:(id)arg1 withFactor:(id)arg2;
- (id)QMapDataUnload:(id)arg1 withFactor:(id)arg2;
- (id)Q_base64RFC4648;
- (id)Q_hexString;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)WCNotificationEncryption_stdstring;
- (id)md5;
- (id)uncompressZippedData;
- (id)UTF8String_isValid:(BOOL *)arg1;
- (id)UTF8String;
- (id)_dataByHealingUTF8Stream;
- (id)UintList;
@end

