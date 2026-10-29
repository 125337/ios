@interface WCFinderLiveCompleteElementModel : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    NSIndexPath * _indexPath; // +0x10
}
+ (id)finderLiveStreamElementModelFrom:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)getExposeStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioStartTs:(unsigned long long)arg1;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioTime:(unsigned int)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (void)resetExposeSession;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

