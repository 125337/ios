@interface WCMomentsFinderRecommendationViewModel : NSObject
{
    BOOL _showsSingleBannerText; // +0x8
    BOOL _isUserTextTruncated; // +0x9
    BOOL _Report_isFirstEnteringTimeline; // +0xa
    WCMomentsFinderRecommendationInfo * _recommendationInfo; // +0x10
    WCMomentsFinderRecommendationPlaceholderContext * _placeholderContext; // +0x18
    NSString * _customizedSeparatorTipsText; // +0x20
    double _paddingX; // +0x28
    double _maxWidth; // +0x30
    long long _style; // +0x38
    UIFont * _bannerTextFont; // +0x40
    NSString * _singleBannerText; // +0x48
    NSString * _seeText; // +0x50
    NSString * _fallbackSeeText; // +0x58
    unsigned long long _userCount; // +0x60
    NSArray * _usernames; // +0x68
    NSArray * _usernamesForHeadImages; // +0x70
    NSArray * _contactsForHeadImages; // +0x78
    CContact * _contactForUserText; // +0x80
    NSString * _userText; // +0x88
    NSString * _userTextThatDisplayed; // +0x90
    NSString * _fallbackUserText; // +0x98
    long long _contentType; // +0xa0
    NSString * _contentTypeRichText; // +0xa8
    NSString * _contentTypePlainText; // +0xb0
    NSString * _contentTypeAccessibilityLabel; // +0xb8
    NSString * _contentTypeShorterRichText; // +0xc0
    NSString * _contentTypeShorterPlainText; // +0xc8
    NSString * _contentTypeShorterAccessibilityLabel; // +0xd0
    NSString * _contentTypePlainTextThatDisplayed; // +0xd8
    NSDate * _timeThatNavigatedToFinder; // +0xe0
    NSString * _Report_timelineSessionID; // +0xe8
    unsigned long long _Report_recommendationSessionIndex; // +0xf0
}
+ (id)viewModelWithRecommendationInfo:(id)arg1 placeholderContext:(id)arg2;
- (void)initParamsForReporter;
- (id)initWithRecommendationInfo:(id)arg1 placeholderContext:(id)arg2;
- (void)adjustSplicingTexts;
- (id)finderLogoName;
- (id)finderLogoColor;
- (id)finderLogoColorName;
- (id)cardThumbMediaWrap;
- (CGSize)cardThumbMediaSize;
- (id)cardDescriptionRichText;
- (void)navigateToFinderPageFromViewController:(id)arg1;
- (id)recommendationInfo;
- (id)placeholderContext;
- (id)customizedSeparatorTipsText;
- (double)paddingX;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (long long)style;
- (id)bannerTextFont;
- (BOOL)showsSingleBannerText;
- (id)singleBannerText;
- (id)seeText;
- (id)fallbackSeeText;
- (unsigned long long)userCount;
- (id)usernames;
- (void)setUsernames:(id)arg1;
- (id)usernamesForHeadImages;
- (void)setUsernamesForHeadImages:(id)arg1;
- (id)contactsForHeadImages;
- (void)setContactsForHeadImages:(id)arg1;
- (id)contactForUserText;
- (void)setContactForUserText:(id)arg1;
- (id)userText;
- (void)setUserText:(id)arg1;
- (id)userTextThatDisplayed;
- (void)setUserTextThatDisplayed:(id)arg1;
- (BOOL)isUserTextTruncated;
- (void)setIsUserTextTruncated:(BOOL)arg1;
- (id)fallbackUserText;
- (long long)contentType;
- (id)contentTypeRichText;
- (void)setContentTypeRichText:(id)arg1;
- (id)contentTypePlainText;
- (id)contentTypeAccessibilityLabel;
- (void)setContentTypeAccessibilityLabel:(id)arg1;
- (id)contentTypeShorterRichText;
- (id)contentTypeShorterPlainText;
- (id)contentTypeShorterAccessibilityLabel;
- (id)contentTypePlainTextThatDisplayed;
- (void)setContentTypePlainTextThatDisplayed:(id)arg1;
- (id)timeThatNavigatedToFinder;
- (void)setTimeThatNavigatedToFinder:(id)arg1;
- (BOOL)Report_isFirstEnteringTimeline;
- (void)setReport_isFirstEnteringTimeline:(BOOL)arg1;
- (id)Report_timelineSessionID;
- (void)setReport_timelineSessionID:(id)arg1;
- (unsigned long long)Report_recommendationSessionIndex;
- (void)setReport_recommendationSessionIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

