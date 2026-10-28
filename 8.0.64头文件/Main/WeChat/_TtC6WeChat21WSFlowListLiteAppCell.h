@interface _TtC6WeChat21WSFlowListLiteAppCell : MMTableViewCell
{
     contentViewMarginLeftRight; // +0x8
     contentViewMarginTop; // +0x10
     contentViewMarginBottom; // +0x18
     model; // +0x20
     contentContainerView; // +0x28
     liteAppView; // +0x30
     isRenderFinish; // +0x38
     indexInList; // +0x40
     isActive; // +0x48
     contentContainerIndicatorView; // +0x50
     liteAppSnapshotView; // +0x58
     footerView; // +0x60
}
- (id)model;
- (void)setModel:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (BOOL)isRenderFinish;
- (void)setIsRenderFinish:(BOOL)arg1;
- (long long)indexInList;
- (void)setIndexInList:(long long)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)addLiteAppViewWithLiteAppView:(id)arg1;
- (void)removeLiteAppView;
- (void)setSnapshotWithImageView:(id)arg1;
- (void)removeSnapshot;
- (void)clearCell;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
