@interface DBContactEncryptSecret : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _textStateEncryptSecret; // +0x8
    NSString * _commonEncryptSecret; // +0x10
    NSString * _recordEncryptSecret; // +0x18
}
+ (void)PBArrayAdd_textStateEncryptSecret;
+ (void)PBArrayAdd_commonEncryptSecret;
+ (void)PBArrayAdd_recordEncryptSecret;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)textStateEncryptSecret;
- (void)setTextStateEncryptSecret:(id)arg1;
- (id)commonEncryptSecret;
- (void)setCommonEncryptSecret:(id)arg1;
- (id)recordEncryptSecret;
- (void)setRecordEncryptSecret:(id)arg1;
- (void).cxx_destruct;
@end
