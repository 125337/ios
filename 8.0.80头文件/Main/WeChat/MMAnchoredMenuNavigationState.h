@interface MMAnchoredMenuNavigationState : NSObject
{
    MMAnchoredMenu * _parentMenu; // +0x8
    MMAnchoredMenuItem * _sourceItem; // +0x10
    NSString * _parentMenuTitle; // +0x18
    UIView * _parentMenuSnapshotView; // +0x20
    CGRect _parentMenuFrame; // +0x28
}
- (id)parentMenu;
- (void)setParentMenu:(id)arg1;
- (id)sourceItem;
- (void)setSourceItem:(id)arg1;
- (id)parentMenuTitle;
- (void)setParentMenuTitle:(id)arg1;
- (id)parentMenuSnapshotView;
- (void)setParentMenuSnapshotView:(id)arg1;
- (CGRect)parentMenuFrame;
- (void)setParentMenuFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
