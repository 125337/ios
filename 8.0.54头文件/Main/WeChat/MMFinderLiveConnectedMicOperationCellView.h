@interface MMFinderLiveConnectedMicOperationCellView : UITableViewCell
{
    id /* block */ _quitActionBlock; // +0x8
    id /* block */ _pkActionBlock; // +0x10
    UIButton * _quitBtn; // +0x18
    UIButton * _pkBtn; // +0x20
    UIView * _splitLine; // +0x28
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (BOOL)showQuitButton;
- (void)setShowQuitButton:(BOOL)arg1;
- (void)onQuitMic:(id)arg1;
- (void)onPk:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)quitActionBlock;
- (void)setQuitActionBlock:(id /* block */)arg1;
- (id /* block */)pkActionBlock;
- (void)setPkActionBlock:(id /* block */)arg1;
- (id)quitBtn;
- (void)setQuitBtn:(id)arg1;
- (id)pkBtn;
- (void)setPkBtn:(id)arg1;
- (id)splitLine;
- (void)setSplitLine:(id)arg1;
- (void).cxx_destruct;
@end

