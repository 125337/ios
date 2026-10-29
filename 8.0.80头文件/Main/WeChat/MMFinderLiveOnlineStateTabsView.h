@interface MMFinderLiveOnlineStateTabsView : UIView
{
    id <MMFinderLiveOnlineStateTabsDelegate> _delegate; // +0x8
    MMUILabel * _onlineMemberListTabLabel; // +0x10
    UIView * _onlineMemberListTabHeightLightBorder; // +0x18
    MMUILabel * _ktvPlayerMemberListTabLabel; // +0x20
    UIView * _ktvPlayerMemberListHeightLightBorder; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithTab:(unsigned long long)arg1;
- (void)onTapLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)onlineMemberListTabLabel;
- (void)setOnlineMemberListTabLabel:(id)arg1;
- (id)onlineMemberListTabHeightLightBorder;
- (void)setOnlineMemberListTabHeightLightBorder:(id)arg1;
- (id)ktvPlayerMemberListTabLabel;
- (void)setKtvPlayerMemberListTabLabel:(id)arg1;
- (id)ktvPlayerMemberListHeightLightBorder;
- (void)setKtvPlayerMemberListHeightLightBorder:(id)arg1;
- (void).cxx_destruct;
@end
