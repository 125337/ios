@interface MMLiveCreationGiftTipsView : MMPageSheetBaseView
{
    BOOL _confirmed; // +0x8
    BOOL _isAnchorNotice; // +0x9
    id /* block */ _clickAction; // +0x10
    UIView * _contentView; // +0x18
    UIScrollView * _textScrollView; // +0x20
    MMUILabel * _descLabel; // +0x28
    MMUIButton * _okButton; // +0x30
    id /* block */ _dismissCompletion; // +0x38
}
+ (BOOL)showAnchorNoticesInGuideInfo:(id)arg1 limitation:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (BOOL)hasValidAnchorNoticesInGuideInfo:(id)arg1;
+ (void)showAnchorNoticeItems:(id)arg1 index:(unsigned long long)arg2 allowsDismiss:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)shownAnchorNoticeMsgIds;
+ (void)markAnchorNoticeMsgIdShown:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithMessage:(id)arg1 anchorNotice:(BOOL)arg2 allowsDismiss:(BOOL)arg3;
- (void)setupUIWithMessage:(id)arg1 allowsDismiss:(BOOL)arg2;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)pageSheetDidDismiss;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)textScrollView;
- (void)setTextScrollView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (id /* block */)dismissCompletion;
- (void)setDismissCompletion:(id /* block */)arg1;
- (BOOL)confirmed;
- (void)setConfirmed:(BOOL)arg1;
- (BOOL)isAnchorNotice;
- (void)setIsAnchorNotice:(BOOL)arg1;
- (void).cxx_destruct;
@end
