@interface WXGChatLogRecoverFilter : NSObject
{
    NSData * _encryptData; // +0x8
    NSMutableDictionary * _decryptorDict; // +0x10
    NSMutableDictionary * _dataContainerDict; // +0x18
    NSMutableDictionary * _startOffsetDict; // +0x20
    NSMutableDictionary * _writeOffsetDict; // +0x28
}
- (id)initWithEncryptData:(id)arg1;
- (void)checkDataIntegrity;
- (unsigned long long)writeDataPush:(id)arg1 toPath:(id)arg2;
- (id)encryptData;
- (void)setEncryptData:(id)arg1;
- (id)decryptorDict;
- (void)setDecryptorDict:(id)arg1;
- (id)dataContainerDict;
- (void)setDataContainerDict:(id)arg1;
- (id)startOffsetDict;
- (void)setStartOffsetDict:(id)arg1;
- (id)writeOffsetDict;
- (void)setWriteOffsetDict:(id)arg1;
- (void).cxx_destruct;
@end
