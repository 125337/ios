@interface CBTAsstBoardImageViewModel : CBTAsstBoardBaseViewModel
{
    NSArray * _images; // +0x8
    CBTAsstBoardImageCellView * _cellView; // +0x10
}
+ (void)recordUploadResultForPath:(id)arg1 fileId:(id)arg2 aesKey:(id)arg3;
- (id)initWithImages:(id)arg1 delegate:(id)arg2;
- (id)initWithCardWrap:(id)arg1 record:(id)arg2 delegate:(id)arg3;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)canTransToCommonMsg;
- (BOOL)isSourceFromUser;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)_forwardHistoryImageMsgForImage:(id)arg1;
- (BOOL)_ensureForwardHistoryRemoteInfoForImage:(id)arg1;
- (void)cbt_receiveImageUploadResult:(id)arg1;
- (void)configWithStorageInfo:(id)arg1;
- (void)dealloc;
- (void)applyUploadResultForPath:(id)arg1 fileId:(id)arg2 aesKey:(id)arg3;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)images;
- (void)setImages:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void).cxx_destruct;
@end
