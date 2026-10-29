@interface MMFinderLiveQuickReplyModel : NSObject <NSCopying>
{
    long long _type; // +0x8
    NSString * _title; // +0x10
    NSString * _originTitle; // +0x18
    double _maxContentWidth; // +0x20
    double _font; // +0x28
    NSArray * _styles; // +0x30
    long long _wordingType; // +0x38
    CGSize _size; // +0x40
}
- (void)setTitle:(id)arg1;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (id)originTitle;
- (void)setOriginTitle:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (double)maxContentWidth;
- (void)setMaxContentWidth:(double)arg1;
- (double)font;
- (void)setFont:(double)arg1;
- (id)styles;
- (void)setStyles:(id)arg1;
- (long long)wordingType;
- (void)setWordingType:(long long)arg1;
- (void).cxx_destruct;
@end

