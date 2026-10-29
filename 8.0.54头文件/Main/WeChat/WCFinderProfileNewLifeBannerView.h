@interface WCFinderProfileNewLifeBannerView : UIControl
{
    NSString * _wording; // +0x8
    MMUILabel * _wordingLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initLayouts;
- (void)initReports;
- (void)updateReportParams:(id)arg1;
- (void)layoutSubviews;
- (void)setWording:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)wording;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

