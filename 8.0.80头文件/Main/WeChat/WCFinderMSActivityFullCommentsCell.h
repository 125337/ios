@interface WCFinderMSActivityFullCommentsCell : WCFinderMSActivityBaseCell
{
    UIView * _containerView; // +0x8
    UILabel * _fullCommentsLabel; // +0x10
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onContentVMChanged;
- (void)setRoundCorner;
- (void)onClickFullComments;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)fullCommentsLabel;
- (void)setFullCommentsLabel:(id)arg1;
- (void).cxx_destruct;
@end
