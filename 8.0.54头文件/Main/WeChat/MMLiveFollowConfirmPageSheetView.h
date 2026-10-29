@interface MMLiveFollowConfirmPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isPop; // +0x8
    BOOL _isPopup; // +0x9
    BOOL _isTop; // +0xa
    long long _type; // +0x10
    id /* block */ _block; // +0x18
    UIScrollView * _dialogView; // +0x20
    MMUILabel * _title; // +0x28
    WCFinderHeadImageView * _anchorHeadImageView; // +0x30
    MMUILabel * _anchorNameLabel; // +0x38
    MMWebImageView * _authIconView; // +0x40
    MMUILabel * _followNumLabel; // +0x48
    MMUILabel * _isFollowed; // +0x50
    UIImageView * _followedIcon; // +0x58
    long long _friendFollowCount; // +0x60
    MMFinderLiveContext * _liveContext; // +0x68
    WCFinderContact * _contact; // +0x70
    long long _previousOrientation; // +0x78
}
- (id)initWithContact:(id)arg1 liveContext:(id)arg2 isPopup:(BOOL)arg3 isTop:(BOOL)arg4 type:(long long)arg5;
- (void)setupUI;
- (void)pageSheetDidRotation;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)layoutBoundBizLiveFollowConfirm:(id)arg1 liveContext:(id)arg2 isPopup:(BOOL)arg3;
- (void)setType:(long long)arg1;
- (void)layoutFinderLiveFollowConfirm:(id)arg1 isPopup:(BOOL)arg2 isTop:(BOOL)arg3;
- (void)updateAuthInfo:(id)arg1;
- (void)delayClose;
- (void)setupPageSheetConfig;
- (void)show;
- (double)contentHeight;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (double)getRealHeight;
- (double)getCurrentHeight;
- (id)audienceLogReporter;
- (id)liveTask;
- (long long)type;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (id)dialogView;
- (void)setDialogView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)followNumLabel;
- (void)setFollowNumLabel:(id)arg1;
- (id)isFollowed;
- (void)setIsFollowed:(id)arg1;
- (id)followedIcon;
- (void)setFollowedIcon:(id)arg1;
- (BOOL)isPop;
- (void)setIsPop:(BOOL)arg1;
- (long long)friendFollowCount;
- (void)setFriendFollowCount:(long long)arg1;
- (id)liveContext;
- (void)setLiveContext:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isPopup;
- (void)setIsPopup:(BOOL)arg1;
- (BOOL)isTop;
- (void)setIsTop:(BOOL)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

