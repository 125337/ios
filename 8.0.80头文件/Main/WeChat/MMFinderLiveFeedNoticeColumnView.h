@interface MMFinderLiveFeedNoticeColumnView : MMUIView
{
    id /* block */ _contentButtonBlock; // +0x8
    WCFinderContact * _anchorContact; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    MMUIButton * _contentButton; // +0x20
    WCFinderHeadImageView * _avatarIconView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIView * _topSeparaLine; // +0x40
    UIView * _bottomSeparaLine; // +0x48
}
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)avatarIconView;
- (id)titleLabel;
- (id)topSeparaLine;
- (id)bottomSeparaLine;
- (id)arrowImageView;
- (id)contentButton;
- (void)contentButtonClick;
- (id /* block */)contentButtonBlock;
- (void)setContentButtonBlock:(id /* block */)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void)setContentButton:(id)arg1;
- (void)setAvatarIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTopSeparaLine:(id)arg1;
- (void)setBottomSeparaLine:(id)arg1;
- (void).cxx_destruct;
@end
