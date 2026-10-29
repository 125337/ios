@interface FavWebCacheDownloadFileInfo : MMObject <PBCoding>
{
    NSMutableSet * _mediaFiles; // +0x8
    NSMutableSet * _textFiles; // +0x10
    NSMutableDictionary * _mimeTypeDic; // +0x18
}
+ (void)PBArrayAdd_mediaFiles;
+ (void)PBArrayAdd_textFiles;
+ (void)PBArrayAdd_mimeTypeDic;
+ (void)initialize;
- (id)init;
- (long long)count;
- (void)removeObject:(id)arg1;
- (id)getPBPropertyTable;
- (id)mediaFiles;
- (void)setMediaFiles:(id)arg1;
- (id)textFiles;
- (void)setTextFiles:(id)arg1;
- (id)mimeTypeDic;
- (void)setMimeTypeDic:(id)arg1;
- (void).cxx_destruct;
@end
