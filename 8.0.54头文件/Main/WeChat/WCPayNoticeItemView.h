@interface WCPayNoticeItemView : UIView
{
    NoticeItem * _noticeItem; // +0x8
    UIView * _backgroundView; // +0x10
    UILabel * _titleLabel; // +0x18
    WCPayWebImageView * _leftIconImageView; // +0x20
    UIImageView * _rightArrowImageView; // +0x28
    UIButton * _jumpButton; // +0x30
}
- (void)updateViewWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundView;
- (id)titleLabel;
- (id)leftIconImageView;
- (id)rightArrowImageView;
- (id)jumpButton;
- (void)jumpToNoticeUrl;
- (void)updateView;
- (id)noticeItem;
- (void)setNoticeItem:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setLeftIconImageView:(id)arg1;
- (void)setRightArrowImageView:(id)arg1;
- (void)setJumpButton:(id)arg1;
- (void).cxx_destruct;
@end

