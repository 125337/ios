@interface EditEmoticonInfo : MMObject
{
    BOOL _uploadSuccess; // +0x8
    unsigned long long _index; // +0x10
    unsigned long long _source; // +0x18
    unsigned long long _type; // +0x20
}
- (id)initWithData:(unsigned long long)arg1 editFileSource:(unsigned long long)arg2 editFileType:(unsigned long long)arg3;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)uploadSuccess;
- (void)setUploadSuccess:(BOOL)arg1;
@end
