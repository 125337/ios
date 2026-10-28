@interface WCFinderFeedHighlightStyle : NSObject
{
    NSMutableArray * _hightlightItemList; // +0x8
    NSMutableArray * _infoListInPB; // +0x10
}
- (id)initWithHighlightInfoList:(id)arg1;
- (void)configHightlightItemListWithInfoList:(id)arg1;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (id)generateHightlightProgressNumberListWithVideoDuration:(int)arg1;
- (id)currentHightlightItemWithCurrentPlayPosition:(double)arg1;
- (id)currentHightlightTitleWithCurrentPlayPosition:(double)arg1;
- (long long)nearestHightlightItemIndexWithCurrentPlayPosition:(double)arg1;
- (id)hightlightItemList;
- (void)setHightlightItemList:(id)arg1;
- (id)infoListInPB;
- (void)setInfoListInPB:(id)arg1;
- (void).cxx_destruct;
@end
