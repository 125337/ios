@interface WCAdWeGameGiftTagView : MMUIView
{
    WCAdWeGameGiftTagInfo * _tagInfo; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _contentItemScene; // +0x18
    MMUIButton * _containerView; // +0x20
    WCAdURLImageView * _iconView; // +0x28
    MMUILabel * _mainTitleView; // +0x30
    WCAdURLImageView * _tailIconView; // +0x38
    MMUILabel * _tailTitleView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)initView;
- (double)mainTitleMaxWidth;
- (void)adjustView;
- (id)containerView;
- (id)iconView;
- (id)tailIconView;
- (id)mainTitleView;
- (id)tailTitleView;
- (id)createLabel:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (BOOL)hasIcon;
- (BOOL)hasTailIcon;
- (void)onClickButton:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMainTitleView:(id)arg1;
- (void)setTailIconView:(id)arg1;
- (void)setTailTitleView:(id)arg1;
- (void).cxx_destruct;
@end
