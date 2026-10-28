@interface MMFinderLiveConcertTicketStyleItem : NSObject
{
    BOOL _usePageBackgroundBlurEffect; // +0x8
    BOOL _isPaid; // +0x9
    unsigned int _pricing; // +0xc
    NSString * _resourceId; // +0x10
    NSString * _transientStyleId; // +0x18
    NSString * _pageBackgroundImageUri; // +0x20
    NSString * _title; // +0x28
    NSDate * _startTime; // +0x30
    NSString * _anchorNicknameLine; // +0x38
    unsigned long long _ticketId; // +0x40
    NSString * _ticketBackgroundImageUri; // +0x48
    NSString * _miniatureTicketBackgroundImageUri; // +0x50
    NSString * _brandLogoImageUri; // +0x58
    NSString * _qrCodeImageUri; // +0x60
    UIColor * _textColor; // +0x68
    UIColor * _ticketIdColor; // +0x70
    UIColor * _primaryButtonTopLeftColor; // +0x78
    UIColor * _primaryButtonBottomRightColor; // +0x80
    UIColor * _primaryButtonForegroundColor; // +0x88
    UIColor * _bottomButtonsForegroundColor; // +0x90
    UIColor * _bottomSeparatorsForegroundColor; // +0x98
    NSString * _nextQuoteButtonText; // +0xa0
    UIColor * _nextQuoteButtonBackgroundColor; // +0xa8
    UIColor * _nextQuoteButtonForegroundColor; // +0xb0
    NSArray * _quotes; // +0xb8
    NSString * _ticketHolderAvatarImageUri; // +0xc0
    NSString * _ticketHolderNickname; // +0xc8
    MMFinderLiveConcertTicketExternalNavigationInfo * _externalNavigationInfo; // +0xd0
    NSArray * _pageItems; // +0xd8
    MMFinderLiveConcertTicketWebPageShareInfo * _webPageShareInfo; // +0xe0
}
+ (id)styleItemWithTicketInfo:(id)arg1 resourceInfo:(id)arg2;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (id)transientStyleId;
- (void)setTransientStyleId:(id)arg1;
- (id)pageBackgroundImageUri;
- (void)setPageBackgroundImageUri:(id)arg1;
- (BOOL)usePageBackgroundBlurEffect;
- (void)setUsePageBackgroundBlurEffect:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)anchorNicknameLine;
- (void)setAnchorNicknameLine:(id)arg1;
- (unsigned long long)ticketId;
- (void)setTicketId:(unsigned long long)arg1;
- (id)ticketBackgroundImageUri;
- (void)setTicketBackgroundImageUri:(id)arg1;
- (id)miniatureTicketBackgroundImageUri;
- (void)setMiniatureTicketBackgroundImageUri:(id)arg1;
- (id)brandLogoImageUri;
- (void)setBrandLogoImageUri:(id)arg1;
- (id)qrCodeImageUri;
- (void)setQrCodeImageUri:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)ticketIdColor;
- (void)setTicketIdColor:(id)arg1;
- (id)primaryButtonTopLeftColor;
- (void)setPrimaryButtonTopLeftColor:(id)arg1;
- (id)primaryButtonBottomRightColor;
- (void)setPrimaryButtonBottomRightColor:(id)arg1;
- (id)primaryButtonForegroundColor;
- (void)setPrimaryButtonForegroundColor:(id)arg1;
- (id)bottomButtonsForegroundColor;
- (void)setBottomButtonsForegroundColor:(id)arg1;
- (id)bottomSeparatorsForegroundColor;
- (void)setBottomSeparatorsForegroundColor:(id)arg1;
- (id)nextQuoteButtonText;
- (void)setNextQuoteButtonText:(id)arg1;
- (id)nextQuoteButtonBackgroundColor;
- (void)setNextQuoteButtonBackgroundColor:(id)arg1;
- (id)nextQuoteButtonForegroundColor;
- (void)setNextQuoteButtonForegroundColor:(id)arg1;
- (id)quotes;
- (void)setQuotes:(id)arg1;
- (id)ticketHolderAvatarImageUri;
- (void)setTicketHolderAvatarImageUri:(id)arg1;
- (id)ticketHolderNickname;
- (void)setTicketHolderNickname:(id)arg1;
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (unsigned int)pricing;
- (void)setPricing:(unsigned int)arg1;
- (id)externalNavigationInfo;
- (void)setExternalNavigationInfo:(id)arg1;
- (id)pageItems;
- (void)setPageItems:(id)arg1;
- (id)webPageShareInfo;
- (void)setWebPageShareInfo:(id)arg1;
- (void).cxx_destruct;
@end
