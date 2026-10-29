@interface MMFinderLiveConnectedMicOperationTableCellView : UITableViewCell
{
    MMFinderLiveConnectedMicOperationBaseCellView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)showQuitButton;
- (void)setShowQuitButton:(BOOL)arg1;
- (id /* block */)quitActionBlock;
- (void)setQuitActionBlock:(id /* block */)arg1;
- (id /* block */)pkActionBlock;
- (void)setPkActionBlock:(id /* block */)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
