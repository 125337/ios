@interface WCFoldSnsAdFeedbackInfo : NSObject
{
    BOOL _isPersonalizedAdClose; // +0x8
    NSString * _url; // +0x10
    WCMultiLanguageItem * _wording; // +0x18
    WCMultiLanguageItem * _expandOutsideTitle; // +0x20
    WCMultiLanguageItem * _expandInsideTitle; // +0x28
    NSArray * _dislikeReasonList; // +0x30
}
+ (id)fromOriginFeedbackInfo:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)expandOutsideTitle;
- (void)setExpandOutsideTitle:(id)arg1;
- (id)expandInsideTitle;
- (void)setExpandInsideTitle:(id)arg1;
- (BOOL)isPersonalizedAdClose;
- (void)setIsPersonalizedAdClose:(BOOL)arg1;
- (id)dislikeReasonList;
- (void)setDislikeReasonList:(id)arg1;
- (void).cxx_destruct;
@end
