@interface MMMusicMVTrackItemLocalVideo : NSObject <PBCoding, NSCopying>
{
    unsigned int _clipTimeOffsetMs; // +0x8
    unsigned int _clipTimeLengthMs; // +0xc
    NSString * _localId; // +0x10
    NSString * _localVideoPath; // +0x18
    NSString * _localThumbPath; // +0x20
}
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_clipTimeOffsetMs;
+ (void)PBArrayAdd_clipTimeLengthMs;
+ (void)PBArrayAdd_localVideoPath;
+ (void)PBArrayAdd_localThumbPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (unsigned int)clipTimeOffsetMs;
- (void)setClipTimeOffsetMs:(unsigned int)arg1;
- (unsigned int)clipTimeLengthMs;
- (void)setClipTimeLengthMs:(unsigned int)arg1;
- (id)localVideoPath;
- (void)setLocalVideoPath:(id)arg1;
- (id)localThumbPath;
- (void)setLocalThumbPath:(id)arg1;
- (void).cxx_destruct;
@end
