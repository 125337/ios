@interface RecordUploadTaskArgs : NSObject
{
    BOOL _isThumb; // +0x8
    BOOL _isMiddleData; // +0x9
    BOOL _isLivePhotoData; // +0xa
    BOOL _isLocalResource; // +0xb
    BOOL _isFromFav; // +0xc
    BOOL _needDownloadAsHtml; // +0xd
    BOOL _enableMarkdownNote; // +0xe
    CMessageWrap * _msgWrap; // +0x10
    FavoritesItemDataField * _recordData; // +0x18
}
- (id)initWithRecordMsg:(id)arg1 recordData:(id)arg2;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)recordData;
- (void)setRecordData:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (BOOL)isMiddleData;
- (void)setIsMiddleData:(BOOL)arg1;
- (BOOL)isLivePhotoData;
- (void)setIsLivePhotoData:(BOOL)arg1;
- (BOOL)isLocalResource;
- (void)setIsLocalResource:(BOOL)arg1;
- (BOOL)isFromFav;
- (void)setIsFromFav:(BOOL)arg1;
- (BOOL)needDownloadAsHtml;
- (void)setNeedDownloadAsHtml:(BOOL)arg1;
- (BOOL)enableMarkdownNote;
- (void)setEnableMarkdownNote:(BOOL)arg1;
- (void).cxx_destruct;
@end
