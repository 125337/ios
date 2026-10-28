@interface MMFinderLiveGenericPaymentConfig : NSObject
{
    BOOL _showTopRightQuestionView; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSString * _agreementRichText; // +0x20
    NSString * _defaultPayButtonTitle; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)agreementRichText;
- (void)setAgreementRichText:(id)arg1;
- (id)defaultPayButtonTitle;
- (void)setDefaultPayButtonTitle:(id)arg1;
- (BOOL)showTopRightQuestionView;
- (void)setShowTopRightQuestionView:(BOOL)arg1;
- (void).cxx_destruct;
@end
