@interface BrandFinderLiveCardViewModel : MMObject
{
    BOOL _isLive; // +0x8
    unsigned long long _style; // +0x10
    NSString * _title; // +0x18
    NSString * _category; // +0x20
    NSString * _recommendReason; // +0x28
    NSString * _coverImageUrl; // +0x30
    NSString * _liveStatusWording; // +0x38
    double _cornerRadius; // +0x40
}
- (id)description;
- (double)backgroundCoverHeight:(double)arg1;
- (double)cardHeight:(double)arg1;
- (double)titleMaxWidth:(double)arg1;
- (id)titleColor;
- (id)titleFont;
- (double)titleLineSpacing;
- (double)titleLineNumber;
- (unsigned long long)titleParserDetectorTypes;
- (id)recommendReasonLabelColor;
- (id)accessibilityStr;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (id)liveStatusWording;
- (void)setLiveStatusWording:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end
