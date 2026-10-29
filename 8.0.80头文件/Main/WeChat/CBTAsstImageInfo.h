@interface CBTAsstImageInfo : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _isLoaded; // +0x9
    NSString * _url; // +0x10
    NSString * _fileId; // +0x18
    NSString * _fileAesKey; // +0x20
    NSString * _fileType; // +0x28
    NSString * _localPath; // +0x30
    double _width; // +0x38
    double _height; // +0x40
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)fileAesKey;
- (void)setFileAesKey:(id)arg1;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isLoaded;
- (void)setIsLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
