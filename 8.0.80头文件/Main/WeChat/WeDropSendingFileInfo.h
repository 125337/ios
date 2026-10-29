@interface WeDropSendingFileInfo : NSObject
{
    NSMutableArray * _filePaths; // +0x8
    unsigned long long _index; // +0x10
    NSData * _thumbnail; // +0x18
    WeDropContentInfo * _contentInfo; // +0x20
}
- (id)init;
- (id)filePaths;
- (void)setFilePaths:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)contentInfo;
- (void)setContentInfo:(id)arg1;
- (void).cxx_destruct;
@end
