@interface WCFinderCollectionFeedCellConfig : NSObject
{
    BOOL _isPlaying; // +0x8
    BOOL _forceCompleteCourseWatch; // +0x9
    BOOL _forceShowNeedPayTag; // +0xa
    BOOL _showWatchedAtLastTimeTips; // +0xb
    unsigned long long _style; // +0x10
    double _cellHorizontalPadding; // +0x18
}
+ (id)configWithPlaying:(BOOL)arg1 style:(unsigned long long)arg2;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (BOOL)forceCompleteCourseWatch;
- (void)setForceCompleteCourseWatch:(BOOL)arg1;
- (BOOL)forceShowNeedPayTag;
- (void)setForceShowNeedPayTag:(BOOL)arg1;
- (BOOL)showWatchedAtLastTimeTips;
- (void)setShowWatchedAtLastTimeTips:(BOOL)arg1;
- (double)cellHorizontalPadding;
- (void)setCellHorizontalPadding:(double)arg1;
@end
