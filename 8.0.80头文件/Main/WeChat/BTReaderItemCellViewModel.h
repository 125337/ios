@interface BTReaderItemCellViewModel : BTBaseItemCellViewModel
{
    ReaderWrap * _readerWrap; // +0x28
    unsigned int _itemIndex; // +0x30
    CGSize _titleSize; // +0x38
    NSMutableArray * _titleLabelStyles; // +0x48
    CGSize _digestSize; // +0x50
    NSMutableArray * _digestLabelStyles; // +0x60
    unsigned long long _position; // +0x68
    MPPageRelatedInfo * _relatedInfo; // +0x70
    BOOL _isPaid; // +0x78
    BOOL _isPaySubcribeOpen; // +0x79
    UIFont * _digestFoldFont; // +0x80
    id <BTReaderItemCellViewModelDelegate> _delegate; // +0x88
}
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
+ (id)createModelWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
- (id)itemViewClassName;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
- (void)updateWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
- (void)updateWithRelatedInfo:(id)arg1;
- (void)updatePayStatus:(BOOL)arg1;
- (void)initPayStateIfNeed;
- (double)viewHeight;
- (id)coverImgURL;
- (id)titleStr;
- (unsigned long long)position;
- (BOOL)hasLandingPage;
- (BOOL)isTitleSingleLine;
- (BOOL)isShowLargeCover;
- (BOOL)isTopItemShowLargeCover;
- (double)titleMaxWidth;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (id)digest;
- (BOOL)exposeDigest;
- (unsigned long long)digestLineNumber;
- (id)titleLabelStyles;
- (BOOL)hasTitleTag;
- (CGSize)titleTagImageSize;
- (void)updateCellView;
- (void)clearCache;
- (CGSize)titleSize;
- (CGSize)digestSize;
- (id)digestFont;
- (double)digestMaxWidth;
- (id)digestFoldFont;
- (id)digestLabelStyles;
- (double)itemViewHeightForNormalItem;
- (double)normalCoverTopMargin;
- (double)normalCoverBottomMargin;
- (BOOL)isPayContent;
- (BOOL)isPaid;
- (CGSize)payTagSize;
- (id)paySubcribeTagImage;
- (id)relatedInfo;
- (id)pageIdentifier;
- (id)friendRelatedInfoStr;
- (unsigned int)friendReadCount;
- (BOOL)isShowFriendRelatedInfo;
- (BOOL)shouldShowFriendRelatedInfoStrInDigestLabel;
- (BOOL)canShowRedPacketcover;
- (unsigned int)itemIndex;
- (id)readerWrap;
- (void)setIsPaid:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPaySubcribeOpen;
- (void)setIsPaySubcribeOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
