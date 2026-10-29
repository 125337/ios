@interface WCMicroMerchantAdCellHeader : MMUIView
{
    MMUIView * _feedbackContainer; // +0x8
    id <WCMicroMerchantAdCellHeaderDelegate> _delegate; // +0x10
    MMUILabel * _recommendLabel; // +0x18
    MMUILabel * _adLabel; // +0x20
    MMUIImageView * _adActionImageView; // +0x28
    MMUIButton * _feedbackClickButton; // +0x30
    WCDataItem * _dataItem; // +0x38
}
+ (double)getCellHeaderHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (id)recommendLabel;
- (id)feedbackContainer;
- (id)adLabel;
- (id)adActionImageView;
- (void)layoutFeedbackContainer;
- (id)feedbackClickButton;
- (void)onFeedbackContainerClick;
- (void)setFeedbackContainer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRecommendLabel:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (void)setAdActionImageView:(id)arg1;
- (void)setFeedbackClickButton:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
