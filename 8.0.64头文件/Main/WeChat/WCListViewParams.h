@interface WCListViewParams : NSObject
{
    BOOL _bHideBackgroundCover; // +0x8
    BOOL _isStarBrowsingEnabled; // +0x9
    WCMomentsPageContext * _pageContext; // +0x10
    long long _puzzleImageViewLayoutStyle; // +0x18
}
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)bHideBackgroundCover;
- (void)setBHideBackgroundCover:(BOOL)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (long long)puzzleImageViewLayoutStyle;
- (void)setPuzzleImageViewLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
@end
