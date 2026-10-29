@interface WCTimelineFooterCell : MMTableViewCell
{
    WCTimelineFooterViewModel * _viewModel; // +0x8
    id <WCTimelineFooterCellDelegate> _delegate; // +0x10
    WCMomentsPostShareButton * _postShareButton; // +0x18
    UIView * _seperatorLine; // +0x20
}
+ (id)defaultIdentifier;
+ (double)separatorHeight;
+ (double)defaultHeight;
+ (double)heightForViewModel:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewModel:(id)arg1;
- (id)postShareButton;
- (void)layoutSubviews;
- (void)postShareButtonClicked:(id)arg1;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPostShareButton:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (void).cxx_destruct;
@end

