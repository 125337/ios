@interface WCListTipCellView : MMTableViewCell <MMTerminatorViewDelegate>
{
    MMTerminatorView * _terminatorView; // +0x8
}
+ (double)heightOfCellWithTip:(id)arg1 subTip:(id)arg2 width:(double)arg3;
+ (id)terminatorViewParamsWithTip:(id)arg1 subTip:(id)arg2;
- (void)configureWithTip:(id)arg1 subTip:(id)arg2;
- (void)terminatorViewDidClickSubtitle:(id)arg1;
- (id)terminatorView;
- (void)setTerminatorView:(id)arg1;
- (void).cxx_destruct;
@end
