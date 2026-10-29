@interface WCFinderNearbyLiveSectionInfo : NSObject
{
    WCFinderFeedLayoutContentVM * _layoutVM; // +0x8
    WCFinderFeedLayoutContentVM * _bottomLayoutVM; // +0x10
    NSMutableArray * _dataArray; // +0x18
    NSMutableArray * _moreFollowDataArray; // +0x20
}
- (id)dataArray;
- (id)moreFollowDataArray;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)layoutVM;
- (void)setLayoutVM:(id)arg1;
- (id)bottomLayoutVM;
- (void)setBottomLayoutVM:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setMoreFollowDataArray:(id)arg1;
- (void).cxx_destruct;
@end

