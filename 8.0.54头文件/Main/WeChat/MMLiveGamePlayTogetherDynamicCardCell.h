@interface MMLiveGamePlayTogetherDynamicCardCell : MMLiveGamePlayTogetherTableViewCell
{
    MMLiveGamePlayTogetherDynamicCardItem * _item; // +0x8
    NSString * _rootId; // +0x10
    UIView * _containerView; // +0x18
    MagicSclFrameSetView * _frameSetView; // +0x20
}
+ (id)identifier;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setItem:(id)arg1 rootId:(id)arg2;
- (void)updatePlayTogetherData:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)containerView;
- (id)item;
- (void)setItem:(id)arg1;
- (id)rootId;
- (void)setRootId:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (void).cxx_destruct;
@end

