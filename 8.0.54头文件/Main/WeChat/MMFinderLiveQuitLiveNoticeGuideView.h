@interface MMFinderLiveQuitLiveNoticeGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    WCFinderContact * _contact; // +0x10
    id /* block */ _onReserve; // +0x18
    id /* block */ _onQuit; // +0x20
    UIScrollView * _scrollView; // +0x28
    UIView * _titleAreaBGView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    WCFinderHeadImageView * _anchorAvatarView; // +0x40
    MMWebImageView * _anchorVerificationStatusView; // +0x48
    MMUILabel * _nickLabel; // +0x50
    MMUILabel * _contentLabel; // +0x58
    MMUILabel * _timeLabel; // +0x60
}
- (id)initWithNoticeInfo:(id)arg1 anchorContact:(id)arg2 onReserve:(id /* block */)arg3 onQuit:(id /* block */)arg4;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)fillUIWithData;
- (void)layoutSubviews;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (id)titleAreaBGView;
- (id)titleLabel;
- (id)nickLabel;
- (id)contentLabel;
- (id)timeLabel;
- (id)anchorAvatarView;
- (id)anchorVerificationStatusView;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id /* block */)onReserve;
- (void)setOnReserve:(id /* block */)arg1;
- (id /* block */)onQuit;
- (void)setOnQuit:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)setTitleAreaBGView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAnchorAvatarView:(id)arg1;
- (void)setAnchorVerificationStatusView:(id)arg1;
- (void)setNickLabel:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

