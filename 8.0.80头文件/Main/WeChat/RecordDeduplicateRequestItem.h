@interface RecordDeduplicateRequestItem : NSObject
{
    MultiMediaUploadTask * _uploadTask; // +0x8
    unsigned long long _role; // +0x10
}
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (unsigned long long)role;
- (void)setRole:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
