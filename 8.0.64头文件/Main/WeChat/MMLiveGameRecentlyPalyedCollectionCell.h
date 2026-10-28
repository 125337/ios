@interface MMLiveGameRecentlyPalyedCollectionCell : UICollectionViewCell
{
    BOOL _isMiniGame; // +0x8
    MMWebImageView * _gameIconView; // +0x10
    UILabel * _gameLabel; // +0x18
    UILabel * _miniGameLabel; // +0x20
    MMFinderLiveGameSearchUserInfo * _dataItem; // +0x28
    NSString * _gameLabelText; // +0x30
    NSString * _gameIconUrl; // +0x38
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDataItem:(id)arg1;
- (id)gameIconView;
- (void)setGameIconView:(id)arg1;
- (id)gameLabel;
- (void)setGameLabel:(id)arg1;
- (id)miniGameLabel;
- (void)setMiniGameLabel:(id)arg1;
- (id)dataItem;
- (id)gameLabelText;
- (void)setGameLabelText:(id)arg1;
- (id)gameIconUrl;
- (void)setGameIconUrl:(id)arg1;
- (BOOL)isMiniGame;
- (void)setIsMiniGame:(BOOL)arg1;
- (void).cxx_destruct;
@end
