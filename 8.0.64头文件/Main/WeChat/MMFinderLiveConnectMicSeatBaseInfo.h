@interface MMFinderLiveConnectMicSeatBaseInfo : NSObject <NSCopying>
{
    BOOL _isInOtherRoom; // +0x8
    unsigned long long _micIndex; // +0x10
    NSString * _seatName; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)displayedSeatName;
- (id)displayedSeatFullName;
- (unsigned long long)micIndex;
- (void)setMicIndex:(unsigned long long)arg1;
- (id)seatName;
- (void)setSeatName:(id)arg1;
- (BOOL)isInOtherRoom;
- (void)setIsInOtherRoom:(BOOL)arg1;
- (void).cxx_destruct;
@end
