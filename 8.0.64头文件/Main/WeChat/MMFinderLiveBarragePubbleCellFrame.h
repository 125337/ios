@interface MMFinderLiveBarragePubbleCellFrame : NSObject
{
    int _lastExposeIndex; // +0x8
    MMFinderLiveBarrageDataItem * _barrageDataItem; // +0x10
    MMFinderLiveBarragePubbleCellFrameResult * _layoutResult; // +0x18
    unsigned long long _currLayoutStyle; // +0x20
}
- (id)initWithBarrageDataItem:(id)arg1 inBrightStyle:(BOOL)arg2;
- (void)calculate;
- (void)updateLayoutStyle:(int)arg1;
- (BOOL)isInBrightStyle;
- (BOOL)isSingleLine;
- (unsigned long long)contentMaxLineNum;
- (double)contentLeft;
- (double)contentTop;
- (double)startIconLeft;
- (double)startIconTop;
- (CGSize)startIconSize;
- (double)startIconContentDis;
- (id)labelFont;
- (BOOL)isContentMultiline;
- (CGSize)cellSize;
- (CGSize)contentSize;
- (id)arrStyles;
- (double)firstLineOriginX;
- (id)layoutResult;
- (id)displayStr;
- (void)calculateSizeWithBarrageDataItem:(id)arg1;
- (long long)getCurrentLines:(id)arg1;
- (double)getLastLineMaxY:(id)arg1;
- (id)barrageDataItem;
- (void)setBarrageDataItem:(id)arg1;
- (int)lastExposeIndex;
- (void)setLastExposeIndex:(int)arg1;
- (void)setLayoutResult:(id)arg1;
- (unsigned long long)currLayoutStyle;
- (void)setCurrLayoutStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
