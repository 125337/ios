@interface WCFinderGameLiveListCell : MMTableViewCell
{
    BOOL _isSelectGame; // +0x8
    id <WCFinderGameLiveListCellDelegate> _delegate; // +0x10
    UIView * _functionContentView; // +0x18
    AttributeLabel * _gameName; // +0x20
    UILabel * _miniGameLabel; // +0x28
    MMWebImageView * _gameIconView; // +0x30
    UIView * _separator; // +0x38
    UIView * _checkIconView; // +0x40
    UIImageView * _selectStateImg; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFunctionContentView:(id)arg1;
- (void)setGameName:(id)arg1;
- (void)setMiniGameLabel:(id)arg1;
- (void)setGameIconView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setCheckIconView:(id)arg1;
- (BOOL)isSelectGame;
- (void)setIsSelectGame:(BOOL)arg1;
- (void)setSelectStateImg:(id)arg1;
- (void).cxx_destruct;
@end

