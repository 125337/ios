@interface BTBaseItemCellView : MMTableViewCell
{
    BTBaseItemCellViewModel * _viewModel; // +0x8
    id <BTBaseItemCellViewDelegate> _delegate; // +0x10
}
- (id)initWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setViewModel:(id)arg1;
- (id)getCoverImageView;
- (void)forceSetHighlighted:(BOOL)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)updateCellOnPageAppear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end

