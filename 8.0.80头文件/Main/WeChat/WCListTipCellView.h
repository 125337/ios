@interface WCListTipCellView : MMTableViewCell <MMTerminatorViewDelegate>
{
    id <WCListTipCellViewDelegate> _delegate; // +0x8
    MMTerminatorView * _terminatorView; // +0x10
}
+ (double)heightOfCellWithTip:(id)arg1 subTip:(id)arg2 width:(double)arg3;
+ (id)terminatorViewParamsWithTip:(id)arg1 subTip:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithTip:(id)arg1 subTip:(id)arg2;
- (void)terminatorViewDidClickSubtitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)terminatorView;
- (void)setTerminatorView:(id)arg1;
- (void).cxx_destruct;
@end
