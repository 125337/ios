@interface TingCdnImageUploadMeta : NSObject
{
    NSString * _imagePath; // +0x8
    id /* block */ _complection; // +0x10
    TingCdnImageUploadTask * _uploadTask; // +0x18
}
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id /* block */)complection;
- (void)setComplection:(id /* block */)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (void).cxx_destruct;
@end
