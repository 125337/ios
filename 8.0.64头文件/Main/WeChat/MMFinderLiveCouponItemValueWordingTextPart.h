@interface MMFinderLiveCouponItemValueWordingTextPart : NSObject
{
    BOOL _isSmallLevel; // +0x8
    NSString * _text; // +0x10
}
+ (id)partWithText:(id)arg1;
+ (id)partWithText:(id)arg1 isSmallLevel:(BOOL)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)isSmallLevel;
- (void)setIsSmallLevel:(BOOL)arg1;
- (void).cxx_destruct;
@end
