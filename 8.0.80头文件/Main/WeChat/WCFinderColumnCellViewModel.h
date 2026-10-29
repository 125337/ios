@interface WCFinderColumnCellViewModel : NSObject
{
    int _fromScene; // +0x8
    int _toScene; // +0xc
    id <WCFinderColumnCellViewModelDelegate> _delegate; // +0x10
    double _firstExposureTime; // +0x18
    WCFinderColumnCellVMDataSource * _dataSource; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
}
+ (void)updateContentVMPlayingPositionFrom:(id)arg1 to:(id)arg2;
+ (void)updateContentVMPlayingPositionByTidFrom:(id)arg1 to:(id)arg2;
+ (void)_syncPlayingPositionFromVM:(id)arg1 toVM:(id)arg2 supportPause:(BOOL)arg3;
- (BOOL)isLiveColumn;
- (void)updateWithContentVM:(id)arg1;
- (void)recordFirstDisplay;
- (id)allTids;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)getFeedArray;
- (id)title;
- (id)columnInfo;
- (unsigned long long)currentFocusIndex;
- (void)setCurrentFocusIndex:(unsigned long long)arg1;
- (void)fetchMoreData;
- (BOOL)isFetchingData;
- (BOOL)hasMore;
- (id)getReportInfo;
- (id)loadingState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)firstExposureTime;
- (void)setFirstExposureTime:(double)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (int)toScene;
- (void)setToScene:(int)arg1;
- (void).cxx_destruct;
@end
