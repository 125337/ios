@interface MMMusicMVOriginalInfo : NSObject <PBCoding, NSCopying>
{
    float _originality; // +0x8
    float _completion; // +0xc
}
+ (void)PBArrayAdd_originality;
+ (void)PBArrayAdd_completion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)originalityPercentValue;
- (float)completionPercentValue;
- (float)originality;
- (void)setOriginality:(float)arg1;
- (float)completion;
- (void)setCompletion:(float)arg1;
@end

