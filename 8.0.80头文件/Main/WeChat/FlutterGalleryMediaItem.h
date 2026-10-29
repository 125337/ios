@interface FlutterGalleryMediaItem : NSObject
{
    NSString * _mediaId; // +0x8
    unsigned long long _mediaType; // +0x10
    NSString * _filePath; // +0x18
    NSString * _sourceText; // +0x20
}
+ (id)makeWithMediaId:(id)arg1 mediaType:(unsigned long long)arg2 filePath:(id)arg3 sourceText:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)sourceText;
- (void)setSourceText:(id)arg1;
- (void).cxx_destruct;
@end
