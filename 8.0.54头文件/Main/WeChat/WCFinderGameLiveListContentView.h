@interface WCFinderGameLiveListContentView : UIView
{
    BOOL _isSelectGame; // +0x8
    UIView * _functionContentView; // +0x10
    AttributeLabel * _gameName; // +0x18
    UILabel * _miniGameLabel; // +0x20
    MMWebImageView * _gameIconView; // +0x28
    UIView * _separator; // +0x30
    UIView * _checkIconView; // +0x38
    UIImageView * _selectStateImg; // +0x40
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)updateWithGameInfo:(id)arg1 isSelect:(BOOL)arg2;
- (void)drawSeparator;
- (void)removeSeparator;
- (void)toggle;
- (void)unToggle;
- (void)updateWithGameInfo:(id)arg1 searchText:(id)arg2;
- (id)selectStateImg;
- (id)gameName;
- (id)miniGameLabel;
- (id)gameIconView;
- (id)checkIconView;
- (id)separator;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)cleanLayer;
- (id)functionContentView;
- (void)setFunctionContentView:(id)arg1;
- (void)setGameName:(id)arg1;
- (void)setMiniGameLabel:(id)arg1;
- (void)setGameIconView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setCheckIconView:(id)arg1;
- (BOOL)isSelectGame;
- (void)setIsSelectGame:(BOOL)arg1;
- (void)setSelectStateImg:(id)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

