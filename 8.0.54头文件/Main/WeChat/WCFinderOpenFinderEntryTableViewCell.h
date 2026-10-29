@interface WCFinderOpenFinderEntryTableViewCell : UITableViewCell
{
    id <WCFinderOpenFinderEntryTableViewCellDelegate> _delegate; // +0x8
    unsigned long long _cardIndex; // +0x10
    UIImageView * _finderIconImageView; // +0x18
    RichTextView * _tipsTextView; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
+ (double)openFinderEntryCellHeightWithTips:(id)arg1 screenWid:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)finderIconImageView;
- (id)tipsTextView;
- (id)arrowImageView;
- (void)updateOpenFinderEntryCellWithTips:(id)arg1;
- (void)switchToDarkMode:(BOOL)arg1;
- (void)onClickContentAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)cardIndex;
- (void)setCardIndex:(unsigned long long)arg1;
- (void)setFinderIconImageView:(id)arg1;
- (void)setTipsTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

