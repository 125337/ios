@interface MMFinderLiveNoticeDetailsPreviewModel : NSObject
{
    int _noticeAggregateType; // +0x8
    unsigned int _startTime; // +0xc
    unsigned int _noticeStarttimeType; // +0x10
    id <MMFinderLiveNoticeDetailsPreviewDelegate> _previewDelegate; // +0x18
    FinderLivePaymentSetting * _paymentSetting; // +0x20
    NSString * _introduction; // +0x28
    NSString * _introductionExtend; // +0x30
    NSString * _discountWording; // +0x38
}
- (id)previewDelegate;
- (void)setPreviewDelegate:(id)arg1;
- (id)paymentSetting;
- (void)setPaymentSetting:(id)arg1;
- (int)noticeAggregateType;
- (void)setNoticeAggregateType:(int)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)noticeStarttimeType;
- (void)setNoticeStarttimeType:(unsigned int)arg1;
- (id)introduction;
- (void)setIntroduction:(id)arg1;
- (id)introductionExtend;
- (void)setIntroductionExtend:(id)arg1;
- (id)discountWording;
- (void)setDiscountWording:(id)arg1;
- (void).cxx_destruct;
@end
