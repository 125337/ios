@interface GroupNoticeDownloadInfo : NSObject
{
    BOOL _isThumb; // +0x8
    GroupNoticeItemDataField * _data; // +0x10
    GroupNoticeItem * _item; // +0x18
    NSString * _fileKey; // +0x20
}
+ (id)downloadInfoWithData:(id)arg1 thumb:(BOOL)arg2;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (void).cxx_destruct;
@end

