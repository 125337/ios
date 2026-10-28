@interface WCFinderLiveHomePageCircleStyleCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCardCellProtocol>
{
    WCFinderLiveGenericFeedVM * _feedVM; // +0x8
    WCFinderHeadImageView * _headImageView; // +0x10
    UILabel * _nicknameLabel; // +0x18
    UIImageView * _avatarViewCircleStatic; // +0x20
    UIView * _avatarTextTipsContainer; // +0x28
    UILabel * _avatarTextTipsLabel; // +0x30
}
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (double)cellWidth;
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)displayTips;
- (id)displayTipsTextColor;
- (id)displayTipsBackgroundColor;
- (id)outlinedSvgImageWithSize:(CGSize)arg1;
- (id)displayTipsBlurColor;
- (id)displayContact;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)avatarViewCircleStatic;
- (void)setAvatarViewCircleStatic:(id)arg1;
- (id)avatarTextTipsContainer;
- (void)setAvatarTextTipsContainer:(id)arg1;
- (id)avatarTextTipsLabel;
- (void)setAvatarTextTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
