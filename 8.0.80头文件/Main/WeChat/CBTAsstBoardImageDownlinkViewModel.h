@interface CBTAsstBoardImageDownlinkViewModel : CBTAsstBoardBaseViewModel
{
    CBTAsstBoardImageDownlinkCellView * _cellView; // +0x8
    NSMutableArray * _imageInfos; // +0x10
    NSString * _imageSerialId; // +0x18
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (BOOL)isSourceFromUser;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (CGSize)adaptedImageSizeWithWidthForIndex:(long long)arg1 width:(double)arg2;
- (void)onImageLoadedAtIndex:(long long)arg1 withSize:(CGSize)arg2;
- (void)fillHostTraceInfo:(id)arg1;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)imageInfos;
- (id)imageSerialId;
- (void)setImageSerialId:(id)arg1;
- (void).cxx_destruct;
@end
