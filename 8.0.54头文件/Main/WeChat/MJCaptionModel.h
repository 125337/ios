@interface MJCaptionModel : NSObject <PBCoding>
{
    NSArray * _captionGroups; // +0x8
}
+ (void)PBArrayAdd_captionGroups;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCaptionGroups:(id)arg1;
- (id)toCaptionGroups;
- (id)description;
- (id)captionGroups;
- (void)setCaptionGroups:(id)arg1;
- (void).cxx_destruct;
@end

