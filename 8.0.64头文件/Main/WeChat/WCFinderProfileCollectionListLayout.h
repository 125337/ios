@interface WCFinderProfileCollectionListLayout : NSObject
{
    BOOL _forceShowMoreButton; // +0x8
    BOOL _forbiddenEpisodeButton; // +0x9
    BOOL _allEpisodeButtonShow; // +0xa
    BOOL _nextEpisodeButtonShow; // +0xb
    BOOL _moreButtonShow; // +0xc
    NSArray * _collectionInfos; // +0x10
    NSMutableArray * _layoutItems; // +0x18
    WCFinderProfileCollectionListStyle * _style; // +0x20
    double _width; // +0x28
    CGPoint _moreButtonOrigin; // +0x30
    UIEdgeInsets _extraInsets; // +0x40
}
- (id)init;
- (id)initWithCollectionInfoList:(id)arg1;
- (void)_setupState;
- (void)updateLayoutWidth:(double)arg1 extraPadding:(UIEdgeInsets)arg2;
- (void)updateLayout;
- (double)displayHeight;
- (void)showNextEpisodeButton;
- (void)showAllEpisodeButton;
- (void)hideAllEpisodeButton;
- (CGPoint)episodeButtonOrigin;
- (CGSize)calculateTextSize:(id)arg1;
- (id)displayCollectionName:(id)arg1;
- (id)getLayoutItemWithCollectionInfo:(id)arg1;
- (id)currentEpisodeButtonDisplayText;
- (UIEdgeInsets)edgeInsetsAdd:(UIEdgeInsets)arg1 otherInsets:(UIEdgeInsets)arg2;
- (BOOL)forceShowMoreButton;
- (void)setForceShowMoreButton:(BOOL)arg1;
- (id)collectionInfos;
- (void)setCollectionInfos:(id)arg1;
- (id)layoutItems;
- (void)setLayoutItems:(id)arg1;
- (BOOL)forbiddenEpisodeButton;
- (void)setForbiddenEpisodeButton:(BOOL)arg1;
- (BOOL)allEpisodeButtonShow;
- (void)setAllEpisodeButtonShow:(BOOL)arg1;
- (BOOL)nextEpisodeButtonShow;
- (void)setNextEpisodeButtonShow:(BOOL)arg1;
- (BOOL)moreButtonShow;
- (void)setMoreButtonShow:(BOOL)arg1;
- (CGPoint)moreButtonOrigin;
- (void)setMoreButtonOrigin:(CGPoint)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (UIEdgeInsets)extraInsets;
- (void)setExtraInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
