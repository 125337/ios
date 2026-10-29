@interface MMLiveStartLotteryNoticeOptionView : UIView <MMLiveStartLotteryOptionViewProviding>
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    unsigned long long _listingPosition; // +0x10
    id <MMLiveStartLotteryOptionViewDelegate> _delegate; // +0x18
    UIView * _containerView; // +0x20
    UILabel * _labelView; // +0x28
    UILabel * _placeholderLabel; // +0x30
    UILabel * _noticeDescriptionLabel; // +0x38
    UILabel * _noticeTimeLabel; // +0x40
    UIImageView * _rightChevronView; // +0x48
    UIView * _separatorBar; // +0x50
}
+ (id)noticeStartTimeDisplayString:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setNoticeInfo:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setListingPosition:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (void)initializeComponents;
- (id)noticeInfo;
- (unsigned long long)listingPosition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (id)noticeDescriptionLabel;
- (void)setNoticeDescriptionLabel:(id)arg1;
- (id)noticeTimeLabel;
- (void)setNoticeTimeLabel:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
