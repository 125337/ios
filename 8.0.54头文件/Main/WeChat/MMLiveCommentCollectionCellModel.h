@interface MMLiveCommentCollectionCellModel : NSObject
{
    BOOL _needPefixSpace; // +0x8
    BOOL _ignoreLastLineSpace; // +0x9
    BOOL _isCellFrameMarginBottomWhenOnly; // +0xa
    double _cellWidth; // +0x10
    long long _cellType; // +0x18
    unsigned long long _index; // +0x20
    NSMutableArray * _firstShortPubbleCellFrameArr; // +0x28
    NSMutableArray * _secondShortPubbleCellFrameArr; // +0x30
    NSMutableArray * _firstLongPubbleCellFrameArr; // +0x38
    NSMutableArray * _secondLongPubbleCellFrameArr; // +0x40
    NSMutableArray * _officialPubbleCellFrameArr; // +0x48
    NSMutableArray * _mostLikePubbleCellFrameArr; // +0x50
    NSArray * _commentDataArr; // +0x58
    UICollectionView * _collectionView; // +0x60
    NSMutableArray * _lastAppendShortPubbleCellFrameArr; // +0x68
    NSMutableArray * _lastAppendLongPubbleCellFrameArr; // +0x70
    NSMutableArray * _touchCellFrameArr; // +0x78
}
- (id)initWithCellWidth:(double)arg1 inCollectionView:(id)arg2;
- (void)initCommentData:(id)arg1;
- (void)createCommentPubbleCellFrames;
- (void)appendCommentPubbleCellFrame:(id)arg1;
- (void)appendShortCellFrame:(id)arg1;
- (void)appendLongCellFrame:(id)arg1;
- (void)appendOfficialCellFrame:(id)arg1;
- (void)appendMostLikeCellFrame:(id)arg1;
- (void)updateCellFrameOriginY;
- (BOOL)isOnlyPubbleCellBottom;
- (unsigned long long)allPubbleCount;
- (void)initTouchCellFrameArr;
- (void)addTouchCellFrameFrom:(id)arg1;
- (void)initCellWidth;
- (double)pubbleCellStandardHeightAndSpace;
- (double)getFirstCellFrameOriginX;
- (double)currentMaxFirstCellFrameOriginX;
- (BOOL)isCellFrameUserType:(id)arg1;
- (BOOL)isCellFrameOfficelOrAnchorType:(id)arg1;
- (BOOL)isCellFrameMostLikeType:(id)arg1;
- (BOOL)isCommentShort:(id)arg1;
- (void)handleTouchHitOnLocation:(CGPoint)arg1 callBack:(id /* block */)arg2;
- (double)cellHeight;
- (id)firstShortPubbleCellFrameArr;
- (id)secondShortPubbleCellFrameArr;
- (id)firstLongPubbleCellFrameArr;
- (id)secondLongPubbleCellFrameArr;
- (id)officialPubbleCellFrameArr;
- (id)mostLikePubbleCellFrameArr;
- (id)touchCellFrameArr;
- (unsigned long long)commentCount;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setFirstShortPubbleCellFrameArr:(id)arg1;
- (void)setSecondShortPubbleCellFrameArr:(id)arg1;
- (void)setFirstLongPubbleCellFrameArr:(id)arg1;
- (void)setSecondLongPubbleCellFrameArr:(id)arg1;
- (void)setOfficialPubbleCellFrameArr:(id)arg1;
- (void)setMostLikePubbleCellFrameArr:(id)arg1;
- (id)commentDataArr;
- (void)setCommentDataArr:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (BOOL)needPefixSpace;
- (void)setNeedPefixSpace:(BOOL)arg1;
- (BOOL)ignoreLastLineSpace;
- (void)setIgnoreLastLineSpace:(BOOL)arg1;
- (BOOL)isCellFrameMarginBottomWhenOnly;
- (void)setIsCellFrameMarginBottomWhenOnly:(BOOL)arg1;
- (id)lastAppendShortPubbleCellFrameArr;
- (void)setLastAppendShortPubbleCellFrameArr:(id)arg1;
- (id)lastAppendLongPubbleCellFrameArr;
- (void)setLastAppendLongPubbleCellFrameArr:(id)arg1;
- (void)setTouchCellFrameArr:(id)arg1;
- (void).cxx_destruct;
@end

