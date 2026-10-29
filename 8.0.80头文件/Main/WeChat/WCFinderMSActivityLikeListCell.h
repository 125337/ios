@interface WCFinderMSActivityLikeListCell : WCFinderMSActivityBaseCell <ILinkEventExt, WCFinderFeedContentVMExt, WCFinderDataItemExt>
{
    UIView * _containerView; // +0x8
    UIImageView * _iconView; // +0x10
    RichTextView * _likeView; // +0x18
    UIView * _bottomSeparatorLine; // +0x20
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (id)getLikeListNickNameForVM:(id)arg1 showSceneIntroduce:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onContentVMChanged;
- (void)setRoundCorner;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)likeView;
- (void)setLikeView:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
