@interface WCTagParam : NSObject
{
    long long _tagType; // +0x8
    double _tagHeight; // +0x10
}
- (long long)tagType;
- (void)setTagType:(long long)arg1;
- (double)tagHeight;
- (void)setTagHeight:(double)arg1;
@end
