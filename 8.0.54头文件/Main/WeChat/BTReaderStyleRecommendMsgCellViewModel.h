@interface BTReaderStyleRecommendMsgCellViewModel : BTBaseRecommendAppMsgCellViewModel
{
    NSMutableArray * _titleLabelStyles; // +0x28
    NSMutableArray * _digestLabelStyles; // +0x30
    CGSize _titleSize; // +0x38
    CGSize _digestSize; // +0x48
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void)clearCacheOnDataChanged;
- (id)itemViewClassName;
- (double)viewHeight;
- (BOOL)isShowLargeCover;
- (CGSize)titleSize;
- (id)titleFont;
- (id)titleLabelColor;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (unsigned long long)titleLineNumber;
- (BOOL)isTitleSingleLine;
- (void)clearTitleLabelCache;
- (id)digest;
- (CGSize)digestSize;
- (id)digestFont;
- (double)digestMaxWidth;
- (id)digestLabelStyles;
- (unsigned long long)digestLineNumber;
- (BOOL)isShowRecReasonLabel;
- (BOOL)shouldShowRecReasonInDigestLabel;
- (id)recReasonStr;
- (id)recReasonColor;
- (CGSize)coverImageViewSize;
- (unsigned long long)positionType;
- (double)normalCoverTopMargin;
- (double)normalCoverBottomMargin;
- (double)separateLineWidth;
- (void).cxx_destruct;
@end

