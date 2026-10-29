@interface MMFinderLiveSongManageTableViewCell : MMFinderLiveMultiSelectTableViewCell
{
    BOOL _disable; // +0x8
    BOOL _shouldAdaptToDarkLight; // +0x9
    unsigned int _rankIndex; // +0xc
    MMFinderLiveSongItem * _songItem; // +0x10
    id <MMFinderLiveSongManageTableViewCellDelegate> _songTableCellDelegate; // +0x18
    UILabel * _warningLabel; // +0x20
    double _lastContentViewWidth; // +0x28
    MMUILabel * _musicNameLabel; // +0x30
}
+ (double)preferHeight;
+ (id)identifier;
+ (double)getSeparatorLeftInset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutMusicNameLabel;
- (void)updateMusicNameLabelOrigin;
- (void)updateWarningLabelOrigin;
- (void)setSongItem:(id)arg1;
- (void)refreshUI;
- (void)reset;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDisable:(BOOL)arg1;
- (id)warningLabel;
- (double)adjustedLeftOffsetForEditing;
- (void)onTapGesture:(id)arg1;
- (void)updateMusicLabel;
- (void)updateWarningLabel;
- (double)warningPadding;
- (id)songItem;
- (unsigned int)rankIndex;
- (void)setRankIndex:(unsigned int)arg1;
- (id)songTableCellDelegate;
- (void)setSongTableCellDelegate:(id)arg1;
- (BOOL)disable;
- (BOOL)shouldAdaptToDarkLight;
- (void)setShouldAdaptToDarkLight:(BOOL)arg1;
- (void)setWarningLabel:(id)arg1;
- (double)lastContentViewWidth;
- (void)setLastContentViewWidth:(double)arg1;
- (id)musicNameLabel;
- (void)setMusicNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

