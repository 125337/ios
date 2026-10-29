@interface MMMusicMVTrackItemLocalPic : NSObject <PBCoding, NSCopying>
{
    NSString * _localId; // +0x8
    NSString * _localPicPath; // +0x10
    NSString * _picVideoPath; // +0x18
    NSString * _picVideoThumbPath; // +0x20
}
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_localPicPath;
+ (void)PBArrayAdd_picVideoPath;
+ (void)PBArrayAdd_picVideoThumbPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)localPicPath;
- (void)setLocalPicPath:(id)arg1;
- (id)picVideoPath;
- (void)setPicVideoPath:(id)arg1;
- (id)picVideoThumbPath;
- (void)setPicVideoThumbPath:(id)arg1;
- (void).cxx_destruct;
@end

