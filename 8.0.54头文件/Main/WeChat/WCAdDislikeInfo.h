@interface WCAdDislikeInfo : NSObject <NSCoding>
{
    BOOL _forbidClick; // +0x8
    BOOL _isPersonalizedAdClose; // +0x9
    BOOL _useNewStyle; // +0xa
    NSArray * _reasonList; // +0x10
    WCMultiLanguageItem * _title; // +0x18
    WCMultiLanguageItem * _forbidClickReason; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)validReasonCount;
- (id)validReasonList;
- (id)reasonList;
- (void)setReasonList:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)forbidClick;
- (void)setForbidClick:(BOOL)arg1;
- (id)forbidClickReason;
- (void)setForbidClickReason:(id)arg1;
- (BOOL)isPersonalizedAdClose;
- (void)setIsPersonalizedAdClose:(BOOL)arg1;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

