@interface MMLivePivotSkeletonView : UICollectionReusableView
{
    BOOL _animate; // +0x8
    UIView * _headerLine; // +0x10
    MMLivePivotSkeletonComponentView * _avatar; // +0x18
    MMLivePivotSkeletonComponentView * _nickname; // +0x20
    NSArray * _navigationButtons; // +0x28
    MMLivePivotSkeletonComponentView * _onlineUsers; // +0x30
    NSArray * _bullets; // +0x38
    UIView * _commentLine; // +0x40
    NSArray * _commentItems; // +0x48
    UIView * _operationsLine; // +0x50
    MMLivePivotSkeletonComponentView * _commentBox; // +0x58
    NSArray * _operationButtons; // +0x60
}
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setAnimate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutHeaderLineComponents;
- (void)layoutOperationsLineComponents;
- (void)layoutCommentLineComponents;
- (BOOL)animate;
- (id)headerLine;
- (void)setHeaderLine:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)navigationButtons;
- (void)setNavigationButtons:(id)arg1;
- (id)onlineUsers;
- (void)setOnlineUsers:(id)arg1;
- (id)bullets;
- (void)setBullets:(id)arg1;
- (id)commentLine;
- (void)setCommentLine:(id)arg1;
- (id)commentItems;
- (void)setCommentItems:(id)arg1;
- (id)operationsLine;
- (void)setOperationsLine:(id)arg1;
- (id)commentBox;
- (void)setCommentBox:(id)arg1;
- (id)operationButtons;
- (void)setOperationButtons:(id)arg1;
- (void).cxx_destruct;
@end

