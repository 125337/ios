@interface MMTextDiffUnit : NSObject
{
    NSString * _identity; // +0x8
    NSAttributedString * _attributedText; // +0x10
    unsigned long long _logicalLength; // +0x18
    unsigned long long _storageLength; // +0x20
    unsigned long long _kind; // +0x28
}
- (id)identity;
- (void)setIdentity:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (unsigned long long)logicalLength;
- (void)setLogicalLength:(unsigned long long)arg1;
- (unsigned long long)storageLength;
- (void)setStorageLength:(unsigned long long)arg1;
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
