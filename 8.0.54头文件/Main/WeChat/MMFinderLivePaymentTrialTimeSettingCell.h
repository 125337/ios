@interface MMFinderLivePaymentTrialTimeSettingCell : MMUIView
{
    unsigned int _curTrialTimeHour; // +0x8
    unsigned int _curTrialTimeMinute; // +0xc
    long long _purchaseLivePreviewType; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _durationLabel; // +0x20
    UIImageView * _arrowIconView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 purchaseLivePreviewType:(long long)arg2 curTrialTimeHour:(unsigned int)arg3 curTrialTimeMinute:(unsigned int)arg4;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateTrialTimeHour:(unsigned int)arg1 trialTimeMinute:(unsigned int)arg2;
- (id)getFormatTrialTimeString;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)curTrialTimeHour;
- (void)setCurTrialTimeHour:(unsigned int)arg1;
- (unsigned int)curTrialTimeMinute;
- (void)setCurTrialTimeMinute:(unsigned int)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (void).cxx_destruct;
@end

