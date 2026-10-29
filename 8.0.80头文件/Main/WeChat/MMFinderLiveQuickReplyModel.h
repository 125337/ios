@interface MMFinderLiveQuickReplyModel : NSObject <NSCopying>
{
    BOOL _isExposeReportedInCommentScene; // +0x8
    long long _type; // +0x10
    NSString * _title; // +0x18
    NSString * _originTitle; // +0x20
    double _maxContentWidth; // +0x28
    double _font; // +0x30
    NSArray * _styles; // +0x38
    long long _wordingType; // +0x40
    NSString * _wordingId; // +0x48
    NSData * _svrSourceBuffer; // +0x50
    CGSize _size; // +0x58
}
- (void)setTitle:(id)arg1;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isModelDirectPost;
- (long long)getRecommendCommentType;
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
- (id)wordingId;
- (void)setWordingId:(id)arg1;
- (id)svrSourceBuffer;
- (void)setSvrSourceBuffer:(id)arg1;
- (BOOL)isExposeReportedInCommentScene;
- (void)setIsExposeReportedInCommentScene:(BOOL)arg1;
- (void).cxx_destruct;
@end
