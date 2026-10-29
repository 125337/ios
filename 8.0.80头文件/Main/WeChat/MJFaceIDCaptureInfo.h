@interface MJFaceIDCaptureInfo : NSObject <PBCoding, NSCopying>
{
    NSArray * _groups; // +0x8
}
+ (void)PBArrayAdd_groups;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCaptureInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)groups;
- (void)setGroups:(id)arg1;
- (void).cxx_destruct;
@end
