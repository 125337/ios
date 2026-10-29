@interface WCFinderPanelCollectionView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    WCFinderJumpInfo * _jumpInfo; // +0x10
    id <WCFinderPanelCollectionViewDelegate> _delegate; // +0x18
    double _textAreaMaxWidth; // +0x20
    double _maxWidth; // +0x28
    UIView * _containerView; // +0x30
    UIImageView * _iconImageView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _episodeLabel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithContentVM:(id)arg1;
- (void)updateLayout;
- (void)setupReportWith:(id)arg1;
- (id)bubbleTextFor:(id)arg1;
- (id)titleLabelTextFor:(id)arg1;
- (id)episodeLabelTextFor:(id)arg1;
- (void)onClickBubble;
- (id)containerView;
- (id)iconImageView;
- (id)titleLabel;
- (id)episodeLabel;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)setJumpInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)textAreaMaxWidth;
- (void)setTextAreaMaxWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setShowPosition:(int)arg1;
- (void)setContainerView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEpisodeLabel:(id)arg1;
- (void).cxx_destruct;
@end

