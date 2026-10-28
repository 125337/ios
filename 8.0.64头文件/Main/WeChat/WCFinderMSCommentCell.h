@interface WCFinderMSCommentCell : WCFinderMSActivityBaseCell <RichTextLayoutDelegate, ILinkEventExt, WCFinderFeedContentVMExt, WCFinderDataItemExt>
{
    UIView * _containerView; // +0x8
    RichTextView * _contentLabel; // +0x10
    UILabel * _closureLabel; // +0x18
    WCFinderComment * _currentComment; // +0x20
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
+ (double)additionalPaddingForVM:(id)arg1 commentIndex:(unsigned long long)arg2;
+ (id)getCommentContentForVM:(id)arg1 commentIndex:(unsigned long long)arg2 showSceneIntroduce:(BOOL)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onContentVMChanged;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickClosure;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)setRoundCorner;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)closureLabel;
- (void)setClosureLabel:(id)arg1;
- (id)currentComment;
- (void)setCurrentComment:(id)arg1;
- (void).cxx_destruct;
@end
