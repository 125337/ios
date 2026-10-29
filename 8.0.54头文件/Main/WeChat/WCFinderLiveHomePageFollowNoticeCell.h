@interface WCFinderLiveHomePageFollowNoticeCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCardCellProtocol>
{
    MMWebImageView * _liveImageView; // +0x8
    UIView * _containerView; // +0x10
    UILabel * _markLabel; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMUILabel * _nickNameLabel; // +0x28
    UIView * _headImageBorderView; // +0x30
    UILabel * _noticeTimeLabel; // +0x38
    WCFinderLiveGenericFeedVM * _feedVM; // +0x40
}
+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)getQuickNoticeStringWithTs:(unsigned int)arg1;
- (id)getNoticeStringWithTs:(unsigned int)arg1;
- (id)liveImageView;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)markLabel;
- (void)setMarkLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)headImageBorderView;
- (void)setHeadImageBorderView:(id)arg1;
- (id)noticeTimeLabel;
- (void)setNoticeTimeLabel:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (void).cxx_destruct;
@end

