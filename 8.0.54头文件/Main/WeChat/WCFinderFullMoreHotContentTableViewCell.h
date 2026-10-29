@interface WCFinderFullMoreHotContentTableViewCell : UITableViewCell
{
    id <WCFinderMoreHotContentTableViewCellDelegate> _delegate; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)setupUI;
- (void)transferToRecommond;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

