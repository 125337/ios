@interface MMLiveMsgTipsExpandViewCell : MMTableViewCell
{
    id <MMLiveMsgTipsExpandViewCellDelegate> _delegate; // +0x8
    UIView * _bubbleView; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMUILabel * _liveNameLabel; // +0x20
    MMUILabel * _anchorNameLabel; // +0x28
    MMUIButton * _closeButton; // +0x30
    UIView * _seperatorLine; // +0x38
    MMLiveMsgTipsExpandViewModel * _viewModel; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)liveNameLabel;
- (void)setLiveNameLabel:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
@end

