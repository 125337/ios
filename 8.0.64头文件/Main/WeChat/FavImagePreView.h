@interface FavImagePreView : MMUIImageView <IRecordDownloadExt, IFavCdnDownloadMgrExt>
{
    UIView * m_maskView; // +0x8
    MMWebImageView * m_imgPreView; // +0x10
    NSString * m_imageLocalPath; // +0x18
    unsigned long long imageDataSize; // +0x20
    MMUIView * m_imgvBack; // +0x28
    MMUIView * m_imgvFront; // +0x30
    unsigned int m_progressLength; // +0x38
    BOOL m_bIsImageExit; // +0x3c
    BOOL m_bIsSourceImg; // +0x3d
    BOOL m_bIsLongPressHandled; // +0x3e
    id <FavImagePreViewDelegate> m_delegate; // +0x40
    id <RecordNodeDataSource> dataSource; // +0x48
}
+ (CGSize)GetPreSizeByRecordDataSource:(id)arg1;
+ (CGSize)GetPreSizeByRecordDataSource:(id)arg1 maxWidth:(double)arg2;
+ (CGSize)GetPreSizeByImageSize:(CGSize)arg1 maxWidth:(double)arg2;
+ (id)generatePreImgPathByImgPath:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)startLoadImage;
- (void)startLoadImageWithMaxWidth:(double)arg1;
- (void)initData;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)onBeginLongPress;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)OnLongPressFavImage;
- (void)windowHide:(id)arg1;
- (void)onClickFavImage;
- (void)showMaskView;
- (void)hideMaskView;
- (id)compressImage:(id)arg1;
- (id)getPreviewImage;
- (void)startLoadImageWithGCD;
- (void)initProgressView;
- (void)updateProgressFinishedLength:(unsigned long long)arg1 TotalLength:(unsigned long long)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)m_imageLocalPath;
- (void)setM_imageLocalPath:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
