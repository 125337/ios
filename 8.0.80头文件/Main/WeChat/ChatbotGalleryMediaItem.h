@interface ChatbotGalleryMediaItem : NSObject
{
    NSString * _mediaId; // +0x8
    NSString * _localPath; // +0x10
    NSString * _url; // +0x18
    NSString * _cdnFileId; // +0x20
    NSString * _fileAesKey; // +0x28
    NSString * _sourceText; // +0x30
}
+ (id)makeWithMediaId:(id)arg1 localPath:(id)arg2 url:(id)arg3 cdnFileId:(id)arg4 fileAesKey:(id)arg5 sourceText:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)cdnFileId;
- (void)setCdnFileId:(id)arg1;
- (id)fileAesKey;
- (void)setFileAesKey:(id)arg1;
- (id)sourceText;
- (void)setSourceText:(id)arg1;
- (void).cxx_destruct;
@end
