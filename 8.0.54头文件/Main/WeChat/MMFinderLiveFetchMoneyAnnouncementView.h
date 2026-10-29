@interface MMFinderLiveFetchMoneyAnnouncementView : MMUIView
{
    Announcement * _announcement; // +0x8
    id <MMFinderLiveFetchMoneyAnnouncementViewDelegate> _delegate; // +0x10
    MMUIImageView * _iconView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIImageView * _arrowImageView; // +0x28
}
- (id)initWithAnnouncement:(id)arg1 delegate:(id)arg2 width:(double)arg3 height:(double)arg4;
- (void)initSubviews;
- (void)layoutUI;
- (void)layoutCanClick;
- (void)layoutCannotClick;
- (void)initConfig;
- (void)clickNotifyView;
- (id)announcement;
- (void)setAnnouncement:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

