@interface WCFinderNearbyMoreLiveCellPlayModel : NSObject
{
    NSIndexPath * _leftPlayingIndexPath; // +0x8
    NSIndexPath * _rightPlayingIndexPath; // +0x10
}
- (BOOL)isEqual:(id)arg1;
- (BOOL)containIndexPath:(id)arg1;
- (id)leftPlayingIndexPath;
- (void)setLeftPlayingIndexPath:(id)arg1;
- (id)rightPlayingIndexPath;
- (void)setRightPlayingIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
