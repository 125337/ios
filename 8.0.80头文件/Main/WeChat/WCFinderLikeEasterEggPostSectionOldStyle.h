@interface WCFinderLikeEasterEggPostSectionOldStyle : UIView <WCFinderLikeEasterEggPostSectionProtocol>
{
    id <WCFinderLikeEasterEggPostSectionDelegate> _delegate; // +0x8
    CEmoticonWrap * _selectedEmoticon; // +0x10
    UIImageView * _icon; // +0x18
    UILabel * _label; // +0x20
    UIImageView * _arrowView; // +0x28
    UIView * _redDot; // +0x30
    MMEmoticonView * _emoticonView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_onTapView;
- (void)likeEasterEggPostSectionUpdateWithSelectedEmoticon:(id)arg1;
- (id)icon;
- (id)label;
- (id)arrowView;
- (id)redDot;
- (id)emoticonView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedEmoticon;
- (void)setSelectedEmoticon:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setRedDot:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end
