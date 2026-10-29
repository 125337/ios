@interface MMFinderLiveFeedStreamSelfLaneBulletItem : NSObject
{
    UIView * _itemView; // +0x8
    unsigned long long _laneIndex; // +0x10
    double _departureTime; // +0x18
    double _bulletWidth; // +0x20
}
- (id)itemView;
- (void)setItemView:(id)arg1;
- (unsigned long long)laneIndex;
- (void)setLaneIndex:(unsigned long long)arg1;
- (double)departureTime;
- (void)setDepartureTime:(double)arg1;
- (double)bulletWidth;
- (void)setBulletWidth:(double)arg1;
- (void).cxx_destruct;
@end
