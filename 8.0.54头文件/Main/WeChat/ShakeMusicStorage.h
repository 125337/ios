@interface ShakeMusicStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _newCount; // +0x8
    NSMutableArray * _musics; // +0x10
}
+ (void)PBArrayAdd_musics;
+ (void)PBArrayAdd_newCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)musics;
- (void)setMusics:(id)arg1;
- (int)newCount;
- (void)setNewCount:(int)arg1;
- (void).cxx_destruct;
@end

