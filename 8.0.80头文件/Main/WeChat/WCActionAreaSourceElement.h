@interface WCActionAreaSourceElement : WCActionAreaElement
{
    unsigned long long _sourceShowType; // +0x8
    NSString * _sourceText; // +0x10
    NSString * _sourceUrl; // +0x18
    NSString * _sourceBackupUrl; // +0x20
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)hashString;
- (unsigned long long)sourceShowType;
- (void)setSourceShowType:(unsigned long long)arg1;
- (id)sourceText;
- (void)setSourceText:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)sourceBackupUrl;
- (void)setSourceBackupUrl:(id)arg1;
- (void).cxx_destruct;
@end
