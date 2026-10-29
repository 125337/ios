@interface MMFinderLiveTableStyleCommentPubbleOfficialNoticeCell : MMFinderLiveTableStyleCommentPubbleSignTextCell
{
    unsigned int _lastRank; // +0x8
    unsigned int _lastMsgSubtype; // +0xc
    MMUIView * _colorBackView; // +0x10
    CAGradientLayer * _gradientLayer; // +0x18
    CALayer * _colorLayer; // +0x20
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x28
    MMFinderLiveGameBadgeSignView * _gameBadgeSignView; // +0x30
}
- (void)updateBackGroundColor;
- (void)layoutUI;
- (void)layoutMysteriousSignView;
- (void)layoutGameBadgeSignView;
- (id)signText;
- (void)layoutSignLabel;
- (BOOL)isUITypeValid;
- (void)clearBackgroundLayers;
- (BOOL)isFansGroupNotice;
- (unsigned int)getRank;
- (BOOL)shouldShowSpecialColor;
- (void)updateBackgroundLayers;
- (void)createGradientLayer;
- (void)createColorLayer;
- (BOOL)isPubbleCellTapActionNeedShowKtvSongPanel:(id)arg1;
- (id)colorBackView;
- (void)setColorBackView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)colorLayer;
- (void)setColorLayer:(id)arg1;
- (unsigned int)lastRank;
- (void)setLastRank:(unsigned int)arg1;
- (unsigned int)lastMsgSubtype;
- (void)setLastMsgSubtype:(unsigned int)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)gameBadgeSignView;
- (void)setGameBadgeSignView:(id)arg1;
- (void).cxx_destruct;
@end
