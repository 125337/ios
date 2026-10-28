@interface WeNotePasteboardProcessItem : NSObject
{
    BOOL _isValidForFileNaming; // +0x8
    long long _type; // +0x10
    id _content; // +0x18
    NSString * _fileExtension; // +0x20
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)fileExtension;
- (void)setFileExtension:(id)arg1;
- (BOOL)isValidForFileNaming;
- (void)setIsValidForFileNaming:(BOOL)arg1;
- (void).cxx_destruct;
@end
