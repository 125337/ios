@interface MMLocationPoiDetailView : UIView
{
    SnsPoiDetail * _poiDetail; // +0x8
    BOOL _showTakeCarBtn; // +0x10
    BOOL _shouldShowFullScreenEntrance; // +0x11
    id <MMLocationPoiDetailViewDelegate> _delegate; // +0x18
    RichTextView * _priceTipsLabel; // +0x20
    RichTextView * _businessHourLabel; // +0x28
    RichTextView * _phoneLabel; // +0x30
    MMUILabel * _noticeWordingLabel; // +0x38
    UIView * _separateLine; // +0x40
    UIView * _addressContainer; // +0x48
    UILabel * _addressLabel; // +0x50
    UIImageView * _rightArrowView; // +0x58
    UIView * _bottomBlankView; // +0x60
}
+ (double)contentHeight:(id)arg1 maxWidth:(double)arg2 showTakeCarBtn:(BOOL)arg3 isFinderHalfScreen:(BOOL)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)adjustLabelsPosition;
- (void)onTapAddressEntrance;
- (id)separateLine;
- (id)addressContainer;
- (id)addressLabel;
- (id)rightArrowView;
- (id)bottomBlankView;
- (void)setShouldShowFullScreenEntrance:(BOOL)arg1;
- (void)updateWith:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showTakeCarBtn;
- (void)setShowTakeCarBtn:(BOOL)arg1;
- (BOOL)shouldShowFullScreenEntrance;
- (id)priceTipsLabel;
- (void)setPriceTipsLabel:(id)arg1;
- (id)businessHourLabel;
- (void)setBusinessHourLabel:(id)arg1;
- (id)phoneLabel;
- (void)setPhoneLabel:(id)arg1;
- (id)noticeWordingLabel;
- (void)setNoticeWordingLabel:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setAddressContainer:(id)arg1;
- (void)setAddressLabel:(id)arg1;
- (void)setRightArrowView:(id)arg1;
- (void)setBottomBlankView:(id)arg1;
- (void).cxx_destruct;
@end

