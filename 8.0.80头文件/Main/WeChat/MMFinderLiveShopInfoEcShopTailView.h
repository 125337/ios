@interface MMFinderLiveShopInfoEcShopTailView : MMUIView <UIGestureRecognizerDelegate>
{
    BOOL _vipJoined; // +0x8
    BOOL _isFavorited; // +0x9
    BOOL _favoriteOperating; // +0xa
    id /* block */ _vipClickHandler; // +0x10
    id /* block */ _favoriteClickHandler; // +0x18
    id /* block */ _wordClickHandler; // +0x20
    UIView * _separator; // +0x28
    long long _state; // +0x30
    MMUIView * _vipContainer; // +0x38
    MMWebImageView * _vipIconView; // +0x40
    MMUILabel * _vipDescLabel; // +0x48
    MMUIButton * _vipTailButton; // +0x50
    MMUIView * _vipJoinedView; // +0x58
    MMUILabel * _vipJoinedLabel; // +0x60
    UIImageView * _vipJoinedArrowView; // +0x68
    EcsJumpInfo * _vipJumpInfo; // +0x70
    MMUIView * _favoriteContainer; // +0x78
    MMUILabel * _favoriteDescLabel; // +0x80
    MMUIButton * _favoriteButton; // +0x88
    MMUIView * _wordContainer; // +0x90
    MMUILabel * _wordDescLabel; // +0x98
    UIImageView * _wordArrowView; // +0xa0
    EcsJumpInfo * _wordJumpInfo; // +0xa8
}
+ (double)preferredHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)setupVipContainer;
- (void)setupFavoriteContainer;
- (void)setupWordContainer;
- (void)applyPillStyleToButton:(id)arg1 hasIcon:(BOOL)arg2;
- (void)setVipInfo:(id)arg1 favoriteInfo:(id)arg2 wordJumpInfo:(id)arg3;
- (void)updateFavoriteState:(BOOL)arg1;
- (void)setFavoriteOperating:(BOOL)arg1;
- (BOOL)isEmpty;
- (void)applyState:(long long)arg1;
- (void)bindVipInfo:(id)arg1;
- (void)bindFavoriteInfo:(id)arg1;
- (void)applyFavoriteStyle;
- (void)bindWordJumpInfo:(id)arg1;
- (void)onClickVipRow;
- (void)onClickFavorite;
- (void)onClickWordRow;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)layoutVipContainer;
- (double)layoutVipTailButton;
- (double)layoutVipJoinedView;
- (void)layoutFavoriteContainer;
- (void)layoutWordContainer;
- (id /* block */)vipClickHandler;
- (void)setVipClickHandler:(id /* block */)arg1;
- (id /* block */)favoriteClickHandler;
- (void)setFavoriteClickHandler:(id /* block */)arg1;
- (id /* block */)wordClickHandler;
- (void)setWordClickHandler:(id /* block */)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)vipContainer;
- (void)setVipContainer:(id)arg1;
- (id)vipIconView;
- (void)setVipIconView:(id)arg1;
- (id)vipDescLabel;
- (void)setVipDescLabel:(id)arg1;
- (id)vipTailButton;
- (void)setVipTailButton:(id)arg1;
- (id)vipJoinedView;
- (void)setVipJoinedView:(id)arg1;
- (id)vipJoinedLabel;
- (void)setVipJoinedLabel:(id)arg1;
- (id)vipJoinedArrowView;
- (void)setVipJoinedArrowView:(id)arg1;
- (BOOL)vipJoined;
- (void)setVipJoined:(BOOL)arg1;
- (id)vipJumpInfo;
- (void)setVipJumpInfo:(id)arg1;
- (id)favoriteContainer;
- (void)setFavoriteContainer:(id)arg1;
- (id)favoriteDescLabel;
- (void)setFavoriteDescLabel:(id)arg1;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg1;
- (BOOL)isFavorited;
- (void)setIsFavorited:(BOOL)arg1;
- (BOOL)favoriteOperating;
- (id)wordContainer;
- (void)setWordContainer:(id)arg1;
- (id)wordDescLabel;
- (void)setWordDescLabel:(id)arg1;
- (id)wordArrowView;
- (void)setWordArrowView:(id)arg1;
- (id)wordJumpInfo;
- (void)setWordJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
