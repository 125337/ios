@interface WWKMessageFileAttachment : WWKMessageAttachment
{
    NSString * _filename; // +0x8
    NSString * _path; // +0x10
    NSData * _data; // +0x18
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

