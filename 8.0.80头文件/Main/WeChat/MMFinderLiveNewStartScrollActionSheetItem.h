@interface MMFinderLiveNewStartScrollActionSheetItem : MMScrollActionSheetItem
{
    BOOL _needHighlightedOnce; // +0x8
    long long _reportElementId; // +0x10
    NSString * _redDotPath; // +0x18
}
- (id)init;
- (long long)reportElementId;
- (void)setReportElementId:(long long)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (BOOL)needHighlightedOnce;
- (void)setNeedHighlightedOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
