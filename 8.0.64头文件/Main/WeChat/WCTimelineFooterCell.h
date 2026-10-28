@interface WCTimelineFooterCell : MMTableViewCell
{
    WCTimelineFooterViewModel * _viewModel; // +0x8
    id <WCTimelineFooterCellDelegate> _delegate; // +0x10
    WCMicroMerchantMoreView * _microMerchantMoreView; // +0x18
    WCMomentsPostShareButton * _postShareButton; // +0x20
    UIView * _topSeperatorLine; // +0x28
    UIView * _bottomSeperatorLine; // +0x30
}
+ (id)defaultIdentifier;
+ (double)separatorHeight;
+ (double)defaultHeight;
+ (double)heightForViewModel:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewModel:(id)arg1;
- (id)microMerchantMoreView;
- (id)postShareButton;
- (void)layoutSubviews;
- (void)microMerchantMoreViewClicked:(id)arg1;
- (void)postShareButtonClicked:(id)arg1;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMicroMerchantMoreView:(id)arg1;
- (void)setPostShareButton:(id)arg1;
- (id)topSeperatorLine;
- (void)setTopSeperatorLine:(id)arg1;
- (id)bottomSeperatorLine;
- (void)setBottomSeperatorLine:(id)arg1;
- (void).cxx_destruct;
@end
